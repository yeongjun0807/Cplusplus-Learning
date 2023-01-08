// range-based for loop
// 범위 기반 for문

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    int list[5] = { 10, 20, 30, 40, 50 };

    for (auto& n : list)
    {
        cout << n << endl;
    }

    return 0;
}
