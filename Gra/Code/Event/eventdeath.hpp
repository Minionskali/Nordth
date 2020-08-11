#pragma once
#ifndef EVENTDEATH_HPP
#define EVENTDEATH_HPP
#include "eventbase.hpp"
class EventDeath: public EventBase
{
public:
	EventDeath(int event, int id, int eventSender);
	~EventDeath();
}; //End class EventDeath
#endif //!EVENTDEATH_HPP
