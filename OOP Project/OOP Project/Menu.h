#pragma once
#include <iostream>
#include "Event.h"
#include "EventStore.h"
#include "TicketIssuer.h"
#include "TicketArray.h"

using namespace std;

class Menu {
public:
	void displayEvents(EventStore store);
	int selectEvent();
	int selectAmountOfSeats(Event event);
	TicketArray getTickets(EventStore store, TicketIssuer issuer);
};
