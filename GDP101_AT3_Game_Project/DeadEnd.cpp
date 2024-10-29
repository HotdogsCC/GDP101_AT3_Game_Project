#include "DeadEnd.h"
#include <iostream>

DeadEnd::DeadEnd()
{
	description = "Null.";
}
DeadEnd::DeadEnd(int returnDirection)
{
	returnDir = returnDirection;
}

int DeadEnd::RunRoom()
{
	OutputDescription();
	system("pause");
	return returnDir;
}
