#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "iteam.hpp"
class Weapon: public Iteam
{
public:
	Weapon(int value_horizontal, int value_vertical, double value_healt);
	~Weapon();
}; //End class Weapon
#endif //!WEAPON_HPP
