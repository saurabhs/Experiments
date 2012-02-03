#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Vector2
{
	int x;
	int y;

	Vector2()
	{
		x = 0;
		y = 0;
	}

	Vector2(int xx, int yy)
	{
		x = xx;
		y = yy;
	}

	Vector2 operator*(int value)
	{
		Vector2 temp;

		temp.x = this->x * value;
		temp.y = this->y * value;

		return temp;
	}
	
	Vector2 operator*(Vector2 value)
	{
		Vector2 temp;

		temp.x = this->x * value.x;
		temp.y = this->y * value.y;

		return temp;
	}

	Vector2 operator+(int value)
	{
		Vector2 temp;

		temp.x = this->x + value;
		temp.y = this->y + value;

		return temp;
	}
};

void main()
{
	Vector2 vec(12, 45);
	Vector2 vec2(12, 6);
	
	vec = vec * 2;
	cout<<"x : "<<vec.x<<", y : "<<vec.y;

	Vector2 vec4 = vec * vec2;
	cout<<"\n\nx : "<<vec4.x<<", y : "<<vec4.y;

	vec4 = vec4 + 3;
	cout<<"\n\nx : "<<vec4.x<<", y : "<<vec4.y;

	_getch();
}