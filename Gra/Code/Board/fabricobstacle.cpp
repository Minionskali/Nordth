#include "fabricobstacle.hpp"

FabricObstacle::FabricObstacle()
{
}//Constructor FabricObstacle
std::shared_ptr<GObject> FabricObstacle::methodFactory(GObject::Obstacle type, int value_horizontal, int value_vertical, double value_healt) {
	switch (type) {
	case GObject::Obstacle::Air:
		return std::make_shared<Air>(value_horizontal, value_vertical, value_healt);
	case GObject::Obstacle::Scale:
		return std::make_shared<Scale>(value_horizontal, value_vertical, value_healt);
	}
	return nullptr;
}
FabricObstacle::~FabricObstacle()
{
}//Destruktor FabricObstacle
