#ifndef AIR_HPP
#define AIR_HPP
#include "obstacle.hpp"
class Air: public Obstacle
{
public:
	Air(int value_horizontal, int value_vertical, double value_healt);
	~Air();
}; //End class Air
#endif //!AIR_HPP
