#pragma once
#include <iostream>

class Event
{
public:
	Event();
	void showUI();
	std::string promptEvent();
private:
	std::string event1 = "A crazy dinasoar shows up!";
	
};

