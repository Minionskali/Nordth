#ifndef EVENTDATA_HPP
#define EVENTDATA_HPP
class EventData
{
public:
	enum Value {
		event,
		idSender,
		elementSender,
		typeEvent
	};
	enum TypeEvent {
		eventDeath,
		eventMotion,
		eventPhysic,
		eventShare
	};
	EventData();
	void SetValue(int value, Value valueType);
	int GetValue(Value value);
	~EventData();
private:
	int _type;
	int _event;
	int _IDSender;
	int _ElementSender;
}; //End class EventData
#endif //!EVENTDATA_HPP
