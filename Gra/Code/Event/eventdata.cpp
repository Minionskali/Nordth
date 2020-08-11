#include "eventdata.hpp"

EventData::EventData()
{

}//Constructor EventData
void EventData::SetValue(int value, Value valueType) {
	switch (valueType) {
	case Value::event:
		_event = value;
	case Value::idSender:
		_IDSender = value;
	case Value::elementSender:
		_ElementSender = value;
	case Value::typeEvent:
		_type = value;
	}
}
EventData::~EventData()
{
}//Destruktor EventData
int EventData::GetValue(Value value) {
	switch (value) {
	case Value::event:
		return _event;
	case Value::idSender:
		return _IDSender;
	case Value::elementSender:
		return _ElementSender;
	case Value::typeEvent:
		return _type;
	}
	return -1;
}