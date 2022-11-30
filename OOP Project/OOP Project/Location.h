#pragma once
#include <iostream>
using namespace std;

class Location {
private:
	int maxSeats;
	int occupiedSeats;
public:
	bool isAvailable();
};