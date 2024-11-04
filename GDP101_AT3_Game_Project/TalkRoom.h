#pragma once
#include "Room.h"
class TalkRoom : public Room
{
public:
	//Default constructor. Never called in code, but called when inherrited by ChoiceRoom()
	TalkRoom();
	//Takes in an array of messages, the amount, and the direction to move after the conversation.
	TalkRoom(string* _messages, int _size, int _dir);
	//Override for default room
	int RunRoom() override;
protected:
	//Function that outputs the first message, waits for player input, the second, and onward.
	void DialogueStep();

	//references set by constructor
	string* messages;
	int size;
	int dir;
};

