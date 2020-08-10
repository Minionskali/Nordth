#include "eventobserver.hpp"

EventObserver::EventObserver()
{
}//Constructor EventObserver
EventObserver::~EventObserver()
{
}//Destruktor EventObserver
void EventObserver::AddEvent(EventData* event) {
	Events.push_back(new EventBase(event));
	delete event;
}