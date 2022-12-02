#include <iostream>
#include "Event.h"

using namespace std;

Event::Event() {

}

Event::Event(string name, string date, string time) {
	this->name = name;
	this->date = date;
	this->time = time;
	this->location = new Location();
}
string Event::getName() {
	return this->name;
}
string Event::getDate() {
	return this->date;
}
string Event::getTime() {
	return this->time;
}
Location* Event::getLocation() {
	return this->location;
}
void Event::setLocation(Location* location) {
	this->location = location;
}

void Event::addId(string id) {
	string* newArray = new string[this->numberOfTickets + 1];

	for (int i = 0; i < this->numberOfTickets; i++) {
		newArray[i] = this->existingTicketIds[i];
	}

	delete[] existingTicketIds;
	newArray[this->numberOfTickets] = id;

	existingTicketIds = newArray;
}

string* Event::getIds() {
	return this->existingTicketIds;
}