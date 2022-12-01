#pragma once
#include <iostream>
using namespace std;

class Location {
private:
	int maxSeats;
	int occupiedSeats;
public:
	Location() {
		this->maxSeats = 100;
		this->occupiedSeats = 0;
	}
	Location(const Location& location) {
		this->maxSeats = location.maxSeats;
		this->occupiedSeats = location.occupiedSeats;
	}
	bool isAvailable();
	void occupySeats(int amountOfSeats);
};