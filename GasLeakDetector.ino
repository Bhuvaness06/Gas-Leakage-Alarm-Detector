#define BLYNK_TEMPLATE_ID "TMPL4q3GZF0HQ"
#define BLYNK_TEMPLATE_NAME "Gas Detector"
#define BLYNK_AUTH_TOKEN "eQCsusCBr4DwEwyIxi7S3cl2xj6L7s8i"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include "DHT.h"

char ssid[] = "YOUR WIFI NAME";
char pass[] = "PASSWORD";

#define MQ2_PIN A0
#define DHTPIN D7
#define DHTTYPE DHT22
#define BUZZER D6

DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;

String detectGas(float value) {
  if (value > 700) return "LPG / Butane";
  else if (value > 500) return "Methane";
  else if (value > 300) return "Carbon Monoxide";
  else if (value > 110) return "Fire detected";
  else return "Normal Air";
}

void sendSensorData() {
  float mq2Value = analogRead(MQ2_PIN);
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  String gasType = detectGas(mq2Value);

  Blynk.virtualWrite(V0, temperature);
  Blynk.virtualWrite(V1, humidity);
  Blynk.virtualWrite(V2, mq2Value);
  Blynk.virtualWrite(V3, gasType);

  Serial.print("Gas Value: "); Serial.println(mq2Value);
  Serial.print("Gas Type: "); Serial.println(gasType);
  Serial.print("Temperature: "); Serial.print(temperature);
  Serial.print(" °C, Humidity: "); Serial.print(humidity); Serial.println(" %");

  if (mq2Value > 110) {
    digitalWrite(BUZZER, HIGH);
    Blynk.logEvent("gas_alert", "Gas Leakage Detected: " + gasType);
  } else {
    digitalWrite(BUZZER, LOW);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
  dht.begin();

  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
  }

  Blynk.config(BLYNK_AUTH_TOKEN);
  Blynk.connect();

  timer.setInterval(3000L, sendSensorData);
}

void loop() {
  Blynk.run();
  timer.run();
}
