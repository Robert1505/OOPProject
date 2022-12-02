#include <iostream>
#include "TicketValidator.h"

bool TicketValidator::isTicketValid(Ticket ticket) {
	return ticket.getEvent()->idExists(ticket.getId());
}