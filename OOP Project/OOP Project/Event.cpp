#include <iostream>
#include "Event.h"

using namespace std;

Event::Event() {
	this->numberOfTickets = 0;
	this->existingTicketIds = nullptr;
}

Event::Event(string name, string date, string time) {
	this->name = name;
	this->date = date;
	this->time = time;
	this->location = new Location();
	this->numberOfTickets = 0;
	this->existingTicketIds = nullptr;
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

	//delete[] this->existingTicketIds;
	newArray[this->numberOfTickets] = id;

	existingTicketIds = newArray;
	numberOfTickets++;
}

string* Event::getIds() {
	return this->existingTicketIds;
}

bool Event::idExists(string id) {
	for (int i = 0; i < this->numberOfTickets; i++) {
		if (id == this->existingTicketIds[i])
			return true;
	}
	return false;
}

Event::~Event(){
	this->existingTicketIds = nullptr;
	delete[] this->existingTicketIds;
	this->location = nullptr;
	delete this->location;
	this->numberOfTickets = 0;
}