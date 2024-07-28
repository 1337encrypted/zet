# Assignment Operators

- = Verbatim assignment
- := Simple expansion
- != Shell output
- ?= Conditional assignment
- += Append to

## Examples 

- SRCS = main.c
- SRCS := $(wildcard *.c)
- SRCS != find. -name **.c'
- SRCS := $(shell find. -name «*.')
- CC_FLAGS += -Wextra
- CFLAGS ? = $(CC_FLAGS)
- FOO := $(BAR) # Comment