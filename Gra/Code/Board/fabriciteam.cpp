#include "fabriciteam.hpp"

FabricIteam::FabricIteam()
{
}//Constructor FabricIteam
std::shared_ptr<GObject> FabricIteam::methodFactory(GObject::Iteam type, int value_horizontal, int value_vertical, double value_healt) {
	switch (type) {
	case GObject::Iteam::Dirty:
		return std::make_shared<Dirty>(value_horizontal, value_vertical, value_healt);
	case GObject::Iteam::Gold:
		return std::make_shared<Gold>(value_horizontal, value_vertical, value_healt);
	}
	return nullptr;
}
FabricIteam::~FabricIteam()
{
}//Destruktor FabricIteam
