#include <iostream>
#include "TicketIssuer.h"
#include "Location.h"

using namespace std;

Ticket* TicketIssuer::issueTicket(Event* event, int amountOfSeats) {
	if (!event->getLocation()->isAvailable(amountOfSeats)) 
		return nullptr;
	
	event->getLocation()->occupySeats(amountOfSeats);
	return new Ticket("123", event);
}