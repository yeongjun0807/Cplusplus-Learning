#include "pch.h"
#include <iostream>

using namespace std;

template<typename T>
T template_add(T a, T b)
{
	return a + b;
}

int main()
{
	cout << template_add(2, 3) << endl;
	cout << template_add(2.3, 3.3) << endl;
}
