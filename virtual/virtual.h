#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Parent
{
public:
	virtual void Init() = 0;
	virtual void Update() = 0;
};

class Child : public Parent
{
	int		var1;
	int		var2;
public:
			Child();
	void	Init();
	void	Update();
};

class Child2 : public Parent
{
	float	var1;
	float	var2;
public:
			Child2();
	
	void	GetVar(float &v1, float &v2) { v1 = var1; v2 = var2; }
	void	SetVar(float v1, float v2) { var1 = v1; var2 = v2; }
	void	Init();
	void	Update();
};