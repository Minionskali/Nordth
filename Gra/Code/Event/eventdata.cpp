#include "eventdata.hpp"

EventData::EventData(int&& event, int&& idSender, int&& ElementSender)
{
	_event = event;
	_IDSender = idSender;
	_ElementSender = ElementSender;
}//Constructor EventData
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
	}
	return -1;
}