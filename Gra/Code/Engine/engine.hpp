#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "enginegame.hpp"
#include "enginegraphic.hpp"
#include "enginephysic.hpp"
class Engine
{
	bool Play;
public:
	Engine();
	~Engine();
	bool& isPlay();
	void run();
}; //End class Engine
#endif //!ENGINE_HPP
