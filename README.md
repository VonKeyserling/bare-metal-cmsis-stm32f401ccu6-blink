<div>

# 🚀 Bare-Metal CMSIS STM32F401CCU6 Blink

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](#)
[![Platform](https://img.shields.io/badge/platform-STM32F4-blue)](#)
[![Framework](https://img.shields.io/badge/framework-CMSIS-orange)](#)

*A minimalist bare-metal template for the STM32F401CCU6 (Black Pill), strictly based on the CMSIS library and automated via Makefile.*

</div>

---

## 🛠️ Overview
This repository provides a foundational infrastructure free of high-level abstractions (such as ST's HAL), intended for toolchain validation and direct register manipulation study.

## 💻 Hardware Specifications
* **Microcontroller:** STM32F401CCU6 (ARM Cortex-M4F)
* **Memory Map:** 256 KB Flash, 64 KB SRAM
* **Test Output:** On-board LED connected to pin **PC13** (Active-Low logic).

## ⚙️ System Requirements
The development environment assumes a Linux distribution. The following cross-compilation and flashing tools are mandatory:
* `arm-none-eabi-gcc` (Compiler and Linker)
* `make` (Build process automation)
* `openocd` (Flashing and debugging via ST-Link v2 interface)

## 🚀 Build Commands
The entire compilation process is encapsulated by the `Makefile`. The final artifacts (`.elf`, `.bin`, `.hex`, and `.map`) are isolated within the `build/` directory.

| Action | Command |
| :--- | :--- |
| **Compile** | `make` |
| **Clean** | `make clean` |
| **Flash** | `make flash` |

## 🏗️ Internal Architecture
* **Compilation Optimization:** The Makefile includes strict architecture flags (`-mcpu=cortex-m4`, `-mthumb`, `-mfloat-abi=hard`, `-mfpu=fpv4-sp-d16`) to utilize the hardware Floating-Point Unit (FPU).
* **Linker Script:** Explicitly maps the base addresses and sizes of the RAM and Flash memory regions according to the reference manual.
* **Startup:** Initialization code responsible for setting up the vector table, zeroing the `.bss` section in RAM, and transferring the `.data` section from Flash to RAM prior to executing the `main()` function.

---
