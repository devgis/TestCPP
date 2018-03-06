#include "Myclass.h"
MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

int MyClass::AddMe(int a)
{
	int rs = 0;
	if (a > 0)
	{
		int i = 0;
		while (i <= a)
		{
			rs += i;
			i++;
		}
	}
	else
	{
		rs = 0;
	}
	return rs;
}

void MyClass::Show()
{
	this->AddMe(this->TestValue);
}