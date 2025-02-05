## ENTRY command

- The entry point of startup file should be mentioned inside the ENTRY command
- The linker script should be provided in the same directory as the startup file

syntax:

```
ENTRY(_start)
```

## MEMORY command

- This command describes the different memory regions of the target program, it also provides their start addresses and size information
- Typically one linker script has one memory command

syntax:

```
MEMORY
{
  name(attributes) : ORIGIN = address, LENGTH = size
}
```

- name: user defined name given to the memory regions
- attributes: read, write, execute
- address: starting address of the memory region
- size: size of the memory region

| Attribute letter | Meaning |
| R | Read-only section |
| W | Read and write sections |  
| X | Sectiuon containng executable code |
| A | Allocated sections |
| I | Initialized sections |
| L | Same as L |
| ! | Invert the sense of the following attributes |

example:

```
MEMORY
{
  ROM (rx) : ORIGIN = 0x00000000, LENGTH = 256K
  RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 256K
  FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 256K
}
```

## SECTION command

- This command is used to describe the different output sections in the final elf executable generated
- Important command by which you can instruct the linker how to merge the input seciton to yield an outpout section
- This command also controls the order in which different output section appear in the final elf file generated
- By using this comman, you also mention the placement of a section in a memory region. For example, you instruct the linker to place the .text section in the FLASH memory region, which is descriobed by the memory command.
