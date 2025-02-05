# Reinstall grub if deleted (dual boot windows issue)

- Boot into any linux iso, i am using arch here
- set the terminal size

```
setfont ter-132b
```

- if you want to access your system through ssh then setup the wireless interface.

```
ip link set <interface> up  #wlan0
```

- for advanced users :(

```
iwctl help
```

- To scan and list the networks

```
iwctl station scan
iwctl station <interface> get-networks  #wlan0
```

- Connect to the network

```
iwctl station <interface> connect <ssid>   #wlan0
```

## SSH or continue as is

- Set the password

```
passwd  #Set the root password
```

- list all the partitions

```
cfdisk -l
```

- figure out which is your linux partiton and efi partition, do not include the partitions like nvme0n1p1 excluing the parittion p1 or p2, etc

```
cfdisk /dev/nvme0n1
```

```
Device              Start           End             Sectors         Size Type
/dev/nvme0n1p1      2048            534527          532480          260M EFI System
/dev/nvme0n1p2      534528          567295          32768           16M Microsoft reserved
/dev/nvme0n1p3      567296          311861247       311293952       148.4G Microsoft basic data
/dev/nvme0n1p4      311861248       721461247       409600000       195.3G Microsoft basic data
/dev/nvme0n1p5      996118528       1000214527      4096000         2G Windows recovery environment
/dev/nvme0n1p6      721461248       996118527       274657280       131G Linux filesystem
```

- `/dev/nvme0n1p6` is the installed arch linux which has to to mounted along with the EFI System
- `/dev/nvme0n1p1` is the EFI System which windows and linux both will be using, its uuid is important.

- Lets mount these both
  `mount /dev/nvme0n1p6 /mnt`
  `mount /dev/nvme0n1p1 /mnt/boot`

- Finally chroot into it
  `arch-chroot /mnt`

## Get the UUID of the EFI partition

- replace nvme0n1p1 with the correct partition for you
  `blkid /dev/nvme0n1p1`

- Return: `/dev/nvme0n1p1: LABEL_FATBOOT="SYSTEM_DRV" LABEL="SYSTEM_DRV" UUID="A6D4-8C50" BLOCK_SIZE="512" TYPE="vfat" PARTLABEL="EFI system partition" PARTUUID="8e914800-2ec8-4fe1-8b57-ef6ce11e91d2"`

## Grant yourself write permission to the '40_custom' file in /etc/grub.d

```bash
cd /etc/grub.d
sudo chmod o+w 40_custom
```

- Edit the 40_custom file
  `nvim 40_custom`

## Write the following at the bottom of the file and replace A6D4-8C50 with the correct UUID:

```
menuentry 'Windows 11' {
    search --fs-uuid --no-floppy --set=root 3C26-6A4C
    chainloader (${root})/EFI/Microsoft/Boot/bootmgfw.efi
}
```

## Back in the terminal, remove write permissions.

`sudo chmod o-w 40_custom`

## Make sure the EFI folder contains Boot, EFI, GRUB, Microsoft

`grub-install --target=x86_64-efi --efi-directory=/boot/EFI --bootloader-id=GRUB`

## Regenerate the config file

`grub-mkconfig -o /boot/grub/grub.cfg`

```Generating grub configuration file ...
Found linux image: /boot/vmlinuz-linux
Found initrd image: /boot/initramfs-linux.img
Found fallback initrd image(s) in /boot:  initramfs-linux-fallback.img
Warning: os-prober will be executed to detect other bootable partitions.
Its output will be used to detect bootable binaries on them and create new boot entries.
Adding boot menu entry for UEFI Firmware Settings ...
done
```

- You can see that it said Found linux image and Found initrd image if it didn't say that then you need to install linux

```
exit
ls /mnt/boot/
```

- You should see `initramfs-linux.img initramfs-linux-fallback.img vmlinuz-linux` or else run

```
pacman -S linux
mkinitcpio -p linux
```

- Then do a grub-install

```
grub-install --target=x86_64-efi --efi-directory=/boot/EFI --bootloader-id=GRUB
grub-mkconfig -o /boot/grub/grub.cfg
```

- You should finally see the output

## exit and unmount

```
exit
umount /mnt/boot
umount /mnt
reboot
```
