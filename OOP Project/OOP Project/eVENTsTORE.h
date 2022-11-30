#pragma once
#include <iostream>
#include "Event.h"
using namespace std;

class EventStore {
private:
	Event* events[];
};
