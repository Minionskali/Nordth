
#ifndef BOARD_HPP
#define BOARD_HPP
#include "../Element/actor.hpp"
#include "../Element/iteam.hpp"
#include "../Element/obstacle.hpp"

class Board
{
	std::shared_ptr<Actor> actor;
	std::shared_ptr<Iteam> iteam;
	std::shared_ptr<Obstacle> obstacle;
	int SizeActor;
	int SizeIteam;
	int SizeObstacle;
public:
	Board();
	~Board();
}; //End class Board
#endif //!BOARD_HPP
