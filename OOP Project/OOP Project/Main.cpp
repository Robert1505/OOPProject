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

	string id;
	int eventIndex;


	cout << "What is your ticket id?" << endl;
	cin >> id;
	cout << "To what event are you going? (1 - 5) " << endl;
	cin >> eventIndex;

	Ticket randomTicket = Ticket(id, store.getEvent(eventIndex - 1));
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