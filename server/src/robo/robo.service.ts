import mqtt from "../mqtt/mqtt.service";

class RoboService {
  // connect(robotId: string) {
  //   // TODO: Implementar conexão no tópico correspondente àquele robô

  //   const connectionStatus = this.getConnectionStatus(robotId);
  //   return {
  //     robotId,
  //     connectionStatus,
  //   };
  // }

  getConnectionStatus(robotId: string) {
    return "";
  }

  move(robotId: string, direction: string) {
    // TODO: Imlementar conexão no tópico correspondente com MQTT
    const topic = `${robotId}/motor/mover`;
    mqtt.publish(topic, direction);
  }

  getDistance(robotId: string) {
    const topic = `${robotId}/sensor/ultrassom`;
    const distance = mqtt.subscribe(topic);

    return { topic, distance };
  }
}

export default new RoboService();
