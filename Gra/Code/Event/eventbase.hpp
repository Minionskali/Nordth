#pragma once
#ifndef EVENTBASE_HPP
#define EVENTBASE_HPP
#include "eventdata.hpp"
class EventBase
{
public:
	EventBase() = default;
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
	enum Element {
		Item,
		Obstacle,
		Actor
	};
private:
	Event _event;
	int _IDSender;
	int _IDRecipient;
	Element _ElementSender;
	Element _ElementRecipient;

}; //End class EventBase
#endif //!EVENTBASE_HPP
