#include <iostream>
#include "../lib/OverflowCounter.h"

using namespace std;

OverflowCounter::OverflowCounter(int value, int limit) : val(value), max(limit)
{
}

void OverflowCounter::inc()
{
	if (val <= max) { val++; }
	if (val > max) { val = 0; }
}

void OverflowCounter::dec()
{
	if (val >= 0) { val--; }
	if (val < 0) { val = max; }
}

OverflowCounter::operator int()
{
	return val;
}