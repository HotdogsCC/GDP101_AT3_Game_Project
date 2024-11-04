#pragma once
#include "Room.h"
class DeadEnd : public Room
{
public:
	//Constructuor for dead end, takes in direction for the next room
	DeadEnd(int direction);
	//Room override
	int RunRoom() override;
private:
	//Stores return dir
	int returnDir;
};

