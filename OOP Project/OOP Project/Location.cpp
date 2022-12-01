#include <iostream>
#include "Location.h"

using namespace std;

Location::Location() {
	this->maxSeats = 100;
	this->occupiedSeats = 0;
}
Location::Location(const Location& location) {
	this->maxSeats = location.maxSeats;
	this->occupiedSeats = location.occupiedSeats;
}
bool Location::isAvailable(int amountOfSeats) {
	return this->maxSeats >= this->occupiedSeats + amountOfSeats;
};
int Location::getRemainingSeats() {
	return this->maxSeats - this->occupiedSeats;
}
void Location::occupySeats(int amountOfSeats) {
	this->occupiedSeats += amountOfSeats;
}
int Location::getOccupiedSeats() {
	return this->occupiedSeats;
}
