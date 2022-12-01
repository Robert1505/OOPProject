#pragma once
#include "Ticket.h"

using namespace std;

class TicketArray {
private:
	Ticket* tickets;
	int size;
public:
	TicketArray();
	TicketArray(Ticket* tickets, int size);
	int getSize();
	Ticket* getTickets();
};