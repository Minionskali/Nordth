#ifndef CORPSE_HPP
#define CORPSE_HPP
#include "actor.hpp"
class Corpse: public Actor
{
public:
	Corpse(int value_horizontal, int value_vertical, double value_healt);
	~Corpse();
}; //End class Corpse
#endif //!CORPSE_HPP
