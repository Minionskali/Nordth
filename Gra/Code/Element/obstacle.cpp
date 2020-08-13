#include "obstacle.hpp"

Obstacle::Obstacle(int value_horizontal, int value_vertical, double value_healt):GObject(false, false,value_horizontal, value_vertical, value_healt)
{
}//Constructor Obstacle
void Obstacle::setActiveDeath(bool value) {
	_death = value;
}
Obstacle::~Obstacle()
{
}//Destruktor Obstacle
