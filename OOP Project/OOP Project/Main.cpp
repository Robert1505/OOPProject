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
	int amountOfSeats = menu.selectAmountOfSeats(selectedEvent);

	Ticket* myTicket = issuer.issueTicket(&selectedEvent, amountOfSeats);

	cout << "\nNumber of occupied seats for " << selectedEvent.getName() << " are: " << selectedEvent.getLocation()->getOccupiedSeats();

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