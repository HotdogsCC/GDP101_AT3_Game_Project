#pragma once
#include "Room.h"
class StealthRoom : public Room
{
public:
	//Takes in intro messages before the choice, win messages if successful, lose messsages if not, the correct input,
	//the incorrect input, and the win and lose directions
	StealthRoom(string* _introMessages, string* _winMessages, string* _loseMessages, string* _correctInput, string* _incorrectInput, int _winDirection, int _loseDirection);
	//room override
	int RunRoom() override;
private:
	//stores values set in constructor
	string* introMessages;
	string* winMessages;
	string* loseMessages;
	string* correctInput;
	string* incorrectInput;
	int winDirection;
	int loseDirection;
};

