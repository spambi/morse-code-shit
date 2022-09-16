#include "morse_code_addons.h"

std::vector<std::string> splitString(std::string* string_to_split) {
	std::vector<std::string> fuckVector;
	for (size_t i = 0; i < string_to_split->length(); i++)
	{
		fuckVector.insert(fuckVector.begin(), i, "dada");
	}
	return fuckVector;
}
