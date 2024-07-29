PowerMeter with Qt GUI
This project is a power meter utilizing the STM32G031 microcontroller, the W5500 Ethernet module, and the INA219 I2C Bidirectional Current Sensor Module. It features a Qt-based graphical user interface (GUI) for visualizing power data.

![Sample](https://github.com/Emrecanbl/PowerMeter-with-Qt-Gui/blob/main/Screenshot.png?raw=true)

Table of Contents
Introduction
Features
Hardware Components
Software Components
Setup and Installation
Usage
Contributing
License
Introduction
This power meter project measures current and voltage using the INA219 sensor, processes the data with the STM32G031 microcontroller, and transmits the information via Ethernet using the W5500 module. The Qt GUI displays real-time power consumption data.

Features
Real-time power measurement
Ethernet communication
Qt-based GUI for data visualization
User-friendly interface
Hardware Components
STM32G031 microcontroller
W5500 Ethernet module
INA219 I2C Bidirectional Current Sensor Module
Miscellaneous: resistors, capacitors, connectors, etc.
Software Components
STM32 firmware (C)
Qt GUI application
Ethernet communication protocol
Setup and Installation
Hardware Setup
Connect the INA219 Sensor:

Connect VCC to 3.3V power supply
Connect GND to ground
Connect SCL to the I2C clock pin on STM32
Connect SDA to the I2C data pin on STM32
Connect the W5500 Ethernet Module:

Connect VCC to 3.3V power supply
Connect GND to ground
Connect SPI pins to the respective SPI pins on STM32
Connect Ethernet cable to the network
Connect STM32G031:

Flash the STM32 firmware to the microcontroller
Power the microcontroller with a suitable power supply

![Sample](https://github.com/Emrecanbl/PowerMeter-with-Qt-Gui/blob/main/Screenshot_1.png?raw=true)

Power Up the System:

Ensure all hardware components are correctly connected and powered
Run the Qt GUI Application:

Launch the Qt application on your computer
Connect to the power meter device via Ethernet
Monitor the real-time power data displayed on the GUI
Contributing
Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.


Driver I used for Ina 219 sensor :
https://github.com/komuch/PSM_INA219_STM32


License
This project is licensed under the MIT License. See the LICENSE file for details.

