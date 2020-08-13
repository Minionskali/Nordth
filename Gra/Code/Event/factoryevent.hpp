#ifndef FACTORYEVENT_HPP
#define FACTORYEVENT_HPP
#include "eventdata.hpp"
#include "eventbase.hpp"
#include "eventdeath.hpp"
#include "eventmotion.hpp"
#include "eventphysic.hpp"
#include "eventshare.hpp"
#include <memory>
class FactoryEvent
{
public:
	FactoryEvent();
	std::shared_ptr<EventBase> methodFactory(std::shared_ptr<EventData>& data);
	~FactoryEvent();
}; //End class FactoryEvent
#endif //!FACTORYEVENT_HPP
