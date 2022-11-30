#include <iostream>
#include "Event.h"

using namespace std;

string Event::getName() {
	return this->name;
}
string Event::getDate() {
	return this->date;
}
string Event::getTime() {
	return this->time;
}