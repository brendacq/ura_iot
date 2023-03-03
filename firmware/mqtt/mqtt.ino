#include <WiFi.h>
#include <PubSubClient.h>
#include "mqtt_credentials.h"

#define led 2


WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(115200);
  // Conectar wifi
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("*");
  }

  Serial.println("Connected!");
  client.setServer(mqtt_broker, 1883);
  client.setCallback(callback);
}


void loop() {
  if (!client.connected()) {
    client.connect("esp32Client");
  } else {
    delay(1000);
    client.subscribe("test/URA");
    // client.publish("test/send", "oi");
  }

  client.loop();  
}

void callback(char* topic, byte* message, unsigned int length) {
  Serial.print("Message arrived on topic: ");
  Serial.print(topic);
  Serial.print(". Message: ");
  String messageTemp;

  for (int i = 0; i < length; i++) {
    Serial.print((char)message[i]);
    messageTemp += (char)message[i];
  }
  Serial.println();

  if (String(topic) == "test/URA") {
    Serial.print("Changing output to ");
    if (messageTemp == "on") {
      Serial.println("on");
      digitalWrite(led, HIGH);
    } else if (messageTemp == "off") {
      Serial.println("off");
      digitalWrite(led, LOW);
    }
  }
}

