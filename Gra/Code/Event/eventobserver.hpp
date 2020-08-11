#pragma once
#ifndef EVENTOBSERVER_HPP
#define EVENTOBSERVER_HPP
#include "factoryevent.hpp"
#include <list>
class EventObserver
{
	FactoryEvent factory;
	std::list<EventBase*> Events;
public:
	EventObserver();
	void AddEvent(EventData* event);
	~EventObserver();
}; //End class EventObserver
#endif //!EVENTOBSERVER_HPP
