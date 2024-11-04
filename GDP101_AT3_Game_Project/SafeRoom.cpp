#include "SafeRoom.h"

//Safe room is only used for spawn. Cleaner to assign in the class, rather than elsewhere.
SafeRoom::SafeRoom()
{
	description =
		"You awaken in a dark, damp room. The air is stale, with only faint smells of moss and rot.\n"
		"You feel trapped with large cobblestone walls surrounding the small room.\n"
		"You have no recollection of how you got here, but only know you must get out.\n\n"

		"In front of you exist two doors. One in an easterly direction, and one in a southerly direction.\n"
		"Where do you go? Enter 'East' or 'South'.\n\n"

		"";
}