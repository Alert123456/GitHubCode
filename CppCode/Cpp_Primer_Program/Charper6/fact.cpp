#include <iostream>
#include <vector>
#include <string>
#include "Charper6.h"
using namespace std;
int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= (val--);
    return ret;
}
int absolate(int val)
{
    int ret = 0;
    static int num1 = 0;
    return ++num1;
}