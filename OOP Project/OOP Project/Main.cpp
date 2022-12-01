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
	Ticket* ticket = menu.getTicket(store, issuer);

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