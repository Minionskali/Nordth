#include "eventobserver.hpp"

EventObserver::EventObserver()
{
}//Constructor EventObserver
EventObserver::~EventObserver()
{
}//Destruktor EventObserver
void EventObserver::AddEvent(std::shared_ptr<EventData>&& event) {
	Events.push_back(factory.methodFactory(event));
	//delete event;
}