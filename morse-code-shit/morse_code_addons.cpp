#include "morse_code_addons.h"

std::vector<char> splitString(std::string string_to_split) {
	std::vector<char> fuckVector;
	for (size_t i = 0; i < string_to_split.length(); i++)
	{
		fuckVector.push_back(string_to_split[i]);
	}
	return fuckVector;
}

int *returnDoot(int bababoey) {
	
	int dit = 10000;
	int dah = 30000;
	int change = 10000;
	int word = 70000;
	static int intervals[5];
	
	switch (bababoey) {

	case 'a':
		intervals[0] = dit;
		intervals[1] = dah;
		intervals[2] = change;
		return intervals;
		break;
	case 'b':
		intervals[0] = dah;
		intervals[1] = dit;
		intervals[2] = dit;
		intervals[3] = dit;
		intervals[4] = change;
		return intervals;
		break;
	case 'c':
		intervals[0] = dah;
		intervals[1] = dit;
		intervals[2] = dah;
		intervals[3] = dit;
		intervals[4] = change;
		return intervals;
		break;
	case 'd':
		intervals[0] = dah;
		intervals[1] = dit;
		intervals[2] = dit;
		intervals[3] = change;
		return intervals;
		break;
	case 'e':
		intervals[0] = dit;
		intervals[1] = change;
		return intervals;
		break;
	}
}