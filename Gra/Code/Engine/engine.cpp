#include "engine.hpp"

Engine::Engine()
{
	Play = false;
}//Constructor Engine
Engine::~Engine()
{
}//Destruktor Engine
bool& Engine::isPlay() {
	return Play;
}
void Engine::run() {

}