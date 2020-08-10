#include "eventdata.hpp"

EventData::EventData(int&& event, int&& idSender, int&& idRecipient, int&& ElementSender, int&& ElementRecipient)
{
	_event = event;
	_IDRecipient = idRecipient;
	_IDSender = idSender;
	_ElementRecipient = ElementRecipient;
	_ElementSender = ElementSender;
}//Constructor EventData
EventData::~EventData()
{
}//Destruktor EventData
int EventData::GetValue(Value value) {
	switch (value) {
	case Value::event:
		return _event;
	case Value::idRecipient:
		return _IDRecipient;
	case Value::idSender:
		return _IDSender;
	case Value::elementRecipient:
		return _ElementRecipient;
	case Value::elementSender:
		return _ElementSender;
	}
	return -1;
}