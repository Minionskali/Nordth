#include "factoryevent.hpp"

FactoryEvent::FactoryEvent()
{
}//Constructor FactoryEvent
FactoryEvent::~FactoryEvent()
{
}//Destruktor FactoryEvent
EventBase* FactoryEvent::methodFactory(EventData* data) {
	switch (data->GetValue(data->typeEvent)) {
	case EventData::TypeEvent::eventDeath:
		return new EventDeath(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	case EventData::TypeEvent::eventMotion:
		return new EventMotion(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	case EventData::TypeEvent::eventPhysic:
		return new EventPhysic(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	case EventData::TypeEvent::eventShare:
		return new EventShare(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	}
	return nullptr;
}