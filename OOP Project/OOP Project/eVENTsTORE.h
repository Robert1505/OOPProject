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
	EventStore();
	void addEvent(Event event);
	void initialize();
	Event* getEvent(int index);
	Event* getEvents();
	int getNumberOfEvents();
	//~EventStore();
};
