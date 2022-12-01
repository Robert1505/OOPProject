#include "TicketArray.h"

using namespace std;

TicketArray::TicketArray() {
	this->size = 0;
	this->tickets = nullptr;
}

TicketArray::TicketArray(Ticket* tickets, int size) {
	this->tickets = tickets;
	this->size = size;
}