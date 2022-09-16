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
}