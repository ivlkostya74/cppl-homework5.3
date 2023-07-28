#include "CountNumbers.h"
#include<iostream>
#include <vector>
#include <algorithm>

void CountNumbers::operator ()(int value)
{
	if (value % 3 == 0)
	{
		sum_ += value;
		count_++;
	};
};

int CountNumbers::getSum()
{
	count_++;
	std::cout << "getSum() = " << sum_ << std::endl;
	return sum_;
};

int CountNumbers::getCount()
{
	std::cout << "getCount() = " << count_ << std::endl;
	return count_;
};
