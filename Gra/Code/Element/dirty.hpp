#ifndef DIRTY_HPP
#define DIRTY_HPP
#include "weapon.hpp"
class Dirty: public Weapon
{
public:
	Dirty(int value_horizontal, int value_vertical, double value_healt);
	~Dirty();
}; //End class Dirty
#endif //!DIRTY_HPP
