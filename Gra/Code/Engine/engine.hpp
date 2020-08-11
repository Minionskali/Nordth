
#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "enginegame.hpp"
#include "enginegraphic.hpp"
#include "enginephysic.hpp"
#include <thread>
class Engine
{
	EngineGraphic _graphic;
	EnginePhysic _physic;
	bool Play;
public:
	Engine();
	~Engine();
	bool& isPlay();
	void run();
}; //End class Engine

#endif //!ENGINE_HPP
