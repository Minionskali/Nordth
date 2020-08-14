#include "fabricactor.hpp"

FabricActor::FabricActor()
{
}//Constructor FabricActor
std::shared_ptr<GObject> FabricActor::methodFactory(GObject::Actor type, int value_horizontal, int value_vertical, double value_healt) {
	switch (type) {
	case GObject::Actor::Corpse:
		return std::make_shared<Corpse>(value_horizontal, value_vertical, value_healt);
	case GObject::Actor::Player:
		return std::make_shared<Player>(value_horizontal, value_vertical, value_healt);
	}
	return nullptr;
}
FabricActor::~FabricActor()
{
}//Destruktor FabricActor
