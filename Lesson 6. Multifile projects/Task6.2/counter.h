#pragma once

class Counter {

    int __value;

public:

    Counter();
    Counter(int value);
    void increment();
    void decrement();
    int get_value();
};
