#pragma once
#include <iostream>
#include <string>
using namespace std;

class IdEventPair {
private:
	string eventName;
	string* existingIds;
	int numberOfIds;
public:
	IdEventPair();
	IdEventPair(string eventName);
	void addId(string id);
	string* getIds();
};