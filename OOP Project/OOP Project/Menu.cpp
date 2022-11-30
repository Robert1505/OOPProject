#include <iostream>
#include "Event.h"
#include "EventStore.h"
#include "Menu.h"

using namespace std;

void Menu::displayEvents(EventStore store){
	Event* events = store.getEvents();
	cout << "The current events are:" << endl;
}