#include <iostream>
#include "TicketIssuer.h"
#include "Location.h"

using namespace std;

Ticket* TicketIssuer::issueTickets(Event* event, int amountOfSeats) {
	if (!event->getLocation()->isAvailable(amountOfSeats)) 
		return nullptr;
	
	event->getLocation()->occupySeats(amountOfSeats);
	
	Ticket* tickets = new Ticket[amountOfSeats];
	for (int i = 0; i < amountOfSeats; i++) {
		tickets[i] = Ticket("1234", event);
	}

	return tickets;
}