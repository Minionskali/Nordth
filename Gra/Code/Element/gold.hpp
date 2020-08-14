#ifndef GOLD_HPP
#define GOLD_HPP
#include "subject.hpp"
class Gold: public Subject
{
public:
	Gold(int value_horizontal, int value_vertical, double value_healt);
	~Gold();
}; //End class Gold
#endif //!GOLD_HPP
