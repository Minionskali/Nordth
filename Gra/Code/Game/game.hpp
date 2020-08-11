
#ifndef GAME_HPP
#define GAME_HPP
#include "manager.hpp"
#include "../Engine/engine.hpp"
#include "../Graphic/graphic.hpp"
#include "filegame.hpp"
#include <string>
class Game
{
	Engine engine;
	Graphic graphic;
	Manager manager;
	sf::RenderWindow* window = nullptr;
public:
	Game();
	void run();
	void createWindows(unsigned int&& height, unsigned int&& width, std::string&& title);
	void closeWindows();
	~Game();
}; //End class Game
#endif //!GAME_HPP
