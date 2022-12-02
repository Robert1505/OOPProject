#include "IdEventPair.h";

IdEventPair::IdEventPair() {
	this->eventName = "";
	this->numberOfIds = 0;
}

IdEventPair::IdEventPair(string eventName) {
	this->eventName = eventName;
	this->numberOfIds = 0;
}

void IdEventPair::addId(string id) {
	string* newArray = new string[this->numberOfIds + 1];

	for (int i = 0; i < this->numberOfIds; i++) {
		newArray[i] = this->existingIds[i];
	}

	delete[] existingIds;
	newArray[this->numberOfIds] = id;

	existingIds = newArray;
}

string* IdEventPair::getIds() {
	return this->existingIds;
}