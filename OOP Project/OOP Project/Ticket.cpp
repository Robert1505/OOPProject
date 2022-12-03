#include <iostream>
#include "Ticket.h"
#include "Event.h"

using namespace std;

Ticket::Ticket() {

}

Ticket::Ticket(string id, Event* event) {
	this->id = id;
	this->event = event;
}
string Ticket::getId() {
	return this->id;
}
Event* Ticket::getEvent() {
	return this->event;
};
//Ticket::~Ticket() {
//	delete this->event;
//	this->event = nullptr;
//}