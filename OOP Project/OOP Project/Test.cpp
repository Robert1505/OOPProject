#include <iostream>
#include "EventStore.h"
#include "Event.h"

using namespace std;

int main() {
	Event event = Event("Black Panther", "30/11/2022", "19:00");

	EventStore store;
	store.addEvent(event);

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
*/