#include "pch.h"
#include <iostream>

using namespace std;

#define macro_add(x, y)((x) + (y))

int add(int a, int b)
{
	return a + b;
}

int inline new_add(int a, int b)
{
	return a + b;
}

int main()
{
	cout << add(1, 3) << endl;
	cout << new_add(2, 3) << endl;
	cout << macro_add(1, 2) << endl;
}
