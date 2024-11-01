#pragma once
#include "Room.h"
class TalkRoom : public Room
{
public:
	TalkRoom();
	TalkRoom(string* _messages, int _size);
	~TalkRoom();
	int RunRoom() override;
protected:
	void DialogueStep();
	string* messages;
	int size;
};

