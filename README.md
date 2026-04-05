# Ultra Bare-Minimal CMSIS Blink (STM32F401CCU6)

![License](https://img.shields.io/badge/license-GPL--3.0-blue.svg)
![Language](https://img.shields.io/badge/language-C-orange.svg)
![Platform](https://img.shields.io/badge/platform-STM32-blue)

A stripped-down, bare-metal "Blink LED" implementation for the **STM32F401CCU6** microcontroller. 

This project demonstrates how to control the hardware using **pure CMSIS** (Cortex Microcontroller Software Interface Standard) without relying on heavy abstraction layers like HAL or LL, and uses a clean **Makefile** for the build process.

## 🎯 Project Goal

The main goal of this repository is to provide a minimalist template for developers who want to:
* Understand the low-level startup process of the STM32F4.
* Avoid the overhead and complexity of vendor-specific IDEs (CubeIDE, Keil, etc.).
* Have a clean base for building efficient, register-level drivers.

## 🛠️ Hardware Requirements

* **Microcontroller:** STM32F401CCU6 (Commonly found on the "Black Pill" development board).
* **Debugger/Programmer:** ST-Link V2 (or compatible OpenOCD interface).

[Image of STM32F401CCU6 Black Pill pinout]

> **Note:** The default code is configured to blink the onboard LED, usually connected to **PC13**.

## 📂 Project Structure

```text
├── build/              # Compiled object files and binaries
├── include/            # CMSIS headers and project definitions
├── src/                # Source code (main.c, startup, etc.)
├── linker.ld           # Linker script for memory layout
├── Makefile            # Build configuration
└── README.md           # This file
