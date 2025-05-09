#pragma once

#include <iostream>
#include <stdexcept>

class ExceptionFigureCreation : public std::exception
{
	std::string err_string;
public:
	ExceptionFigureCreation(std::string str);
	ExceptionFigureCreation();
	const char* what() const override;
};