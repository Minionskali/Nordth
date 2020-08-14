
#ifndef FABRICACTOR_HPP
#define FABRICACTOR_HPP
#include "../Element/player.hpp"
#include "../Element/corpse.hpp"
class FabricActor
{
public:
	FabricActor();
	std::shared_ptr<GObject> methodFactory(GObject::Actor type, int value_horizontal, int value_vertical, double value_healt);
	~FabricActor();
}; //End class FabricActor
#endif //!FABRICACTOR_HPP
