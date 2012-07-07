#include <iostream>
#include <conio.h>

using namespace std;

template<class T>
class templateClass
{
public:
	void print(const char* msg)
	{
		printf("%s : %d byte\n", msg, sizeof(T));
	}
};

template<>
class templateClass<char>
{
public:
	void print(const char* msg)
	{
		printf("%s : %d bits\n", msg, sizeof(char) * 8);
	}
};

int main()
{
	templateClass<bool> b;
	b.print("bool");

	templateClass<int> i;
	i.print("int");

	templateClass<float> f;
	f.print("float");

	templateClass<double> d;
	d.print("double");

	templateClass<long> l;
	l.print("long");

	templateClass<char> c;
	c.print("char");

	_getch();

	return 0;
}