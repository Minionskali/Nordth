
#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP
#include "gobject.hpp"
class Obstacle: public GObject
{
public:
	Obstacle(int value_horizontal, int value_vertical, double value_healt);
	void setActiveDeath(bool value);
	~Obstacle();
}; //End class Obstacle
#endif //!OBSTACLE_HPP
