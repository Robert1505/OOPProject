#include <iostream>
#include "Location.h"

using namespace std;

bool Location::isAvailable() {
	return this->maxSeats > this->occupiedSeats;
};

void Location::occupySeats(int amountOfSeats) {
	this->occupiedSeats += amountOfSeats;
}
