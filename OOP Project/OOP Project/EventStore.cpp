#include <iostream>
#include "Event.h"
#include "EventStore.h"

using namespace std;

void EventStore::addEvent(Event event) {
	// create a new array of size n + 1
	Event* newEvents = new Event[numberOfEvents + 1];

	// copy the current events to the new array
	for (int i = 0; i < numberOfEvents; i++) {
		newEvents[i] = events[i];
	}

	// add the element to the new array
	newEvents[numberOfEvents] = event;

	// replace the current events with the new array
	events = newEvents;

	cout << "New event has been added, with the name of " << event.name << endl;
}
