#include "ExceptionFigureCreation.h"

ExceptionFigureCreation::ExceptionFigureCreation(std::string str) : ExceptionFigureCreation::err_string { str } {};

ExceptionFigureCreation::ExceptionFigureCreation() {
	ExceptionFigureCreation::err_string = "����������� ������ �������� ������";
};

const char* ExceptionFigureCreation :: what() const { return err_string.c_str(); }
