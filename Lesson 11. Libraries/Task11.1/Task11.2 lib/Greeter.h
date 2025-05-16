#pragma once

#include <iostream>

#ifdef GREETERLIBRARYDYNAMIC_EXPORTS
#define GREETERLIBRARY_API __declspec(dllexport)
#else
#define GREETERLIBRARY_API __declspec(dllimport)
#endif

namespace DynamicGreeter
{
	class Greeter {
	public:
		GREETERLIBRARY_API std::string greet(std::string name);
	};
}