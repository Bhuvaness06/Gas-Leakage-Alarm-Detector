# IoT Gas Leakage Detection System

## Project Overview

The IoT Gas Leakage Detection System is a smart safety solution designed to detect harmful gas leaks in homes, laboratories, and industrial environments. The system continuously monitors gas concentration using an MQ-2 gas sensor and environmental conditions using a DHT22 temperature and humidity sensor.

When the gas concentration exceeds a predefined threshold, the system activates a buzzer to provide an immediate local alert. Using the Wemos D1 (ESP8266) Wi-Fi module, sensor data can also be monitored remotely through the Blynk IoT platform.

---

## Features

- Real-time gas leakage detection
- Audible alarm using buzzer
- Temperature and humidity monitoring
- Wi-Fi connectivity using ESP8266
- Remote monitoring through Blynk IoT
- Low-cost and energy-efficient design
- Suitable for homes, kitchens, laboratories, and industries

---

## Components Used

- Wemos D1 (ESP8266)
- MQ-2 Gas Sensor
- DHT22 Temperature & Humidity Sensor
- Active Buzzer
- Breadboard
- Jumper Wires
- USB Cable
- Power Supply

---

## Software Used

- Arduino IDE
- Blynk IoT Platform
- ESP8266 Board Package

---

## Working Principle

1. The MQ-2 sensor continuously detects combustible gases such as LPG, methane, propane, and smoke.
2. The DHT22 sensor measures temperature and humidity.
3. The ESP8266 processes the sensor readings.
4. If the gas concentration exceeds the safety threshold:
   - The buzzer is activated.
   - The gas value is sent to the Blynk IoT dashboard.
5. Users can monitor sensor readings remotely using the Blynk application.

---

## Applications

- Smart Homes
- Kitchens
- Chemical Laboratories
- LPG Storage Areas
- Industrial Safety
- Gas Distribution Stations

---

## Future Improvements

- SMS and Email Alerts
- Mobile Push Notifications
- Automatic Gas Valve Shutoff
- Cloud Data Logging
- AI-Based Gas Leak Prediction
- Battery Backup System

---

## Results

The developed system successfully detects gas leakage, activates an audible alarm, and transmits sensor readings to the Blynk IoT platform for remote monitoring. The solution provides an affordable and effective approach to improving safety in gas-sensitive environments.

---

## Author

**Bhuvaness**

GitHub: https://github.com/Bhuvaness06

---

## License

This project is licensed under the MIT License.
