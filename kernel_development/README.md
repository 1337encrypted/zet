# Guide to Linux kernel development

## Clone the kernel repo
1. Head over to kernel.org and clone the latest stable kernel version. 

```git clone https://git.kernel.org/pub/scm/linux/kernel/git/stable/linux.git/```

## Install dependencies
1. Dependencies can be found in linux/Documentation/process/changes.rst

## Generate the config file from scratch (Not recommeneded) or Copy your current system's configuraiton

1. Compile the kernel from scratch (Not Recommended) 
```
make config
```

1. Copy the config file form your /boot/config-$(uname -r) (Recommeded)

```
cp /proc/config.gz ./
gunzip config.gz
mv config .config
```
1. Update the config file to the settings in the linux folder kernel
```
make oldconfig
```

1. Edit the CONFIG_EXT4_FS=m to CONFIG_EXT4_FS=y

1. Compile the kernel with all the cores on the system
```
make -j$(nproc)
```
1. If compiles fails then dont compile again run 
    - NOTE: Backup your config file before running this as it will delete it.
``` make mrproper```

1. Next you need to make modules_install
```sudo make modules_install```

1. If its your own custom linux kernel then update the `CONFIG_LOCALVERSION` to your custom name
```CONFIG_LOCALVERSION="shadysArch"```
```CONFIG_DEFAULT_HOSTNAME="shadyArch"```

1. You can now say make install again to reflect the changes
```sudo make install```

# Write your first module

1. Write the helloworld.c program
- It should contain an __init function and an __exit fucntion

1. Makefile
```
# Makefile
obj-m += helloworld.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(uname -r)/build M=$(PWD) clean
```
1. In systemd kernel modules are placed in the directory `/etc/modules-load.d`

1. Create a helloworld.conf type Helloworld in it.
```sudo vim /etc/modules-load.d/helloworld.conf```

1. This would load the module using modprobe, but modprobe would find it in the `/lib/modules/$(uname -r)`
- To solve this copy your helloworld.ko to the /lib/modules/$(uname -r)/ directory 
```sudo cp helloworld.ko /lib/modules/$(uname -r)/```

1. Update the cache
`sudo depmod -a`

1. Follwed by `sudo modprobe helloworld`

1. Use dmesg to check for the output in the logs
```sudo dmesg```

1. Unload it using 
```sudo rmmod helloworld```

