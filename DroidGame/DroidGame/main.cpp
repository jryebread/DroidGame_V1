#include <iostream>
#include "Drone.h"
#include "Entity.h"
#include <string>
#include <chrono>
#include <thread>

using namespace std;
void waitType(std::string sentence1, std::string sentence2, int wait, int typespeed);
int main()
{
	int maze[10][13] = { //We could have hallways that are procedurally generated
		//Need an algorithm to randomize hallways and have access to each of these 
		//If the place in the array is a 0 can be not shown and block the player
		//if the place is a 1 in the array it can be shown and traversed by the players move instruction
		{ 1,1,1,1,1,1,1,1,1,1,1,1,1 },
		{ 1,0,1,0,1,0,1,0,0,0,0,0,1 },
		{ 1,0,1,0,0,0,1,0,1,1,1,0,1 },
		{ 1,0,1,0,1,1,1,1,0,0,0,0,1 },
		{ 1,0,1,0,0,0,0,0,1,1,1,0,1 },
		{ 1,0,1,0,1,1,1,0,1,0,0,0,1 },
		{ 1,0,1,0,1,0,0,0,1,1,1,0,1 },
		{ 1,0,1,0,1,1,1,0,1,0,1,0,1 },
		{ 1,0,0,0,1,0,0,0,0,0,0,3,1 },
		{ 1,1,1,1,1,1,1,1,1,1,1,1,1 }
	};
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
	string tempname;
	cout << "Enter name: "; cin >> tempname;
	drone1.setName(tempname);
	while (1)
	{
	drone1.takeInput();
	}
	//Once we get input the game will be like this:

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