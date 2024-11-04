#include "StealthRoom.h"
#include <iostream>

//Takes in intro messages before the choice, win messages if successful, lose messsages if not, the correct input,
	//the incorrect input, and the win and lose directions
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

//override for running the room
int StealthRoom::RunRoom()
{
	//outputs messages
	std::cout << *introMessages;

	string userInput; //used for input
	
	//Checks the user typed the correct thing
	while (true)
	{
		//returns direction based upon user input (win/lose)
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