#pragma once
#include <iostream>
#include "Event.h"
#include "EventStore.h"
using namespace std;

class Menu {
public:
	void displayEvents(EventStore store);
	int selectEvent();
};
