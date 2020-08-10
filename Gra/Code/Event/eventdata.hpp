#ifndef EVENTDATA_HPP
#define EVENTDATA_HPP
class EventData
{
public:
	enum Value {
		event,
		idSender,
		idRecipient,
		elementSender,
		elementRecipient
	};
	EventData(int&& event, int&& idSender, int&& idRecipient, int&& ElementSender,int&& ElementRecipient);
	int GetValue(Value value);
	~EventData();
private:
	int _event;
	int _IDSender;
	int _IDRecipient;
	int _ElementSender;
	int _ElementRecipient;
}; //End class EventData
#endif //!EVENTDATA_HPP
