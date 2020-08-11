
#ifndef EVENTMOTION_HPP
#define EVENTMOTION_HPP
#include "eventbase.hpp"
class EventMotion:public EventBase
{
public:
	EventMotion(int event, int id, int eventSender);
	~EventMotion();
}; //End class EventMotion
#endif //!EVENTMOTION_HPP
