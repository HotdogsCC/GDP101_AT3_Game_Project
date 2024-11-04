#include "TalkRoom.h"
#include <iostream>

//Default constructor. Never called in code, but called when inherrited by ChoiceRoom()
TalkRoom::TalkRoom()
{
	messages = nullptr;
	size = 0;
	dir = 0;
}


TalkRoom::TalkRoom(string* _messages, int _size, int _dir)
{
	messages = _messages;
	size = _size;
	dir = _dir;
}


void TalkRoom::DialogueStep()
{
	//Clears screen
	system("cls");

	//Outputs each message chunk, seperated by system pauses.
	//This allows the user to click enter to load the next chunk.
	for (int i = 0; i < size; i++)
	{
		//Pausing the screen causes 'Press any key to continue' to be printed to the console, with no easy to remove it without clearing the entire screen
		//This algo works around this.
		//Prints message 1, pauses, clears screen, prints message 1 and 2, pauses, clears screen, prints message 1 and 2 and 3, and so on.
		for (int j = 0; j < i + 1; j++)
		{
			std::cout << messages[j];
		}
		system("pause");
		system("cls");
	}
}

int TalkRoom::RunRoom()
{
	DialogueStep();
	return dir;
}