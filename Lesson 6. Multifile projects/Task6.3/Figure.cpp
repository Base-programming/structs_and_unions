#include "Figure.h"

Figure::Figure(int setSides, std::string setName) : sides(setSides), name(setName) {};

Figure::Figure() {};

int Figure::get_number_of_sides() {
    return sides;
}

void Figure::print_info() {
    std::cout << name << ": " << std::endl;
}

int Figure::check_figure() {
    return -1;
}
