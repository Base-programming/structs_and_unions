#include "Greeter.h"

namespace DynamicGreeter {
	std::string Greeter::greet(std::string name) {
		std::string result = "������������, " + name + "!";
		return result;
	};
};
