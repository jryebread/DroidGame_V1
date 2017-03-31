#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
void waitType(std::string sentence1, std::string sentence2, int wait, int typespeed);
int main()
{
	std::string input;
	std::string mystring = "Hello ? ";
	std::string mystring2 = "...Is anyone there?\n";
	int wait = 800;
	int typespeed = 70;

	cout << "INITIALIZING CONNECTION...\n";
	cout << "CONNECTION ESTABLISHED! - \n\n";
	waitType(mystring,mystring2, wait, typespeed);
	cin >> input;
	mystring = "Hello! It's unbelievable you're alive! Your ship has lost all power and is non-functional..\n";
	mystring2 = "The little drone on board could save your life! Activate it by the command: drone1 activate \n";
	waitType(mystring, mystring2, wait, typespeed);
	

	return 0;
}

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