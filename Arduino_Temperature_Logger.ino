#include "DHT.h" 
#define DHTPIN 2     
#define DHTTYPE DHT11   
DHT dht(DHTPIN, DHTTYPE);

const long READ_INTERVAL_MS = 2000; 
unsigned long lastReadTime = 0;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println(F("--- DHT11 Logger Starting on ESP8266 (Non-Blocking) ---"));
  
 
  dht.begin();
}

void loop() {
 
  unsigned long currentTime = millis();

 
  if (currentTime - lastReadTime >= READ_INTERVAL_MS) {
    
    lastReadTime = currentTime; 
    float h = dht.readHumidity();
    float t = dht.readTemperature(); 

     float f = dht.readTemperature(true);

     if (isnan(h) || isnan(t) || isnan(f)) {
      Serial.println(F("ERROR: Failed to read from DHT sensor! Check wiring."));
      return; 
      }

    
    float hic = dht.computeHeatIndex(t, h, false); 
    float hif = dht.computeHeatIndex(f, h);      

    
    Serial.print(F("Time [ms]: "));
    Serial.print(currentTime);
    Serial.print(F(" | Hum: "));
    Serial.print(h);
    Serial.print(F("% | Temp: "));
    Serial.print(t);
    Serial.print(F("°C / "));
    Serial.print(f);
    Serial.print(F("°F | HI: "));
    Serial.print(hic);
    Serial.print(F("°C / "));
    Serial.print(hif);
    Serial.println(F("°F"));
  }
  
}