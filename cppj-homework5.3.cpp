#include "CountNumbers.h"
#include <iostream>
#include "CountNumbers.h"
#include <vector>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "ru");

    CountNumbers addNum;
    std::vector<int> vec = { 4, 1, 3, 6, 25, 54 };

   

    for (auto value : vec)
    {
        std::cout << value << "   ";
    };

    std::cout << "\n\n";

    for (auto value : vec)
    {
        addNum(value);
    };

    addNum.getCount();
    addNum.getSum();
}