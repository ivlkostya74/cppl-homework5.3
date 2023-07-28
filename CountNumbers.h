#pragma once
#include <iostream>


class CountNumbers
{
private:
	int count_ = 0;
	int sum_ = 0;

public:
	CountNumbers() = default;

	void operator ()(int value);
	int getSum();
	int getCount();
};