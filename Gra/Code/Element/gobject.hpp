#ifndef GOBJECT_HPP
#define GOBJECT_HPP
#include "../Graphic/image.hpp"
#include "../Event/eventobserver.hpp"
class GObject
{
protected:
	Image* image;
	EventObserver* observer;
	unsigned int ID;
public:
	GObject();
	~GObject();
}; //End class GObject
#endif //!GOBJECT_HPP
