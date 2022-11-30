#pragma once
#include <iostream>
#include "Location.h"
using namespace std;

class Event {
public:
	Location* location;
	string date;
	string time;
	string name;
};