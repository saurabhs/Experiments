#include <iostream>
#include <stdio.h>

using namespace std;	

int var1 = 20, var2 = 50;

void setVar(int _var1, int _var2)
{
	var1 = _var1;
	var2 = _var2;
}

int getAdd()
{
	return (var1 + var2);
}

int getSub(int _var1, int _var2)
{
	return (_var1 - _var2);
}

int getMul()
{
	return (var1 * var2);
}

int getMul(int mul)
{
	return (var1 * var2 * mul);
}

int getMul(int mul, int div)
{
	return ((var1 * var2 * mul) / div);
}

//callbacks

void display(int(*func)(void))
{
	printf("result : %d\n", func());
}

void display(int(*func)(int), int other)
{
	printf("result : %d\n", func(other));
}

void display(int(*func)(int, int), int mul, int div)
{
	printf("result : %d\n", func(mul, div));
}

void display(int(*func)(int, int), int(*func2)(int, int), int mul, int div, int sub)
{
	printf("result : %d\n", func2(func(mul, div), sub));
}

//main()

int main()
{
	setVar(99, 9);
	
	display(getAdd);
	display(getMul, 11);
	display(getMul, 11, 3);

	display(getMul, getSub, 11, 3, 5);
	
	return 0;
}