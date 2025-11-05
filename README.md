Wiring Diagram for ESP8266 NodeMCU and DHT11 Sensor

This wiring guide explains how to interface the DHT11 Temperature and Humidity Sensor with an ESP8266 NodeMCU board. The configuration corresponds to the logic used in the Temperature_Logger.ino sketch.

Components Required
Component Type	Description
Microcontroller	ESP8266 NodeMCU (or similar development board)
Sensor	DHT11 Temperature and Humidity Sensor (standalone or on a breakout board)
Wiring	Jumper wires (male-to-female or male-to-male as required)
Connection Table

The DHT11 sensor uses three pins for interfacing: Power (VCC), Ground (GND), and Data (Signal). The table below lists the connections between the DHT11 and the ESP8266 NodeMCU.

+------------------+--------------+---------------------+--------------------------------------------------------------+
| DHT11 Pin        | Wire Color   | ESP8266 NodeMCU Pin | Function                                                     |
+------------------+--------------+---------------------+--------------------------------------------------------------+
| VCC (Power)      | Red          | 3V3                 | Provides 3.3V power to the sensor.                           |
| Data (Signal)    | Yellow/Orange| D4 (GPIO 2)         | Data line for communication. Matches `#define DHTPIN 2`.     |
| GND (Ground)     | Black        | GND                 | Common ground connection.                                    |
+------------------+--------------+---------------------+--------------------------------------------------------------+

Detailed Wiring Instructions

Power Connection
Connect the VCC (Red Wire) from the DHT11 sensor to the 3V3 pin on the ESP8266 NodeMCU.

Ground Connection
Connect the GND (Black Wire) from the DHT11 sensor to any GND pin on the ESP8266 NodeMCU.

Data Connection
Connect the Data (Yellow/Orange Wire) from the DHT11 sensor to the D4 (GPIO 2) pin on the ESP8266 NodeMCU.
This matches the definition #define DHTPIN 2 used in the code.

Note on Resistors

If you are using a raw 4-pin DHT11 sensor (without a breakout board), place a 10 kΩ pull-up resistor between the Data and VCC pins.

If you are using a 3-pin or 4-pin DHT11 breakout module, the pull-up resistor is typically already included on the PCB, so no external resistor is required.
