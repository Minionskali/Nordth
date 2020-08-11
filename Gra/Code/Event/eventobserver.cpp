#include "eventobserver.hpp"

EventObserver::EventObserver()
{
}//Constructor EventObserver
EventObserver::~EventObserver()
{
}//Destruktor EventObserver
void EventObserver::AddEvent(EventData* event) {
	Events.push_back(factory.methodFactory(event));
	//delete event;
}