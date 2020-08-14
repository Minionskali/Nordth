
#ifndef FABRICITEAM_HPP
#define FABRICITEAM_HPP
#include "../Element/gold.hpp"
#include "../Element/dirty.hpp"
class FabricIteam
{
public:
	FabricIteam();
	std::shared_ptr<GObject> methodFactory(GObject::Iteam type, int value_horizontal, int value_vertical, double value_healt);
	~FabricIteam();
}; //End class FabricIteam
#endif //!FABRICITEAM_HPP
