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
public:
	Event(string name, string date, string time) {
		this->name = name;
		this->date = date;
		this->time = time;
	}
	Event(){};
	string getName();
};