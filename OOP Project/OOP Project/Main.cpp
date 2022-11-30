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