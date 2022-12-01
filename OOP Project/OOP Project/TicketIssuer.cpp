#include <iostream>
#include "TicketIssuer.h"
#include "Location.h"

using namespace std;

Ticket* TicketIssuer::issueTicket(Event* event) {
	event->getLocation()->occupySeats(1);
	return new Ticket("123", event);
}