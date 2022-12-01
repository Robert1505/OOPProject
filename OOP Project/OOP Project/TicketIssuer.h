#pragma once
#include <iostream>
#include "Ticket.h"

using namespace std;

class TicketIssuer {
private:

public:
	Ticket* issueTicket(Event* event, int amountOfSeats);
};