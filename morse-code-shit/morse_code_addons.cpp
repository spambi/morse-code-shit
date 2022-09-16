#include "morse_code_addons.h"

std::vector<char> splitString(std::string string_to_split) {
	std::vector<char> fuckVector;
	for (size_t i = 0; i < string_to_split.length(); i++)
	{
		fuckVector.push_back(string_to_split[i]);
	}
	return fuckVector;
}

void returnDoot(char bababoey) {
	
	char dit = 10000;
	char dah = 30000;
	char change = 10000;
	char word = 70000;

	int intervals[5];
	
	for (DWORD t = 0; t < sizeof(buffer); ++t) {
		//buffer[t] = static_cast<char>((((t * (t >> 8 | t >> 9) & 46 & t >> 8)) ^ (t & t >> 13 | t >> 6)) & 0xF1);
		// 10000 for dit
		// 30000 for dah
		// 10000 for lettering change
		// 70000 for space between words
		//if (t < 10000) {
		//	buffer[t] = static_cast<char>(t);
		//}
	}
	
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
}