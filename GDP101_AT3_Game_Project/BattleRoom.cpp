#include "BattleRoom.h"
#include <iostream>

//Takes in the amount of battles, the correct inputs, the correct dialogue, the incorrect dialogue, 
// the direction upon winning, and the direction upon losing
BattleRoom::BattleRoom(int _battles, int* _winningNums, string* _winDialogue, string* _loseDialogue, int _winDir, int _loseDir)
{
	battles = _battles;
	winningNums = _winningNums;
	winDialogue = _winDialogue;
	loseDialogue = _loseDialogue;
	winDir = _winDir;
	loseDir = _loseDir;
}

//Override for default room class
int BattleRoom::RunRoom()
{
	//Intro dialogue
	OutputDescription();

	//Loops through each step of the battle, breaking if the player makes the wrong move
	for (int i = 0; i < battles; i++)
	{
		string userInput = "";
		std::cin >> userInput;

		//checks input is correct (i.e. User entered 1, and 1 was the correct choice)
		if (userInput.compare(std::to_string(winningNums[i])) == 0)
		{
			std::cout << winDialogue[i];
		}
		else
		{
			std::cout << loseDialogue[i];
			system("pause");
			return loseDir;
		}
	}

	//If this code is executed, it means the player got through the entire battle and won.
	system("pause");
	return winDir;
}