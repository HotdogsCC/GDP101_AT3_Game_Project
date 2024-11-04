#pragma once
#include <string>

using std::string;

class Room
{
public:
	//Outputs the set description to the console
	void OutputDescription();
	//The direction a player enters (NESW -> 1,2,3,4)
	int DirectionInput();
	//Overridable function for children to inherit, run each time the player enters a room
	virtual int RunRoom();

	//Sets the description
	void SetDescription(string _str);

	//Sets each direction
	void CanMoveNorth();
	void CanMoveEast();
	void CanMoveSouth();
	void CanMoveWest();

protected:
	string description = "Placeholder.\n";
	
private:
	//Stores which directions can be moved in 
	bool canMoveNorth = false;
	bool canMoveEast = false;
	bool canMoveSouth = false;
	bool canMoveWest = false;
};

