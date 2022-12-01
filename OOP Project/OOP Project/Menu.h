#pragma once
#include <iostream>
#include "Event.h"
#include "EventStore.h"
#include "TicketIssuer.h"

using namespace std;

class Menu {
public:
	void displayEvents(EventStore store);
	int selectEvent();
	int selectAmountOfSeats(Event event);
	Ticket* getTickets(EventStore store, TicketIssuer issuer);
};
