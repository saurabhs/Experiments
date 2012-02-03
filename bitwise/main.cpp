#include <iostream>
#include <conio.h>

#define MUL_HEX

using namespace std;

void main()
{
#ifdef TUT_HEX
	int var1 = 0x000010;
	int var2 = 0x101010;
	
	int var3 = var1 | var2;
	cout<<hex<<var3<<endl;

	var3 = var1 & var2;
	cout<<hex<<var3<<endl;

	var3 = var1 ^ var2;
	cout<<hex<<var3<<endl;
#endif

#ifdef COLOR_HEX
	//via gamedev.stackexchange.com

	unsigned int color = 0xff00aa;

	int red = (color >> 16) & 0xff;
	int green = (color >> 8) & 0xff;
	int blue = color & 0xff;

	cout<<"\n\nRed : "<<red<<", Green : "<<green<<", Blue : "<<blue;

	cout<<"\n\ncolor : "<<color;

	int test = color >> 16;
	cout<<"\ntest #1 : "<<test;

	test = test & 0x0;
	cout<<"\ntest #2 : "<<test;
#endif

#ifdef MUL_HEX
	unsigned int var4 = 0xff1010 >> 16;
	var4 = var4 & 0xff;

	cout<<"\n\n"<<var4;
#endif

	_getch();
}
