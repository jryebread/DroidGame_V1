#include <iostream>
#include <random>
#include "Drone.h"
#include "Event.h"
#include "Entity.h"
#include <string>
#include <chrono>
#include <thread>

using namespace std;
void waitType(std::string sentence1, std::string sentence2, int wait, int typespeed);
int main()
{
	srand(time(NULL));
	char maze[20][20];
	//evnt.spawnDrone();
	std::string input;
	std::string mystring = "Hello ? ";
	std::string mystring2 = "...Is anyone there?\n";
	int wait = 800;
	int typespeed = 70;
	//intro 
	//-----
/*cout << "INITIALIZING CONNECTION...\n";
	cout << "CONNECTION ESTABLISHED! - \n\n";
	waitType(mystring,mystring2, wait, typespeed);
	cin >> input;
	mystring = "Hello! It's unbelievable you're alive! Your ship has lost all power..\n";
	mystring2 = "The little drone on board could save your life! Activate it by the command: \ndrone1.activate \n";
	waitType(mystring, mystring2, wait, typespeed);*/
	//-----
	Drone drone1;
	Event evnt;
	evnt.genMaze(maze);
	evnt.spawnDrone(maze);
	string tempname;
	cout << "Enter name: "; cin >> tempname;
	drone1.setName(tempname);
	evnt.
	while (1)
	{
	drone1.takeInput();
	evnt.showMaze(maze);
	}


	return 0;
}
//function takes two sentences and types them
void waitType(std::string sentence1, std::string sentence2, int wait, int typespeed)
{
	for (int x = 0; x < sentence1.length(); x++)
	{
		std::cout << sentence1[x];
		std::this_thread::sleep_for(std::chrono::milliseconds(typespeed));
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(wait));
	for (int x = 0; x < sentence2.length(); x++)
	{
		std::cout << sentence2[x];
		std::this_thread::sleep_for(std::chrono::milliseconds(typespeed));
	}

}