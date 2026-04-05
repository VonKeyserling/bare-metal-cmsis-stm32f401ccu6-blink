# DIRECTORIES
INCLUDE_DIRS = include
LIBRARY_DIRS = lib
SOURCE_DIRS  = src
BUILD_DIR    = build

# DEFINES
STM_DEVICE = STM32F401xC

# TOOLCHAIN
CC      = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy

# SOURCES & OBJECTS
SRCS = $(shell find $(SOURCE_DIRS) $(LIBRARY_DIRS) -name '*.c')
OBJS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)

# COMPILER FLAGS
CFLAGS  = -mcpu=cortex-m4 -mthumb
CFLAGS += -mfpu=fpv4-sp-d16 -mfloat-abi=hard
CFLAGS += -std=gnu11
CFLAGS += -D$(STM_DEVICE)
CFLAGS += $(addprefix -I, $(INCLUDE_DIRS))
CFLAGS += -g -Wall -Wextra
CFLAGS += -MMD -MP

# LINKER FLAGS
LDFLAGS  = -mcpu=cortex-m4 -mthumb
LDFLAGS += -mfpu=fpv4-sp-d16 -mfloat-abi=hard
LDFLAGS += --specs=nosys.specs
LDFLAGS += -nostdlib
LDFLAGS += -T linker.ld
LDFLAGS += -Wl,-Map=$(BUILD_DIR)/memory.map

.PHONY: all clean flash reset

all: $(BUILD_DIR)/firmware.elf $(BUILD_DIR)/firmware.bin

$(BUILD_DIR)/firmware.bin: $(BUILD_DIR)/firmware.elf
	$(OBJCOPY) -O binary $< $@

$(BUILD_DIR)/firmware.elf: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

$(OBJS): $(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) $< -o $@

-include $(DEPS)

clean:
	@rm -rf $(BUILD_DIR) && mkdir -p $(BUILD_DIR)

flash: $(BUILD_DIR)/firmware.elf
	openocd -f interface/stlink.cfg \
	        -f target/stm32f4x.cfg \
	        -c "program $(BUILD_DIR)/firmware.elf verify reset exit"

reset:
	openocd -f interface/stlink.cfg \
	        -f target/stm32f4x.cfg \
	        -c "init; reset run; exit"
