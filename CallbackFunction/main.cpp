#include <iostream>
#include <stdio.h>
#include <conio.h>

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

void display(int(*result)(void))
{
	printf("result : %d\n", result());
}

void display(int(*result)(int), int other)
{
	printf("result : %d\n", result(other));
}

void display(int(*result)(int, int), int mul, int div)
{
	printf("result : %d\n", result(mul, div));
}

void main()
{
	setVar(99, 9);
	
	display(getAdd);
	display(getMul, 11);
	display(getMul, 11, 3);
	
	_getch();
}