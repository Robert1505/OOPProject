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
		cout << i + 1 << ". " << events[i].getName() << endl;
	}
}