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
		intervals[0] = dit;
		intervals[1] = dah;
		intervals[2] = change;
		break;
	case 'b':
		intervals[0] = dah;
		intervals[1] = dit;
		intervals[2] = dit;
		intervals[3] = dit;
		intervals[4] = change;
		break;
	case 'c':
		intervals[0] = dah;
		intervals[1] = dit;
		intervals[2] = dah;
		intervals[3] = dit;
		intervals[4] = change;
		break;
	case 'd':
		intervals[0] = dah;
		intervals[1] = dit;
		intervals[2] = dit;
		intervals[3] = change;
		break;
	case 'e':
		intervals[0] = dit;
		intervals[1] = change;
		break;
	}

	return intervals;
}