#include <iostream>
#include "Event.h"
#include "EventStore.h"
#include "Menu.h"

using namespace std;

void Menu::displayEvents(EventStore store){
	Event* events = store.getEvents();
	int numberOfEvents = store.getNumberOfEvents();
	cout << "The current events are:" << endl;
	for (int i = 0; i < numberOfEvents; i++) {
		cout << i + 1 << ". " << events[i].getName() << " | Date: " << events[i].getDate() << " | Time: " << events[i].getTime() << endl;
	}
}

void Menu::selectEvent() {
	cout << "Choose a MOVIE! (1 -> 5)" << endl;
	int selectedEvent = 0;
	cin >> selectedEvent;
}

// 1. Black Panther | Date: 11/20/2011 | Time: 19:00