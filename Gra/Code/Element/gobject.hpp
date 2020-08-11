
#ifndef GOBJECT_HPP
#define GOBJECT_HPP
#include "../Graphic/image.hpp"
#include "../Event/eventobserver.hpp"
class GObject
{
protected:
	Image* _image = nullptr;
	EventObserver* _observer=nullptr;
	unsigned int _ID;
	int _X;
	int _Y;
	bool _activeMovement;
public:
	GObject(bool active); //for expansion
	void inline horizontal(int value);
	void inline vertical(int value);
	~GObject();
}; //End class GObject
#endif //!GOBJECT_HPP
