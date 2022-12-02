#pragma once
#include <iostream>
#include "TicketIssuer.h"
#include "Event.h"
#include "TicketArray.h"
#include "IdEventPair.h"

using namespace std;

class TicketIssuer {
private:
	IdEventPair* issuedTicketPairs;
public:
	TicketArray issueTickets(Event* event, int amountOfSeats);
	string generateUniqueID(Event* event);
};