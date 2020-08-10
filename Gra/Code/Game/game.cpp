#include "game.hpp"

Game::Game()
{
}//Constructor Game
Game::~Game()
{
}//Destruktor Game
void Game::run() {
	while(engine.isPlay())
		engine.run();
}