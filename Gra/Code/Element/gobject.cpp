#include "gobject.hpp"

GObject::GObject(bool active,bool death, int value_horizontal, int value_vertical, double value_healt)
{
	_activeMovement = active;
	_X = value_horizontal;
	_Y = value_vertical;
	_healt = value_healt;
}//Constructor GObject
GObject::~GObject()
{
}//Destruktor GObject
void GObject::horizontal(int value) {
	if(_activeMovement)
	_X += value;
}
void GObject::vertical(int value) {
	if (_activeMovement)
	_Y += value;
}