
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
	double _healt;
	bool _activeMovement;
	bool _death;
public:
	GObject(bool active,bool death, int value_horizontal, int value_vertical, double value_healt); //for expansion
	void inline horizontal(int value);
	void inline vertical(int value);
	~GObject();
	enum Actor {
		Player,
		Corpse
	};
	enum Obstacle {
		Air,
		Scale
	};
	enum Iteam {
		Dirty,
		Gold
	};
}; //End class GObject
#endif //!GOBJECT_HPP
