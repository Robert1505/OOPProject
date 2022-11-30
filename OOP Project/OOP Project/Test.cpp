#include <iostream>
#include "EventStore.h"
#include "Event.h"

using namespace std;

int main() {
	EventStore store;
	store.initialize();

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