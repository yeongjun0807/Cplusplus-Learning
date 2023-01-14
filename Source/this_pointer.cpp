#include "pch.h"
#include <iostream>

using namespace std;

class this_pointer
{
public:
	this_pointer(int n) : data(n) {};
	void printdata()
	{
		cout << data << endl;
		cout << this_pointer::data << endl;
		cout << this->data << endl;
		cout << this->this_pointer::data << endl;
	}

	int data;
};

int main()
{
	this_pointer a(5);
	a.printdata();
}
