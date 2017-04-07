#pragma once
#include <string>
#include <iostream>
#include "Entity.h"

class Drone : public Entity
{
public:
	Drone();
	void setName(std::string name);
	void takeInput();
	void performAction(std::string command);
private:
	int d_num = 1;
	bool d_online;
	std::string d_name;
};
