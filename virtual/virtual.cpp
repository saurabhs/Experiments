#include "virtual.h"

Child::Child()
{
	var1 = 20;
	var2 = 40;
}

void Child::Init()
{
	var1 = 40;
	var2 = 20;
}

void Child::Update()
{
	var1++;
	var2++;

	cout<<"\nvar1 : "<<var1<<", var2 : "<<var2;
}

Child2::Child2()
{

}

void Child2::Init()
{
	var1 = 50.0f;
	var2 = 150.0f;
}

void Child2::Update()
{
	var1--;
	var2--;

	cout<<"\nvar1 : "<<var1<<", var2 : "<<var2;
}