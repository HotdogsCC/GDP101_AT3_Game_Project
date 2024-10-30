#pragma once
#include "Room.h"
class BattleRoom : public Room
{
public:
	BattleRoom(int _battles, int* _winningNums, string* _winDialogue, string* _loseDialogue, int _winDir, int _loseDir);
	int RunRoom() override;

private:
	int battles;
	int* winningNums;
	string* winDialogue;
	string* loseDialogue;
	int winDir;
	int loseDir;
};

