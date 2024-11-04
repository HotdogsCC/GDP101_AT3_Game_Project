#pragma once
#include "Room.h"
class BattleRoom : public Room
{
public:
	//Takes in the amount of battles, the correct inputs, the correct dialogue, the incorrect dialogue, 
	// the direction upon winning, and the direction upon losing
	BattleRoom(int _battles, int* _winningNums, string* _winDialogue, string* _loseDialogue, int _winDir, int _loseDir);

	//Override for default room class
	int RunRoom() override;

private:
	//Stores values set in constructor
	int battles;
	int* winningNums;
	string* winDialogue;
	string* loseDialogue;
	int winDir;
	int loseDir;
};

