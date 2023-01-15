#include "pch.h"
#include <iostream>

using namespace std;

class Test
{
	mutable int m_nData = 0;
public:
	Test(int nParam) : m_nData(nParam) {}
	~Test() {}

	int GetData() const
	{
		m_nData = 20;
		return m_nData;
	}
};

int main()
{
	Test a(10);
	cout << a.GetData() << endl;
}
