#include "eventbase.hpp"

EventBase::EventBase(int event, int id, int eventSender)
{
	_IDSender = id;
	_ElementSender = Element(eventSender);
	_event = Event(event);
}//Constructor EventBase
EventBase::~EventBase()
{
}//Destruktor EventBase
//EventBase::EventBase() {}