#pragma once
#include <iostream>
#include "Event.h"
using namespace std;

class EventStore {
private:
	Event* events;
	int numberOfEvents;
	Event* resizeArray(int newSize);
public:
	EventStore() {
		numberOfEvents = 0;
		events = new Event[numberOfEvents];
	}
	void addEvent(Event event);
};
