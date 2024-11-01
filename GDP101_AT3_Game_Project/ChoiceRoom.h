#pragma once
#include "TalkRoom.h"
class ChoiceRoom : public TalkRoom
{
public:
	ChoiceRoom(string* _messages, int _size, int* _choicesDir);
	~ChoiceRoom();
	int RunRoom() override;
private:
	int* choicesDir;
};

