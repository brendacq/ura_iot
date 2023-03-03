import { client } from "./mqtt.client";

class MqttService {
  private distance: string = "";

  subscribe(topic: string) {
    try {
      if (client.connected) {
        client.subscribe(topic);

        client.on("message", (topic: string, message: number) => {
          const distance = message.toString();
          this.distance = distance;
        });
        return this.distance;
      } else {
        throw new Error("Something's wrong");
      }
    } catch (error) {
      return Error;
    }
  }

  publish(topic: string, direction: string) {
    try {
      if (client.connected) {
        client.publish(topic, direction);
      }
    } catch (error) {
      console.log(error);
    }
  }
}

export default new MqttService();
