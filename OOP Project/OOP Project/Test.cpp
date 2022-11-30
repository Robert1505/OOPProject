#include <iostream>
#include "EventStore.h"
#include "Event.h"

using namespace std;

int main() {
	Event event;
	event.name = "123";

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