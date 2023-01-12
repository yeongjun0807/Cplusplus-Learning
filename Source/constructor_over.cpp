#include "pch.h"
#include <iostream>

using namespace std;

class constructor_over
{
public:
	constructor_over(void) = delete;

	constructor_over(int x)
	{
		cout << "one int data" << endl;
		param = x;
	}

	constructor_over(int x, int y)
		:constructor_over(x)
	{
		cout << "two int data" << endl;
		param += y;
	}

	void print_data()
	{
		cout << param << endl;
	}

	int param;
};

int main()
{
	constructor_over test(2);
	test.print_data();
	constructor_over test2(2, 3);
	test.print_data();

	constructor_over test3; // error
}
