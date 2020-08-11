#pragma once
#ifndef EVENTPHYSIC_HPP
#define EVENTPHYSIC_HPP
#include "eventbase.hpp"
class EventPhysic:public EventBase
{
public:
	EventPhysic(int event, int id, int eventSender);
	~EventPhysic();
}; //End class EventPhysic
#endif //!EVENTPHYSIC_HPP
