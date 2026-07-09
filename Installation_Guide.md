# Installation Guide

## 1. Install Arduino IDE
Download and install Arduino IDE.

## 2. Install ESP8266 Board
Open Boards Manager and install **ESP8266 by ESP8266 Community**.

## 3. Install Libraries
- Blynk
- DHT Sensor Library
- Adafruit Unified Sensor

## 4. Configure Code
Replace:
- YOUR_WIFI_NAME
- YOUR_WIFI_PASSWORD
- YOUR_BLYNK_AUTH_TOKEN

## 5. Select Board
**LOLIN(WEMOS) D1 R2 & mini** (or your Wemos D1 variant)

## 6. Upload
Connect the board and upload `GasLeakDetector.ino`.

## 7. Monitor
Open Serial Monitor (9600 baud) and observe readings. Verify Blynk dashboard updates and buzzer activation when gas threshold is exceeded.
