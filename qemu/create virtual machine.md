# QEMU Virtual Machine Guide

## Creating a Virtual Disk Image

To create a virtual disk image, use the following command:

```bash
qemu-img create -f qcow2 <Image.qcow2> 10G
```

- **`qemu-img create`**: Command to create a new disk image.
- **`-f qcow2`**: Specifies the format of the disk image. `qcow2` is a flexible and efficient format.
- **`Image.qcow2`**: The name of the image file to be created. (Ex arch.qcow2)
- **`10G`**: Size of the disk image (10 gigabytes).

## Launching the Virtual Machine

To start the VM, use this command:

```bash
qemu-system-x86_64 -enable-kvm -cdrom <OS_ISO.iso> -boot menu=on -drive file=<Image.qcow2> -m 2G
```

- **`-enable-kvm`**: Enables KVM (Kernel-based Virtual Machine) for hardware acceleration, which improves performance.
- **`-cdrom OS_ISO.iso`**: Specifies the ISO file to use as a virtual CD-ROM drive. Replace `OS_ISO.iso` with your operating system ISO file.
- **`-boot menu=on`**: Enables the boot menu to select boot options.
- **`-drive file=Image.qcow2`**: Specifies the virtual disk image file and its format. This ensures the correct format is used.
- **`-m 2G`**: Allocates 2 gigabytes of RAM to the virtual machine.

**Note**: You can use `Ctrl + Alt + G` to release the mouse capture and `Ctrl + Alt + F` to toggle fullscreen mode.

## Improving Performance

To enhance VM performance, consider using the following options:

- **`-cpu host`**: Configures the virtual CPU to match the host's CPU, which can improve performance and compatibility.

  ```bash
  qemu-system-x86_64 -enable-kvm -cdrom OS_ISO.iso -boot menu=on -drive file=<Image.qcow2> -m 2G -cpu host
  ```

- **`-smp 2`**: Sets the number of virtual CPUs (cores). Adjust the number according to the number of cores you want to allocate.

  ```bash
  qemu-system-x86_64 -enable-kvm -cdrom <OS_ISO.iso> -boot menu=on -drive file=<Image.qcow2> -m 2G -cpu host -smp 2
  ```

## 2D Graphics Acceleration

For better graphical performance, you can use the `-vga` option to select a VGA card emulator. The available options include:

- **`qxl`**: Provides 2D acceleration but requires additional kernel modules (`qxl` and `bochs_drm`).

```bash
sudo modprobe qxl bochs_drm
```

```bash
qemu-system-x86_64 -enable-kvm -cdrom <OS_ISO.iso> -boot menu=on -drive file=<Image.qcow2> -m 2G -cpu host -smp 2 -vga qxl
```

## 3D Graphics Acceleration

```bash
qemu-system-x86_64 -enable-kvm -cdrom <OS_ISO.iso> -boot menu=on -drive file=<Image.qcow2> -m 2G -cpu host -smp 2 -vga virtio -display sdl,gl=on
```

## Additional Tips

- **`-netdev user,id=net0`** and **`-device virtio-net,netdev=net0`**: Add network support with user-mode networking.
- **`-snapshot`**: Run the VM in snapshot mode, where changes are not written to the disk image, allowing safe experimentation.
