#pragma once
#include <iostream>
#include "Ticket.h"

using namespace std;

class TicketIssuer {
private:

public:
	Ticket* issueTickets(Event* event, int amountOfSeats);
};