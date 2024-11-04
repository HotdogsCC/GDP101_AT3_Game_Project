#include "DeadEnd.h"
#include <iostream>

//sets direction
DeadEnd::DeadEnd(int direction)
{
	returnDir = direction;
}

//outputs text then returns the next direction to move in
int DeadEnd::RunRoom()
{
	OutputDescription();
	system("pause");
	return returnDir;
}
