#pragma once
#include "Room.h"
class DeadEnd : public Room
{
public:
	DeadEnd();
	DeadEnd(string inputDesc, int previousRoom);
	int RunRoom() override;
private:
	int returnDir;
};

