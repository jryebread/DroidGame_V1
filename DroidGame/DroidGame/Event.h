#pragma once
#include <iostream>
#include <conio.h>
class Event
{
public:
	Event();
	void genMaze(char arr[20][20]);
	void spawnDrone(char arr[20][20]);
	void showMaze(char arr[20][20]);
	void showUI();
	void inputMovement();
	std::string promptEvent();
private:
	std::string event1 = "A crazy dinasoar shows up!";
	
};

