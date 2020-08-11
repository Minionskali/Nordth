#ifndef EVENTDATA_HPP
#define EVENTDATA_HPP
class EventData
{
public:
	enum Value {
		event,
		idSender,
		elementSender,
	};
	EventData(int&& event, int&& idSender, int&& ElementSender);
	int GetValue(Value value);
	~EventData();
private:
	int _event;
	int _IDSender;
	int _ElementSender;
}; //End class EventData
#endif //!EVENTDATA_HPP
