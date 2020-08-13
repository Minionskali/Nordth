
#ifndef ACTOR_HPP
#define ACTOR_HPP
#include "gobject.hpp"
class Actor: public GObject
{
public:
	Actor(int value_horizontal, int value_vertical, double value_healt);
	~Actor();
}; //End class Actor
#endif //!ACTOR_HPP
