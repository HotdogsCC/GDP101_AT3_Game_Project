#include "DeadEnd.h"
#include <iostream>

DeadEnd::DeadEnd()
{
	description = "Null.";
}
DeadEnd::DeadEnd(string inputDesc, int returnDirection)
{
	description = inputDesc;
	returnDir = returnDirection;
}

int DeadEnd::RunRoom()
{
	//OutputDescription();
	std::cout << "If this outputs, overriding is working";
	system("pause");
	return returnDir;
}
