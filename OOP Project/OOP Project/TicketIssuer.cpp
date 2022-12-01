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
		int randomNumber = (rand() % 100000) + 1;
		tickets[i] = Ticket(to_string(randomNumber), event);
	}

	return TicketArray(tickets, amountOfSeats);
}