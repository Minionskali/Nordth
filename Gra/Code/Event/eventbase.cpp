#include "eventbase.hpp"

EventBase::EventBase(EventData* event)
{
	_IDRecipient = event->GetValue(event->idRecipient);
	_IDSender = event->GetValue(event->idSender);
	_ElementRecipient = Element(event->GetValue(event->elementRecipient));
	_ElementSender = Element(event->GetValue(event->elementSender));
	_event = Event(event->GetValue(event->event));
}//Constructor EventBase
EventBase::~EventBase()
{
}//Destruktor EventBase
//EventBase::EventBase() {}