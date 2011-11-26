#include <iostream>
#include <conio.h>

using namespace std;

int var1 = 152;
int var2 = 251;

void SetVars(int v1, int v2)
{
	var1 = v1;
	var2 = v2;
}

void GetVars(int &v1, int &v2)
{
	v1 = var1;
	v2 = var2;
}

void Display(int v1, int v2)
{
	printf("var1 : %i, var2 : %i", v1, v2);
}

void main()
{
	Display(var1, var2);
	
	cout<<"\n\n";
	SetVars(100, 200);
	Display(var1, var2);

	int a, b;

	cout<<"\n\n";
	GetVars(a, b);
	Display(a, b);

	_getch();
}