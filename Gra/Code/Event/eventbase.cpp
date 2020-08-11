#include "eventbase.hpp"

EventBase::EventBase(EventData* event)
{
	_IDSender = event->GetValue(event->idSender);
	_ElementSender = Element(event->GetValue(event->elementSender));
	_event = Event(event->GetValue(event->event));
}//Constructor EventBase
EventBase::~EventBase()
{
}//Destruktor EventBase
//EventBase::EventBase() {}