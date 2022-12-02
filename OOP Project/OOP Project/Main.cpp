#include <iostream>
#include "EventStore.h"
#include "Event.h"
#include "Menu.h"
#include "TicketIssuer.h"
#include "TicketValidator.h"

using namespace std;

int main() {
	EventStore store;
	TicketIssuer issuer;
	Menu menu;
	TicketValidator validator;

	store.initialize();
	TicketArray ticketArray = menu.getTickets(store, issuer);
	Ticket* tickets = ticketArray.getTickets();

	for (int i = 0; i < ticketArray.getSize(); i++) {
		cout << i + 1 << ". " << tickets[i].getId() << endl;
	}

	Ticket randomTicket = Ticket("123", &store.getEvent(0));
	menu.validateTicket(validator, randomTicket);

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