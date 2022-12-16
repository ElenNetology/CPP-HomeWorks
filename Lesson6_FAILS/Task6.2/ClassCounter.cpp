#include "ClassCounter.h"

ClassCounter::ClassCounter(int n)
{
    count = n;
}
int ClassCounter::add()
{
    return ++count;
}
int ClassCounter::subtract()
{
    return --count;
}
int ClassCounter::get()
{
    return count;
}