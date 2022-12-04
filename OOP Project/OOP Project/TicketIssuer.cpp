#include <iostream>
#include <stdlib.h>
#include <string>
#include "TicketIssuer.h"
#include "Location.h"
#include "TicketArray.h"

using namespace std;

TicketArray TicketIssuer::issueTickets(Event* event, int amountOfSeats) {
	if (!event->getLocation()->isAvailable(amountOfSeats))
		return TicketArray();

	event->getLocation()->occupySeats(amountOfSeats);

	Ticket* tickets = new Ticket[amountOfSeats];
	for (int i = 0; i < amountOfSeats; i++) {
		string ticketId = generateUniqueID(event);
		tickets[i] = Ticket(ticketId, event);
		event->addId(ticketId);
	}

	return TicketArray(tickets, amountOfSeats);
};

string TicketIssuer::generateUniqueID(Event* event) {
	string generatedId = "";
	srand((unsigned int)time(NULL));
	do {
		int randomNumber = (rand() % 100000) + 1;
		generatedId = to_string(randomNumber);
	} while (event->idExists(generatedId));
	return generatedId;
};
