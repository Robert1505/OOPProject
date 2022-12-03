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
	string* existingTicketIds;
	int numberOfTickets;
public:
	Event(string name, string date, string time);
	Event();
	string getName();
	string getDate();
	string getTime();
	Location* getLocation();
	void setLocation(Location* location);
	void addId(string id);
	string* getIds();
	bool idExists(string id);
	~Event();
};