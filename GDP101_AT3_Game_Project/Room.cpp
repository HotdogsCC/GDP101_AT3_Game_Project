#include "Room.h"
#include <iostream>
using std::cout;
using std::cin;

//outputs description
void Room::OutputDescription()
{
	system("cls");
	cout << this->description;
}

//waits for valid input and returns direction (kind of under used)
int Room::DirectionInput()
{
	string input;
	while (true)
	{
		cin >> input;

		if (input.compare("North") == 0 && canMoveNorth)
		{
			return 1;
		}
		else if (input.compare("East") == 0 && canMoveEast)
		{
			return 2;
		}
		else if (input.compare("South") == 0 && canMoveSouth)
		{
			return 3;
		}
		else if (input.compare("West") == 0 && canMoveWest)
		{
			return 4;
		}
		else
		{
			cout << "\nThat input wasn't recognised, try again: ";
		}
	}
}

void Room::SetDescription(string _str)
{
	this->description = _str;
}

void Room::CanMoveNorth()
{
	canMoveNorth = true;
}

void Room::CanMoveEast()
{
	canMoveEast = true;
}

void Room::CanMoveSouth()
{
	canMoveSouth = true;
}

void Room::CanMoveWest()
{
	canMoveWest = true;
}

//Runs the gameplay of the room. Returns the direction for the next room (1,2,3,4) -> (N,E,S,W)
int Room::RunRoom()
{
	OutputDescription();
	return DirectionInput();
}