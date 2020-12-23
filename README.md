# STM32_mega
STM32 based Arduino Mega replacement for speeduino

To be able to compile code for this board, follow these steps:

## Install tool chain
1. Install the arduino IDE (1.8.12)
2. Install the stm32duino core from: https://github.com/stm32duino/Arduino_Core_STM32 (version 1.9.0)
3. install https://www.st.com/content/st_com/en/products/development-tools/software-development-tools/stm32-software-development-tools/stm32-programmers/stm32cubeprog.html
4. Replace the F407xx variant files in STM32 core with these files: https://github.com/pazi88/STM32_mega/tree/main/STM32_core%20files

## Build code
1. Download 202012 FW release
2. Open the code in de arduino IDE.
3. In arduino IDE select Tools->Board: GENERIC STM32F4 series
4. In Arduino IDE select Tools->Board part number: "BLACK F407VE"
5. In Arduino IDE select Tools->USART support: Enabled (generic serial)
6. In Arduino IDE select Tools->USB support: CDC (generic serial)
7. Open the globals.h file located in project folder
8. Look at line 55..58 and replace line //#define USE_SPI_EEPROM PB0 with #define USE_SPI_EEPROM PE1 /*Use M25Qxx SPI flash */
9. Open the globals.h file located in project folder
10. Look at line 1312..1448 and remove the STM32 specific pin mappings for v0.4 board (otherwise the SMT32 mega will lockup)
11. Build the speeduino project. 

## Upload
1. Press down Boot0 button and connect usb cable to the board. Once connected, release Boot0 button. Alternately press down Boot0 and reset buttons simultaneously when usb is already connected.
2. In Arduino IDE select Programmer: "STM32CubeProgrammer DFU" 
3. Upload the code

After these steps you should be able to connect to the board using the USB cable and use Tuner Studio. After first FW upload, you can use the "STM32 commands" menu in TS to enter Boot0.
