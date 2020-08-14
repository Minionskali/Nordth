
#ifndef FABRICOBSTACLE_HPP
#define FABRICOBSTACLE_HPP
#include "../Element/air.hpp"
#include "../Element/scale.hpp"
class FabricObstacle
{
public:
	FabricObstacle();
	std::shared_ptr<GObject> methodFactory(GObject::Obstacle type, int value_horizontal, int value_vertical, double value_healt);
	~FabricObstacle();
}; //End class FabricObstacle
#endif //!FABRICOBSTACLE_HPP
