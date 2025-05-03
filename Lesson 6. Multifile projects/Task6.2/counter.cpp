#include "counter.h"

Counter::Counter() : __value(1)
    {
    }
Counter::Counter(int value) : __value(value)
    {
    }
    void Counter::increment() {
        __value++;
    }
    void Counter::decrement() {
        __value--;
    }
    int Counter::get_value() {
        return __value;
    }
