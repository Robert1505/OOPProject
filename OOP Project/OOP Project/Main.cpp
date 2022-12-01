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
	TicketArray tickets = menu.getTickets(store, issuer);

	/*for (int i = 0; i < tickets; i++) {
		cout << i + 1 << ". " << tickets[i].getId() << endl;
	}*/

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