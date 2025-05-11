cmake_minimum_required(VERSION 3.22.0)

project(Figures)

set(SOURCES
	Task10.2.cpp
	EquilateralTriangle.cpp
	Figure.cpp
	IsoscelesTriangle.cpp
	Parallelogram.cpp
	Quadangle.cpp
	Rectangle.cpp
	Rhomb.cpp
	RightAngledTriangle.cpp
	Square.cpp
	Triangle.cpp
)

add_executable(Figures ${SOURCES})