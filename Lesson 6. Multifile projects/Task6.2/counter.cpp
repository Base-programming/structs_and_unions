#include "counter.h"

Counter::Counter() : value_(1)
    {
    }
Counter::Counter(int value) : value_(value)
    {
    }
    void Counter::increment() {
        value_++;
    }
    void Counter::decrement() {
        value_--;
    }
    int Counter::get_value() {
        return value_;
    }
