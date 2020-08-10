#pragma once
#ifndef GAME_HPP
#define GAME_HPP
#include "manager.hpp"
#include "..\Engine\engine.hpp"
#include "..\Graphic\graphic.hpp"
#include "filegame.hpp"
class Game
{
	Engine engine;
	Graphic graphic;
	Manager manager;
public:
	Game();
	void run();
	~Game();
}; //End class Game
#endif //!GAME_HPP
