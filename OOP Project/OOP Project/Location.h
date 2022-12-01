#pragma once
#include <iostream>
using namespace std;

class Location {
private:
	int maxSeats;
	int occupiedSeats;
public:
	Location();
	Location(const Location& location);
	bool isAvailable();
	void occupySeats(int amountOfSeats);
};