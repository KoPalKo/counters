#include <iostream>
#include "../lib/LimitedCounter.h"

using namespace std;

LimitedCounter::LimitedCounter(int value, int limit) : val(value), max(limit)
{
}

void LimitedCounter::inc()
{
	if (val < max) { val++; }

}

void LimitedCounter::dec()
{
	if (val > 0) { val--; }
}

LimitedCounter::operator int()
{
	//cout << val << endl;
	return val;
}