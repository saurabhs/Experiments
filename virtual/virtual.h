#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Parent
{
public:
					Parent() { /* */ }

	virtual void	Init() = 0;
	virtual void	Update() = 0;
};

class Child : public Parent
{
public:
					Child();

	virtual void	Init();
	virtual void	Update();
};

class Child2 : public Child
{
public:
			Child2();
			~Child2();
	
	void	Init();
	void	Update();
};