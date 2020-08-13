#include "engine.hpp"
void render(EngineGraphic&& graphic);
void calculations(EnginePhysic&& physic);
Engine::Engine()
{
	Play = true;
}//Constructor Engine
Engine::~Engine()
{
}//Destruktor Engine
bool& Engine::isPlay() 
{
	return Play;
}
void Engine::run()  // add event handling
{
	//start thread
	std::thread tRender(render, _graphic);
	std::thread tCalculations(calculations, _physic);
	
	//Display on screen
	
	
	//end thead
	tRender.join();
	tCalculations.join();

}
void Engine::CreativeBoard() {
	BoardBulider bulider;
	std::shared_ptr<Board> board = bulider.build();
	_physic.AddBoard(board);
	_graphic.AddBoard(board);
	_game.AddBoard(board);
}
void render(EngineGraphic&& graphic) {
	graphic.PLACEHOLDER();
}
void calculations(EnginePhysic&& physic) {
	physic.PLACEHOLDER();
}
