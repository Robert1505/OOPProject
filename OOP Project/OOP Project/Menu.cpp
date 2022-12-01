#include <iostream>
#include "Event.h"
#include "EventStore.h"
#include "Menu.h"
#include "Ticket.h"
#include "TicketIssuer.h"

using namespace std;

void Menu::displayEvents(EventStore store){
	Event* events = store.getEvents();
	int numberOfEvents = store.getNumberOfEvents();
	cout << "The current events are:" << endl;
	for (int i = 0; i < numberOfEvents; i++) {
		cout << i + 1 << ". " << events[i].getName() << " | Date: " << events[i].getDate() << " | Time: " << events[i].getTime() << endl;
	}
}

int Menu::selectEvent() {
	cout << "Choose a MOVIE! (1 -> 5)" << endl;
	int selectedEvent = 0;
	cin >> selectedEvent;

	return selectedEvent - 1;
}

int Menu::selectAmountOfSeats(Event event) {
	int amountOfSeats;
	cout << "How many seats do you want to book?" << endl;
	cin >> amountOfSeats;

	if (!event.getLocation()->isAvailable(amountOfSeats)) {
		cout << "The amount of seats requested is not available.";
		cout << "\nRemaining seats for this event: " << event.getLocation()->getRemainingSeats();
		return 0;
	}

	return amountOfSeats;
}

TicketArray Menu::getTickets(EventStore store, TicketIssuer issuer) {
	displayEvents(store);
	int selectedEventIndex = selectEvent();
	Event selectedEvent = store.getEvent(selectedEventIndex);
	int amountOfSeats = selectAmountOfSeats(selectedEvent);

	TicketArray tickets = issuer.issueTickets(&selectedEvent, amountOfSeats);
	return tickets;
}