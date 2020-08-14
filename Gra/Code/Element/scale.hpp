#ifndef SCALE_HPP
#define SCALE_HPP
#include "obstacle.hpp"
class Scale: public Obstacle
{
public:
	Scale(int value_horizontal, int value_vertical, double value_healt);
	~Scale();
}; //End class Scale
#endif //!SCALE_HPP
