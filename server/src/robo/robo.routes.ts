import express from "express";

import roboController from "./robo.controller";

const router = express.Router();

// POST /robo/conectar -> endpoint para conectar ao carrinho
// router.post("/robo/id", roboController.conectar);
// POST /robo/mover -> endpoint para mover o carrinho
router.post("/robo/mover", roboController.mover);
// GET /robo/info -> endpoint para receber informações sobre o carrinho
router.get("/robo/info/:id", roboController.getInfo);

export default router;
