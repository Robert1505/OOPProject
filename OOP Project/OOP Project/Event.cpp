#include <iostream>
#include "Event.h"

using namespace std;

Event::Event() {

}

Event::Event(string name, string date, string time) {
	this->name = name;
	this->date = date;
	this->time = time;
	this->location = new Location();
}
string Event::getName() {
	return this->name;
}
string Event::getDate() {
	return this->date;
}
string Event::getTime() {
	return this->time;
}
Location* Event::getLocation() {
	return this->location;
}
void Event::setLocation(Location* location) {
	this->location = location;
}