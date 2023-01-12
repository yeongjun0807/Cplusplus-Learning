#include "pch.h"
#include <iostream>

using namespace std;

class test_param
{
	int param;
public:
	test_param(int nparam)
		:param(nparam)
	{
		cout << "one int param" << endl;
	}

	test_param(int nparam, int nparam_2)
		:param(nparam + nparam_2)
	{
		cout << "two int param" << endl;
	}

	~test_param()
	{
		cout << "end" << endl;
	}

	void print_data()
	{
		cout <<  param << endl;
	}
};

int main()
{
	test_param test(2);
	test.print_data();

	test_param test2(2, 3);
	test2.print_data();
}
