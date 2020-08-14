#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "actor.hpp"
class Player: public Actor
{
public:
	Player(int value_horizontal, int value_vertical, double value_healt);
	~Player();
}; //End class Player
#endif //!PLAYER_HPP
