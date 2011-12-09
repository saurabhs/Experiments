#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int var1 = 0x000010;
	int var2 = 0x101010;
	
	int var3 = var1 | var2;
	cout<<hex<<var3<<endl;

	var3 = var1 & var2;
	cout<<hex<<var3<<endl;

	var3 = var1 ^ var2;
	cout<<hex<<var3<<endl;

	_getch();
}
