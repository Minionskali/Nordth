#ifndef EVENTOBSERVER_HPP
#define EVENTOBSERVER_HPP
#include "eventdeath.hpp"
#include "eventmotion.hpp"
#include "eventphysic.hpp"
#include "eventshare.hpp"
#include "eventdata.hpp"
#include <list>
class EventObserver
{
	std::list<EventBase*> Events;
public:
	EventObserver();
	void AddEvent(EventData* event);
	~EventObserver();
}; //End class EventObserver
#endif //!EVENTOBSERVER_HPP
