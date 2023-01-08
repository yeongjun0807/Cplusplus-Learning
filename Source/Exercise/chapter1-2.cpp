// exercise
// Chapter1-2

#include "pch.h"
#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	return;
}

int main()
{
	int alist[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			if (alist[i] > alist[j])
			{
				swap(alist[i], alist[j]);
			}
		}
	}

	for (auto& n : alist)
	{
		cout << n << " ";
	}

	cout << endl;
}
