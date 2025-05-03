#include "my_math.h"

int add(int num1, int num2) {
    return num1 + num2;
}

int substract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int power(int value, int pow) {
    int retval = value;

    for (int i = 1; i <= pow; i++) {
        retval *= value;
    }

    return retval;
}
