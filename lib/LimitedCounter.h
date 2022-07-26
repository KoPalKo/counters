#pragma once
#include "Counter.h"

class LimitedCounter : public Counter {
public:
	LimitedCounter(int value = 0, int limit = 5);
	void inc() override;
	void dec() override;
	operator int() override;
	~LimitedCounter() {};
private:
	int val;
	int max;
};