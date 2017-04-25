#include "Drone.h"
#include <string>

Drone::Drone()
{
	this->d_online = true;
}

void Drone::takeInput()
{
	using namespace std;
	if (this->d_num >= 1 && this->d_online == true)
	{
		string command;
		string current_name = "";
		string current_action = "";
		cin >> command; //take input command
		auto dot = command.find('.'); 
		for (int x = 0; x != dot; x++) // find name part of command before dot
			current_name += command[x];
		if (current_name == d_name)
		{
			for (int x = dot + 1; x < command.length(); x++)
				current_action += command[x];
			performAction(current_action);
		}
		else
		{
			std::cout << "ERR: Drone Unit ID not recognized.4\n";
		}

	}
	else
		cout << "\n NO DRONES OPERATIONAL. GAME OVER";	
}

void Drone::performAction(std::string command)
{
	if (command == "activate")
	{
		this->d_online = true; std::cout << d_name << " online!\n";
	}
	else if (command == "moveup")
	{
		
	}
	else if (command == "movedown")
	{

	}
	else if (command == "moveright")
	{

	}
	else if (command == "moveleft")
	{

	}
	else if (command == "attack")
	{
		std::cout << d_name << " fires! pew! pew!\n";
	}
	else if (command == "hi")
	{
		std::cout << d_name << " says 'yo!'\n";
	}
	else
	{
		std::cout << "Command not recognized \n";
	}
}

void Drone::setName(std::string name)
{
	this->d_name = name;
}

                                   



