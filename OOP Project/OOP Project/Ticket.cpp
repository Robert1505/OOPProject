#include <iostream>
#include "Ticket.h"

using namespace std;

Ticket::Ticket(string id, Event* event) {
	this->id = id;
	this->event = event;
}