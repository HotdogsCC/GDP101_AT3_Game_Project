#pragma once
#include "Room.h"
class DeadEnd : public Room
{
public:
	DeadEnd();
	DeadEnd(int previousRoom);
	int RunRoom() override;
private:
	int returnDir;
};

