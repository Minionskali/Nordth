#include "gobject.hpp"

GObject::GObject(bool active)
{
	_activeMovement = active;
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