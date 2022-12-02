#pragma once
#include <iostream>
#include <string>
using namespace std;

class IdEventPair {
private:
	string eventName;
	string* existingIds;
	
public:
	IdEventPair();
	IdEventPair(string eventName);

};