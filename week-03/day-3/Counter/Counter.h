#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter
{
public:
    Counter();

    Counter(int value);

    void add(int number);

    void add();

    int get();

    void reset();

private:
    int _initialValue;
    int _actualValue = _initialValue;
};


#endif //COUNTER_COUNTER_H
