#pragma once
#include "Counter.h"

class OverflowCounter : public Counter {
public:
	OverflowCounter(int value = 0, int limit = 5);
	void inc() override;
	void dec() override;
	operator int() override;
	~OverflowCounter() {};
private:
	int val;
	int max;
};