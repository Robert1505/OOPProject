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
