#include "ChoiceRoom.h"
#include <iostream>

//Takes in an array of messages, the amount of messages, and the direction each choice leads to 
ChoiceRoom::ChoiceRoom(string* _messages, int _size, int* _choicesDir)
{
	messages = _messages;
	size = _size;
	choicesDir = _choicesDir;
}

int ChoiceRoom::RunRoom()
{
	//Plays each piece of intro dialogue
	DialogueStep();

	//Plays the final step
	for (int i = 0; i < size; i++)
	{
		std::cout << messages[i];
	}

	//used for storing input
	string input;
	
	//loops until valid input
	while (true)
	{
		//returns the respective direction to move in
		std::cin >> input;
		if (input.compare("1") == 0)
		{
			return choicesDir[0];
		}
		else if (input.compare("2") == 0)
		{
			return choicesDir[1];
		}
		else
		{
			std::cout << "\nThat input wasn't recognised, try again: ";
			input = "";
		}
	}
}