
#ifndef EVENTOBSERVER_HPP
#define EVENTOBSERVER_HPP
#include "factoryevent.hpp"
#include <list>
class EventObserver
{
	FactoryEvent factory;
	std::list<std::shared_ptr<EventBase>> Events;
public:
	EventObserver();
	void AddEvent(std::shared_ptr<EventData>&& event);
	~EventObserver();
}; //End class EventObserver
#endif //!EVENTOBSERVER_HPP
