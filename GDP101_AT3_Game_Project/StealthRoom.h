#pragma once
#include "Room.h"
class StealthRoom : public Room
{
public:
	StealthRoom(string* _introMessages, string* _winMessages, string* _loseMessages, string* _correctInput, string* _incorrectInput, int _winDirection, int _loseDirection);
	int RunRoom() override;
private:
	string* introMessages;
	string* winMessages;
	string* loseMessages;
	string* correctInput;
	string* incorrectInput;
	int winDirection;
	int loseDirection;
};

