#include <iostream>
#include "EventStore.h"
#include "Event.h"

using namespace std;

int main() {
	EventStore store;
	store.addEvent(Event("Black Panther", "30/11/2022", "19:00"));
	store.addEvent(Event("Thor", "23/11/2021", "20:00"));
	store.addEvent(Event("Fast And Furious", "24/11/2021", "21:00"));
	store.addEvent(Event("Captain America", "21/11/2021", "17:00"));
	store.addEvent(Event("Avengers", "19/11/2021", "20:00"));

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