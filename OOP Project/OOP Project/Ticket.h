#pragma once
#include <iostream>
#include "Event.h"
using namespace std;

class Ticket {
private:
	string id;
	Event* event;
public:
	Ticket(string id, Event* event) {
		this->id = id;
		this->event = event;
	}

};
