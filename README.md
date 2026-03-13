## 🔌 Wiring Diagram – ESP8266 NodeMCU with DHT11

This project uses a **DHT11 temperature and humidity sensor** connected to an **ESP8266 NodeMCU**.
The wiring below matches the configuration used in the `Temperature_Logger.ino` sketch.

### 📷 Circuit Diagram

![ESP8266 NodeMCU DHT11 Wiring](https://github.com/OmShirse/Arduino_Temperature_Logger/blob/b3037b5675e8a952852d7d0306a3d8daba04fdda/Arduino_Temperature_Logger%20Diagram.png)

---

## 🧰 Components Required

* **ESP8266 NodeMCU**
* **DHT11 Temperature & Humidity Sensor**
* **Jumper wires**
* *(Optional)* 10kΩ resistor (only if using a raw DHT11 sensor)

---

## 🔗 Pin Connections

| DHT11 Pin | ESP8266 NodeMCU Pin | Purpose                           |
| --------- | ------------------- | --------------------------------- |
| **VCC**   | **3V3**             | Supplies power to the sensor      |
| **DATA**  | **D4 (GPIO2)**      | Sends temperature & humidity data |
| **GND**   | **GND**             | Common ground connection          |

---

## 🪛 Wiring Steps

1. Connect **VCC** from the DHT11 to the **3V3** pin on the NodeMCU.
2. Connect **GND** from the DHT11 to **GND** on the NodeMCU.
3. Connect the **DATA** pin from the DHT11 to **D4 (GPIO2)** on the NodeMCU.

The data pin matches the following line used in the code:

```cpp
#define DHTPIN 2
```

---

## ⚠️ Pull-Up Resistor Note

* If you are using a **bare 4-pin DHT11 sensor**, add a **10kΩ resistor between DATA and VCC**.
* If you are using a **DHT11 module (3-pin breakout board)**, the resistor is already included, so **no extra resistor is needed**.

---

✅ After completing the wiring, upload the `Temperature_Logger.ino` sketch to the NodeMCU and open the Serial Monitor to see temperature and humidity readings.
