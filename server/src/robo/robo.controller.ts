import { Request, Response } from "express";

import roboService from "./robo.service";

class RoboController {
  // POST /robo/conectar -> endpoint para conectar ao carrinho
  // async conectar(req: Request, res: Response) {
  //   try {
  //     const { robotId } = req.body.robotId;
  //     const response = await roboService.connect(robotId);
  //     res.status(200).json(response);
  //   } catch (error) {
  //     res.status(500).json({ error });
  //   }
  // }

  // POST /robo/mover -> endpoint para mover o carrinho
  async mover(req: Request, res: Response) {
    try {
      const { robotId, direction } = req.body;
      const command = await roboService.move(robotId, direction);

      res.status(200).json({ command });
    } catch (error) {
      res.status(500).json({ error });
    }
  }

  // GET /robo/info -> endpoint para receber informações sobre o carrinho
  async getInfo(req: Request, res: Response) {
    try {
      const robotId = req.params.id;
      const response = roboService.getDistance(robotId);

      const connectionStatus = roboService.getConnectionStatus(robotId);

      res.status(200).json({
        robotId,
        distance: response.distance,
        topic: response.topic,
        connectionStatus,
      });
    } catch (error) {
      res.status(500).json({ error });
    }
  }
}

export default new RoboController();
