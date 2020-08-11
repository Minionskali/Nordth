
#ifndef EVENTSHARE_HPP
#define EVENTSHARE_HPP
#include "eventbase.hpp"
class EventShare:public EventBase
{
public:
	EventShare(int event, int id, int eventSender);
	~EventShare();
}; //End class EventShare
#endif //!EVENTSHARE_HPP
