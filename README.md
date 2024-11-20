
# ElegantOTA Template for ESP32/ESP8266  

This repository provides a simple yet powerful template for implementing Over-The-Air (OTA) updates on ESP32 or ESP8266 microcontrollers using the ElegantOTA library.  

## Overview  

The code serves as a foundational framework to enable OTA updates on your IoT projects. By including this template in your projects, you ensure that your device firmware can be updated remotely without requiring physical access.  

## Features  

- **ElegantOTA Integration**: Provides a user-friendly web interface for OTA updates.  
- **Wi-Fi Connectivity**: Connects to a specified Wi-Fi network to enable OTA updates.  
- **Basic Authentication**: Secures OTA updates using a username and password.  
- **Customizable**: Easily extend the functionality by integrating your project-specific logic.  

## How It Works  

1. **Wi-Fi Connection**: The device connects to the configured Wi-Fi network.  
2. **Web Server Initialization**: A web server is started to host the ElegantOTA interface.  
3. **OTA Update Portal**: Access the OTA portal via the device's IP address in a web browser to upload and flash new firmware.  
4. **Basic Authentication**: Protects access to the OTA portal with credentials (`ByteWaves` / `123Pass` by default).  

## Code Usage  

This template includes:  

- Wi-Fi setup  
- Web server configuration  
- ElegantOTA initialization  

## How to Use This Template  

1. **Clone This Repository**  
   Clone the repository to your local machine or copy the code into your project.  

2. **Modify Wi-Fi Credentials**  
   Replace the `ssid` and `password` variables with your Wi-Fi network credentials.  

3. **Customize OTA Credentials**  
   Change the authentication username and password in `ElegantOTA.setAuth()`.  

4. **Extend the Template**  
   Add your project-specific code to the `setup()` and `loop()` functions. Ensure the `server.handleClient()` and `ElegantOTA.loop()` calls remain intact to preserve OTA functionality.  

5. **Deploy Your Code**  
   Flash the initial code to your device using a USB connection. Subsequent updates can be done via the OTA portal.  

## Accessing the OTA Portal  

1. Connect your ESP device to Wi-Fi.  
2. Open the serial monitor to retrieve the device's IP address.  
3. Enter the IP address in your browser to access the OTA portal.  
4. Use the credentials (`ByteWaves` / `123Pass` by default) to log in.  
5. Upload your new firmware via the portal.  

## Dependencies  

- [ElegantOTA Library](https://github.com/ayushsharma82/ElegantOTA)  
- [ESP32 or ESP8266 Board Support](https://github.com/espressif/arduino-esp32)  

## License  

This project is licensed under the MIT License - see the LICENSE file for details.  
