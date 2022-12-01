#include <iostream>
#include "EventStore.h"
#include "Event.h"
#include "Menu.h"
#include "TicketIssuer.h"

using namespace std;

int main() {
	EventStore store;
	TicketIssuer issuer;
	Menu menu;

	store.initialize();

	menu.displayEvents(store);
	int selectedEventIndex = menu.selectEvent();
	Event selectedEvent = store.getEvent(selectedEventIndex);

	bool isEventAvailable = selectedEvent.getLocation()->isAvailable();

	if (!isEventAvailable) {
		cout << "Event is NOT available";
		return 0;
	}
	cout << "Event is available";

	Ticket* myTicket = issuer.issueTicket(&selectedEvent);

	cout << "\nYour ticket ID is " << myTicket->getId() << endl;

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