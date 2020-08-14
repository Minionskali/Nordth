#include "factoryevent.hpp"

FactoryEvent::FactoryEvent()
{
}//Constructor FactoryEvent
FactoryEvent::~FactoryEvent()
{
}//Destruktor FactoryEvent
std::shared_ptr<EventBase> FactoryEvent::methodFactory(std::shared_ptr<EventData>& data) {
	switch (data->GetValue(data->typeEvent)) {
	case EventData::TypeEvent::eventDeath:
		return std::make_shared<EventDeath>(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	case EventData::TypeEvent::eventMotion:
		return std::make_shared<EventMotion>(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	case EventData::TypeEvent::eventPhysic:
		return std::make_shared<EventPhysic>(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	case EventData::TypeEvent::eventShare:
		return std::make_shared<EventShare>(data->GetValue(data->event), data->GetValue(data->idSender), data->GetValue(data->elementSender));
	}
	return nullptr;
}