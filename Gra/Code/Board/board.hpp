#ifndef BOARD_HPP
#define BOARD_HPP
#include "../Element/actor.hpp"
#include "../Element/iteam.hpp"
#include "../Element/obstacle.hpp"
class Board
{
	Actor* actor;
	Iteam* iteam;
	Obstacle* obstacle;
	int SizeActor;
	int SizeIteam;
	int SizeObstacle;
public:
	Board();
	~Board();
}; //End class Board
#endif //!BOARD_HPP
