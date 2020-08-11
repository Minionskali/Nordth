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
	window = new sf::RenderWindow(sf::VideoMode(width, height), title);
}
void Game::closeWindows() {
	if (window) {
		window->clear();
		window->display();
		delete window;
		window = nullptr;
	}

}