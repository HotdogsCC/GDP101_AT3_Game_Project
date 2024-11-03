#include "StealthRoom.h"
#include <iostream>

StealthRoom::StealthRoom(string* _introMessages, string* _winMessages, string* _loseMessages, string* _correctInput, string* _incorrectInput, int _winDirection, int _loseDirection)
{
	introMessages = _introMessages;
	winMessages = _winMessages;
	loseMessages = _loseMessages;
	correctInput = _correctInput;
	incorrectInput = _incorrectInput;
	winDirection = _winDirection;
	loseDirection = _loseDirection;
}

int StealthRoom::RunRoom()
{
	std::cout << *introMessages;
	string userInput;
	
	//Checks the user typed the correct thing
	while (true)
	{
		std::cin >> userInput;
		if (correctInput->compare(userInput) == 0)
		{
			std::cout << *winMessages;
			system("pause");
			return winDirection;
		}
		else if (incorrectInput->compare(userInput) == 0)
		{
			std::cout << *loseMessages;
			system("pause");
			return loseDirection;
		}
		else {
			std::cout << "Input not recognised, try again:\n\n";
			userInput = "";
		}
	}
}