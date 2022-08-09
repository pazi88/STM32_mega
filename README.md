# STM32_mega
STM32F407 based Arduino Mega replacement for speeduino
![alt text](https://pazi88.kuvat.fi/kuvat/Projektikuvat/Random%20projektit/speeduino/20201201_085147.jpg?img=smaller)

## Speeduino board support.

This processor board has been made mainly for the BMW PnP boards that are based on speeduino V0.4 design. Not all arduino Mega pins are connected so support other speeduino boards varies.
 ```diff 
! Official V0.3: Supported - not tested/verified
! Official V0.4: Supported - not tested/verified
+ BMW PnP boards: Supported - tested/verified
- 2001-05 MX5 PNP: Not supported
! 1996-97 MX5 PNP: Supported - not tested/verified
! 1989-95 MX5 PNP: Supported - not tested/verified
! NO2C: Supported in rev.1.3 - not tested/verified
! UA4C: Supported in rev.1.3 - not tested/verified
```

EasyEda project link: https://easyeda.com/pazi88/Arduino_Mega_2560-z92kCUO6o_copy_copy

## Setting up the DIP-switches.

![alt text](https://github.com/pazi88/STM32_mega/blob/main/Pics/DIP_switches.jpg?raw=true)

- If you wish to use the native USB on STM32, set the two USB switches to "On" and FTDI switches to "Off". No Serial0 available in this mode (bluetooth dongles don't work etc.) DEFAULT
- If you wish to use the FTDU USB to Serial converter, set the two USB switches to "Off" and FTDI switches to "On". Serial0 is available on this mode (requires different binary file to work)
- By setting PWR switch to "On" position, the speeduino board is powered by USB. This is usefull for bench testing etc. but for regular use is recommended to have this in "Off" position.
- RST DIP switch is not used or available in some board revisions.

## Drivers.

For FTDI and Native USB mode the Windows should install the drivers automatically. In Windows 7 there has been problems with drivers not installing automatically when using native USB.
STM32 VCP Win7 (and 8) drivers available here: https://www.st.com/en/development-tools/stsw-stm32102.html

## Downloading new speeduino FW to this board

1. Install https://www.st.com/content/st_com/en/products/development-tools/software-development-tools/stm32-software-development-tools/stm32-programmers/stm32cubeprog.html
2. Download one of the precombiled Speeduino binaries for this board, located here: https://github.com/pazi88/STM32_mega/tree/main/Speeduino%20binary%20files
3. Press down Boot0 button and connect usb cable to the board. Once connected, release Boot0 button. Alternately press down Boot0 and reset buttons simultaneously when usb is already connected. You should see new device "STM32 Bootloader"
4. Run STM32 Cube Programmer. (In windows, exe is is located at: C:\Program Files (x86)\STMicroelectronics\STM32Cube\STM32CubeProgrammer\bin )
5. From right, select "USB" and click "Connect"
6. Click "Open file" and browse the previously downloaded binary file.
7. Click "Download"
8. Now you should be able to connect to the board using the USB cable and use Tuner Studio. After first FW upload, you can use the "STM32 commands" menu in TS to enter Boot0.

Alternatively you can connect ST-Link dongle to the 4-pins on the PCB labeled "ST-Link" and select "ST-LINK" in the STM32 Cube Programmer. In this way, there is no need to go to Boot0 mode.

## Compiling and downloading speeduino FW to this board

To be able to compile and download FW for this board, follow these steps:

### Install tool chain
1. Install Visual Studio Code: https://code.visualstudio.com/download
2. Add Platform IO to the VS Code: https://platformio.org/
4. Replace the F407xx variant files in STM32 core with these files: https://github.com/pazi88/STM32_mega/tree/main/STM32_core%20files

### Build and upload code
1. Download/clone latest Speeduino FW that is set to work this board from here: https://github.com/pazi88/speeduino/tree/STM32_MEGA
2. Open the folder with platformio.ini to Platform IO.
3. Press down Boot0 button and connect usb cable to the board. Once connected, release Boot0 button. Alternately press down Boot0 and reset buttons simultaneously when usb is already connected. You should see new device "STM32 Bootloader"
4. In PIO Project tasks, open "black_F407VE". Then click "Upload" and PIO should compile and upload the code to the board.

Alternatively you can connect ST-Link dongle to the 4-pins on the PCB labeled "ST-Link" and set upload_protocol to "stlink", from "dfu". In this way, there is no need to go to Boot0 mode.

After these steps you should be able to connect to the board using the USB cable and use Tuner Studio. After first FW upload, you can use the "STM32 commands" menu in TS to enter Boot0.
