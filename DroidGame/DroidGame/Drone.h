#pragma once
#include <string>
#include<iostream>
#include "Entity.h"

class Drone : public Entity
{
public:
	Drone();
	void setName(std::string name);
	//todo int calcDamage(); have drones have XP and levels determining damage ouput
	void takeInput();
	void performAction(std::string command);
private:
	int d_num = 1;
	double d_XP = 0;
	int d_level = 1;
	bool d_online;
	std::string d_name;
};
