
The EW2024 Photobooth Demo is an interactive setup where event attendees can take instant photos using a camera, typically linked to an LCD that displays the photos and allows users to customize, add effect, and drawing on them. The Photobooth enhances user engagement and adds an entertaining, memorable experience for event participants.

Supported Targets: ESP32-S3 


### Connections

For different chip and host used, the connections may be different. Here show a example diagram of hardware connection, you can change the hardware relatively.

| EVE  | ESP32 |
| ---- | ----- |
| Host | SPI1  |
| VCC  | 3.3V  |
| GND  | GND   |
| DO   | 7     |
| DI   | 8     |
| SK   | 6     |
| CS   | 13    |

### Build and run (with dev container)

On window terminal, share the ESP's locally connected USB devices to other machines (VScode) by:

    usbipd list | grep JTAG | cut -d" " -f1

Assume the above command output "2-3":

    usbipd attach --wsl --busid 2-3
    usbipd bind --busid 2-3

One line version (need wsl or cygwin installed):

    FOR /F "delims=" %i IN ('usbipd list ^| grep JTAG ^| cut -d" " -f1') DO echo %i & usbipd attach --wsl --busid %i & usbipd bind --busid %i


Install the tool by: winget install usbipd

Read more: https://github.com/dorssel/usbipd-win

Open VScode, open local folder with dev container: "Dev Containers: Reopen Folder Locally"

On VScode, type: Ctrl Shift P, type: "ESP-IDF: Build, Flash and Start a Monitor on your Device"

Demo should start after that

Reference: https://github.com/espressif/vscode-esp-idf-extension/blob/master/docs/tutorial/using-docker-container.md

### Build and run (without dev container)

#### Install tool:
 - vscode and ESP-IDF extension
  
#### Configure the ESP-IDF extension:
 - Open the vscode, configure the ESP-IDF by command: "ESP-IDF: Configure ESP-IDF Extension"
 - The ESP-IDF setup tab will appears, add this setting:
	  - Select ESP-IDF version: -> v5.3.1 or any other version
      - Enter ESP-IDF container directory: -> [USER]\esp
      - Enter ESP-IDF Tools directory (IDF_TOOLS_PATH): ->  -> [USER]\esptools

 - Click "Configure tool" button
 - Wait for the installer finish
 - Set the ESP32S3 chip type, by command: "ESP-IDF: Set Espressif device target"
 - Set the COM port, by command: "ESP-IDF: Select Port to Use (COM, tty, usbserial)"
 - Open Terminal tab in VScode, type:
 
        $ cmd
        $ cd [USER]\esp\[ESP version]\esp-idf
    	$ install.bat
    	$ export.bat
    	$ idf.py set-target esp32s3
    	$ idf.py reconfigure
    	$ idf.py menuconfig
    	$ idf.py build

 - Click Burn button or command: "ESP-IDF: Build, Flash and Start a Monitor on your Device"
   Demo should start after that

Reference: https://github.com/espressif/vscode-esp-idf-extension/blob/master/docs/tutorial/toc.md
