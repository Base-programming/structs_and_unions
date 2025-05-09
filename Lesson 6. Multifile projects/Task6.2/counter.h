#pragma once

class Counter {

    int value_;

public:

    Counter();
    Counter(int value);
    void increment();
    void decrement();
    int get_value();
};
