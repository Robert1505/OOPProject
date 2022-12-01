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
	int getRemainingSeats();
	bool isAvailable(int amountOfSeats);
	void occupySeats(int amountOfSeats);
	int getOccupiedSeats();
};