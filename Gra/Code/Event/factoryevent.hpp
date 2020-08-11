#ifndef FACTORYEVENT_HPP
#define FACTORYEVENT_HPP
#include "eventdata.hpp"
#include "eventbase.hpp"
#include "eventdeath.hpp"
#include "eventmotion.hpp"
#include "eventphysic.hpp"
#include "eventshare.hpp"
class FactoryEvent
{
public:
	FactoryEvent();
	EventBase* methodFactory(EventData* data);
	~FactoryEvent();
}; //End class FactoryEvent
#endif //!FACTORYEVENT_HPP
