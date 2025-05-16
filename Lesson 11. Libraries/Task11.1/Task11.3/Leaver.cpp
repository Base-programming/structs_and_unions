#include "Leaver.h"

namespace DynamicLeaver {
	std::string Leaver::leave(std::string name) {
		std::string result = "До свидания, " + name + "!";
		return result;
	};
};
