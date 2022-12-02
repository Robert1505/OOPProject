#pragma once
#include <iostream>
#include "TicketIssuer.h"
#include "Event.h"
#include "TicketArray.h"

using namespace std;

class TicketIssuer {
private:

public:
	TicketArray issueTickets(Event* event, int amountOfSeats);
	string generateUniqueID(Event* event);
};