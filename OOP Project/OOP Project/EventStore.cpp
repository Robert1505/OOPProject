#include <iostream>
#include "Event.h"
#include "EventStore.h"

using namespace std;

Event* EventStore::resizeArray(int newSize) {
	// create a new array of size n + 1
	Event* newArray = new Event[newSize];

	// copy the current events to the new array
	for (int i = 0; i < numberOfEvents; i++) {
		newArray[i] = events[i];
	}

	return newArray;
}

void EventStore::addEvent(Event event) {
	Event* newEvents = resizeArray(numberOfEvents + 1);

	// add the element to the new array
	newEvents[numberOfEvents] = event;

	// replace the current events with the new array
	events = newEvents;
}

void EventStore::initialize() {
	this->addEvent(Event("Black Panther", "30/11/2022", "19:00"));
	this->addEvent(Event("Thor", "23/11/2021", "20:00"));
	this->addEvent(Event("Fast And Furious", "24/11/2021", "21:00"));
	this->addEvent(Event("Captain America", "21/11/2021", "17:00"));
	this->addEvent(Event("Avengers", "19/11/2021", "20:00"));
}
