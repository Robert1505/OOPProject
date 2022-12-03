#include "IdEventPair.h";

IdEventPair::IdEventPair() {
	this->eventName = "";
	this->numberOfIds = 0;
}

IdEventPair::IdEventPair(string eventName) {
	this->eventName = eventName;
	this->numberOfIds = 0;
}

IdEventPair::~IdEventPair() {
	delete[] this->existingIds;
	this->existingIds = nullptr;
}
