#include <iostream>
#include "EventStore.h"
#include "Event.h"
#include "Menu.h"

using namespace std;

int main() {
	EventStore store;
	store.initialize();

	Menu menu;

	menu.displayEvents(store);
	int selectedEventIndex = menu.selectEvent();

	bool isEventAvailable = store.getEvents()[selectedEventIndex].getLocation()->isAvailable();

	if (isEventAvailable) {
		cout << "Event is available";
	}
	else {
		cout << "Event is NOT available";
	}

	return 0;
}

/*
Classes needed:
- Event
- Location
- Ticket

- EventStore
- TicketIssuer
- TicketValidator

- Menu
*/