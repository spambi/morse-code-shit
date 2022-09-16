#include "morse_code_addons.h"

std::vector<char> splitString(std::string string_to_split) {
	std::vector<char> fuckVector;
	for (size_t i = 0; i < string_to_split.length(); i++)
	{
		fuckVector.push_back(string_to_split[i]);
	}
	return fuckVector;
}

char *returnDoot(char bababoey) {
	
	char dit = 10000;
	char dah = 30000;
	char change = 10000;
	char word = 70000;
	static char intervals[5];

	switch (bababoey) {
		char intervals[5];
	case 'a':
		intervals[2] = dit, dah, change;
		break;
	case 'b':
		intervals[4] = dah, dit, dit, dit, change;
		break;
	case 'c':
		intervals[4] = dah, dit, dah, dit, change;
		break;
	case 'd':
		intervals[3] = dah, dit, dit, change;
		break;
	case 'e':
		intervals[1] = dit, change;
		break;
	}

	return intervals;
}