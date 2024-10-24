#pragma once
#include <string>

using std::string;

class Room
{
public:
	void OutputDescription();
	int DirectionInput();
	virtual int RunRoom();

	void SetDescription(string _str);

	void CanMoveNorth();
	void CanMoveEast();
	void CanMoveSouth();
	void CanMoveWest();

protected:
	string description = "Placeholder.\n";
	int indexCol = 0;
	int indexRow = 0;
	
private:
	bool canMoveNorth = false;
	bool canMoveEast = false;
	bool canMoveSouth = false;
	bool canMoveWest = false;
};

