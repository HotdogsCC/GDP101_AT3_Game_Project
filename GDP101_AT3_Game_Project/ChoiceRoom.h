#pragma once
#include "TalkRoom.h"
class ChoiceRoom : public TalkRoom
{
public:
	//Takes in an array of messages, the amount of messages, and the direction each choice leads to 
	ChoiceRoom(string* _messages, int _size, int* _choicesDir);
	int RunRoom() override;
private:
	//Stores the pointer to choice directions
	int* choicesDir;
};

