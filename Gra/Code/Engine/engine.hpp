
#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "enginegame.hpp"
#include "enginegraphic.hpp"
#include "enginephysic.hpp"
#include "../Board/boardbulider.hpp"
#include <thread>
class Engine
{
	EngineGame _game;
	EngineGraphic _graphic;
	EnginePhysic _physic;
	bool Play;
public:
	Engine();
	~Engine();
	bool& isPlay();
	void CreativeBoard();
	void run();
}; //End class Engine

#endif //!ENGINE_HPP
