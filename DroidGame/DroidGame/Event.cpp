#include "Event.h"
#include <iostream>
#include <random>

Event::Event()
{}

bool genBool()
{
	bool x = rand() % 2;
	return x;
}
void Event::genMaze(char arr[20][20])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (genBool() == 1)
				arr[i][j] = ' ';
			else
				arr[i][j] = 'x';
		}
	}
}

void Event::showMaze(char arr[20][20])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}
}

//TODO
void Event::showUI()
{
	std::cout << "___|" << "|_____";
}

std::string Event::promptEvent()
{
	return std::string();
}
