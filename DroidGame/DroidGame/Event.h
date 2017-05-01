#pragma once
#include <iostream>

class Event
{
public:
	Event();
	void genMaze(char arr[20][20]);
	void showMaze(char arr[20][20]);
	void showUI();
	std::string promptEvent();
private:
	std::string event1 = "A crazy dinasoar shows up!";
	
};

