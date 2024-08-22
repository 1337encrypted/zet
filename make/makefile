# Directories
SRCDIR := src
INCDIR := include
OBJDIR := .build
DEPDIR := .dep

# Source files and objects
SRCS := $(wildcard $(SRCDIR)/*.c)
OBJS := $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
DEPS := $(SRCS:$(SRCDIR)/%.c=$(DEPDIR)/%.d)

# Compiler flags
CFLAGS := -I$(INCDIR)
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d

# Default target
TARGET := program

# Rule to compile object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR) $(DEPDIR)
	@echo [CC] $@
	@$(CC) -c $(CFLAGS) $(DEPFLAGS) -o $@ $<

# Rule to link the target
$(TARGET): $(OBJS)
	@echo [LD] $@
	@$(CC) $(LDFLAGS) -o $@ $^

# Rule to clean build artifacts
clean:
	@rm -rf $(OBJDIR) $(DEPDIR) $(TARGET)

# Rule to create necessary directories
$(OBJDIR) $(DEPDIR):
	@mkdir -p $@

# Rule to build with debugging information
.PHONY: gdb
gdb: CFLAGS += -g
gdb: $(TARGET)

# Include dependency files
include $(wildcard $(DEPS))
