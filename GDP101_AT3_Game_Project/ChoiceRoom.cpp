#include "ChoiceRoom.h"
#include <iostream>

ChoiceRoom::ChoiceRoom(string* _messages, int _size, int* _choicesDir)
{
	messages = _messages;
	size = _size;
	choicesDir = _choicesDir;
}

ChoiceRoom::~ChoiceRoom()
{
	delete messages;
	delete choicesDir;
}

int ChoiceRoom::RunRoom()
{
	DialogueStep();

	for (int i = 0; i < size; i++)
	{
		std::cout << messages[i];
	}

	string input;
	std::cin >> input;

	while (true)
	{
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
		}
	}
}