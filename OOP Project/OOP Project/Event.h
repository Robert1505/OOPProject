#pragma once
#include <iostream>
#include "Location.h"
using namespace std;

class Event {
private:
	Location* location;
	string date;
	string time;
	string name;
};