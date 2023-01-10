#include "pch.h"
#include <iostream>

using namespace std;

int Add(int a, int b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}

double Add(double a, double b)
{
	return a + b;
}

int main()
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.4, 5.5) << endl;
}
