#include "Event.h"
#include <iostream>
#include <random>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

Event::Event()
{}

bool genBool()
{
	bool x = rand() % 2;
	return x;
}

void Event::genMaze(char arr[20][20])//called once, generates random maze with borders
{
	for (int x = 0; x < 20; x++)
	{
		arr[0][x] = 'X';
		arr[x][0] = 'X';
		arr[19][x] = 'X';
		arr[x][19] = 'X';
	}
	for (int i = 1; i < 19; i++)
	{
		for (int j = 1; j < 19; j++)
		{
			if (genBool() == 1)
				arr[i][j] = 'x';
			else
				arr[i][j] = ' ';
		}
	}
}

void Event::spawnDrone(char arr[20][20])
{
	int x = rand() % 19 + 1;
	int y = rand() % 19 + 1;
	arr[x][y] = 'p';
}


void Event::showMaze(char arr[20][20])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

//TODO
void Event::showUI()
{
	std::cout << "___|" << "|_____";
}

void Event::inputMovement()
{
	using namespace std;
	int c = 0;
	switch ((c = getch()))
	{
	case KEY_UP:
		cout << endl << "Up" << endl;//key up
		break;
	case KEY_DOWN:
		cout << endl << "Down" << endl;   // key down
		break;
	case KEY_LEFT:
		cout << endl << "Left" << endl;  // key left
		break;
	case KEY_RIGHT:
		cout << endl << "Right" << endl;  // key right
		break;
	default:
		break;
	}
}

std::string Event::promptEvent()
{
	return std::string();
}
