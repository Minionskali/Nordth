#include "game.hpp"

Game::Game()
{
}//Constructor Game
Game::~Game()
{
	closeWindows();
}//Destruktor Game
void Game::run() {
	createWindows(800, 600, "test");
	while (engine.isPlay())
		engine.run();
}
void Game::createWindows(unsigned int&& height, unsigned int&& width, std::string&& title) {
	window = std::make_shared<sf::RenderWindow>(sf::VideoMode(width, height), title);
}
void Game::closeWindows() {
	window->clear();
	window->display();
}