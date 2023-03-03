import mqtt from "mqtt";

export const client = mqtt.connect("mqtt://test.mosquitto.org:1883");

client.on("connect", () => {
  console.log("Conectado ao broker");
});
