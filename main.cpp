#include <iostream>
#include "lib/Counter.h"
#include "lib/LimitedCounter.h"
#include "lib/OverflowCounter.h"

using namespace std;

void UseCounter(Counter& ctr, int num);

int main(int argc, char** argv) {
	LimitedCounter lc(0, 5);
	OverflowCounter oc(5, 9);

	cout << oc << endl;
	UseCounter(oc, 5);
	cout << oc << endl; // should display zero
	UseCounter(oc, -1);
	cout << oc << endl; // should display 9
	oc.dec();
	cout << oc << endl; // should display 8

	cout << lc << endl;
	lc.inc();
	cout << lc << endl;
	lc.dec();
	cout << lc << endl;
	for (int i = 0; i < 10; ++i) lc.inc();
	cout << lc << endl;
	UseCounter(lc, -9);
	cout << lc << endl;

	return 0;
}

void UseCounter(Counter& ctr, int num)
{
	if (num > 0) { while (num > 0) { ctr.inc(); num--; } }
	if (num < 0) { while (num < 0) { ctr.dec(); num++; } }
}