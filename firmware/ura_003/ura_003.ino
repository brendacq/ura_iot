#include <Ultrasonic.h>
#include "MotorControl.h"
#include <WiFi.h>
#include "WifiConfig.h"
#include <PubSubClient.h>

byte triggerPin = 22;
byte echoPin = 23;

// MOTOR ESQUERDO
byte motorA_1A = 27;
byte motorA_1B = 14;

//MOTOR DIREITO
byte motorB_1A = 12;
byte motorB_1B = 13;

const char* ssid = "NOME_DA_REDE";
const char* password = "SENHA_DA_REDE";

Ultrasonic sonar(triggerPin, echoPin);
MotorControl andar(motorA_1A, motorA_1B, motorB_1A, motorB_1B);
WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  if (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print("*");
  }

  Serial.print("\nConectado");
  client.setServer("test.mosquitto.org", 1883);
  client.setCallback(callback);
}

void loop() {
  unsigned int leituraSensor = sonar.read(CM);
  String string = String(leituraSensor);
  const char* distancia = string.c_str();
  if(client.connected()){
    client.subscribe("URA003/motor/mover");
    client.publish("URA003/sensor/ultrassom", distancia);
  } else {
    client.connect("URA003");
  }

  client.loop();

}

void callback(const char* topic, byte* payload, unsigned int length){
  String message;

  for(int i=0; i<length; i++){
    message += (char)payload[i];
  }

  if(String(topic) == "URA003/motor/mover"){
    if(message == "f"){
      andar.frente();
    } else if(message == "r"){
      andar.re();
    } else if(message == "e"){
      andar.esquerda();
    } else if(message == "d"){
      andar.direita();
    }
  }
}
