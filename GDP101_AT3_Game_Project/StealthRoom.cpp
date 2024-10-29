#include "StealthRoom.h"
#include <iostream>

StealthRoom::StealthRoom(string* _introMessages, string* _winMessages, string* _loseMessages, string* _correctInput, int _winDirection, int _loseDirection)
{
	introMessages = _introMessages;
	winMessages = _winMessages;
	loseMessages = _loseMessages;
	correctInput = _correctInput;
	winDirection = _winDirection;
	loseDirection = _loseDirection;
}

int StealthRoom::RunRoom()
{
	std::cout << *introMessages;
	string userInput;
	std::cin >> userInput;
	//Checks the user typed the correct thing
	if (correctInput->compare(userInput) == 0)
	{
		std::cout << *winMessages;
		system("pause");
		return winDirection;
	}
	else 
	{
		std::cout << *loseMessages;
		system("pause");
		return loseDirection;
	}
}