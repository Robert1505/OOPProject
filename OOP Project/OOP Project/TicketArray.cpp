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

int TicketArray::getSize() {
	return this->size;
}

Ticket* TicketArray::getTickets() {
	return this->tickets;
}

//TicketArray::~TicketArray() {
//	delete[] this->tickets;
//	this->tickets = nullptr;
//	this->size = 0;
//}
