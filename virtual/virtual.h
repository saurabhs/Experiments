#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Parent
{
public:
					Parent() { /* */ }

	virtual void	Init() { }
	virtual void	Update() { }
};

class Child : public Parent
{
public:
					Child();

	virtual void	Init();
	virtual void	Update();
};

class Child2 : public Parent
{
public:
			Child2();
	
	void	Init();
	void	Update();
};