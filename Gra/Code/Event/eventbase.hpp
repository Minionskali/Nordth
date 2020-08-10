#pragma once
#ifndef EVENTBASE_HPP
#define EVENTBASE_HPP
#include "eventdata.hpp"
class EventBase
{

public:
	EventBase();
	EventBase(EventData* event);
	~EventBase();
	enum Event
	{
		Left,
		Right,
		Jump,
		Attack,
		Shot,
		Blockade,
		RunLeft,
		RunRight,
		Death,
	};
}; //End class EventBase
#endif //!EVENTBASE_HPP
