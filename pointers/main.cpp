#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <cmath>

using namespace std;

int var = 10;
int *pVar = &var;
int *pVar2 = pVar;
int **pVar3 = &pVar2;
int var2 = *pVar2;

void test(int &r){
	*pVar = r;
	//*pVar = *(&r);
	//var2 = *pVar2;

	cout<<"var = "<<var;
	cout<<"\n&var = "<<&var;

	cout<<"\n\nvar2 = "<<var2;
	cout<<"\n&var2 = "<<&var2;

	cout<<"\n\npVar = "<<pVar;
	cout<<"\n&pVar = "<<&pVar;
	cout<<"\n*pVar = "<<*pVar;

	cout<<"\n\npVar2 = "<<pVar2;
	cout<<"\n&pVar2 = "<<&pVar2;
	cout<<"\n*pVar2 = "<<*pVar2;

	cout<<"\n\npVar3 = "<<pVar3;
	cout<<"\n&pVar3 = "<<&pVar3;
	cout<<"\n*pVar3 = "<<*pVar3;
	cout<<"\n**pVar3 = "<<**pVar3;

	cout<<"\n\n***********************";

	var = 25;
	*pVar2 = 4512;
	//**pVar3 = &pVar;
	//var = 200;

	cout<<"\n\nvar = "<<var;
	cout<<"\nvar = "<<&var;

	cout<<"\n\nvar2 = "<<var2;
	cout<<"\n&var2 = "<<&var2;

	cout<<"\n\npVar = "<<pVar;
	cout<<"\n&pVar = "<<&pVar;
	cout<<"\n*pVar = "<<*pVar;

	cout<<"\n\npVar2 = "<<pVar2;
	cout<<"\n&pVar2 = "<<&pVar2;
	cout<<"\n*pVar2 = "<<*pVar2;

	cout<<"\n\npVar3 = "<<pVar3;
	cout<<"\n&pVar3 = "<<&pVar3;
	cout<<"\n*pVar3 = "<<*pVar3;
	cout<<"\n**pVar3 = "<<**pVar3;

	cout<<"\n\n***********************\n";
}

void test2(void* data, int size){
	if(size == sizeof(char)){
		char* pChar;
		pChar = (char*) data;
		(*pChar) -= sizeof(char);
	}
	else if(size == sizeof(int)){
		int* pInt;
		pInt = (int*) data;
		(*pInt) *= 2;
	}
	else if(size == sizeof(float)){
		float* pFloat;
		pFloat = (float*) data;
		(*pFloat) *= 10.0f;
	}
}

class oper{
	int var1, var2;
public:
	oper(int a = 0, int b = 0){
		var1 = a;
		var2 = b;
	}

	void show(bool newLine = false){
		if(newLine)
			cout<<"\n";

		cout<<"a : "<<var1;
		cout<<"\tb : "<<var2<<"\n";
	}

	oper operator+(oper obj){
		oper temp;
		temp.var1 = obj.var1 + var1;
		temp.var2 = obj.var2 + var2;
		return temp;
	}

	oper operator-(oper obj){
		oper temp;
		temp.var1 = obj.var1 - var1;
		temp.var2 = obj.var2 - var2;
		return temp;
	}

	oper operator*(oper obj){
		oper temp;
		temp.var1 = obj.var1 * var1;
		temp.var2 = obj.var2 * var2;
		return temp;
	}

	oper operator/(oper obj){
		oper temp;
		temp.var1 = obj.var1 / var1;
		temp.var2 = obj.var2 / var2;
		return temp;
	}

	oper operator%(oper obj){
		oper temp;
		temp.var1 = obj.var1 % var1;
		temp.var2 = obj.var2 % var2;
		return temp;
	}

	oper operator%=(oper obj){
		oper temp;
		temp.var1 = obj.var1 % var1;
		temp.var2 = obj.var2 % var2;
		return temp;
	}

	/*//Already defined in C++
	oper operator=(oper obj){
		var1 = obj.var1;
		var2 = obj.var2;
		return *this;
	}*/

	oper operator++(){
		var1++;
		var2++;
		return *this;
	}

	oper operator--(){
		var1--;
		var2--;
		return *this;
	}

	oper operator+=(oper obj){
		var1 += obj.var1;
		var2 += obj.var2;
		return *this;
	}

	oper operator-=(oper obj){
		var1 -= obj.var1;
		var2 -= obj.var2;
		return *this;
	}

	oper operator*=(oper obj){
		var1 *= obj.var1;
		var2 *= obj.var2;
		return *this;
	}

	oper operator/=(oper obj){
		var1 /= obj.var1;
		var2 /= obj.var2;
		return *this; 
	}

	oper operator()(int i, int j){
		var1 = i;
		var2 = j;
		return *this;
	}

	oper operator,(oper obj){
		oper temp;
		temp.var1 = obj.var1;
		temp.var2 = obj.var2;
		return temp;
	}
};

void VarSum(int var){
	cout<<"Input : "<<var<<"\n";
	int temp = var;
	int total = 0;
	while(temp > 0){
		int temp2 = temp % 10;
		total += temp2;
		temp /= 10;
	}

	cout<<"Total : "<<total;
}

void Reverse(int var){
	cout<<"\n\nInput : "<<var<<"\n";
	int temp = var;
	int newVar = 0;
	while(temp > 0){
		int temp2 = temp % 10;
		newVar += temp2;
		temp /= 10;
		if(temp > 0) newVar *= 10;
	}

	cout<<"Reverse : "<<newVar;
}

void memory(){
	int* memAlloc;
	memAlloc = (int*)malloc(sizeof(memAlloc));

	*memAlloc = 45;

	cout<<"memAlloc : "<<*memAlloc;
	cout<<"\nmemAlloc size : "<<sizeof(memAlloc);
	free(memAlloc);
}

class mag{
	float real;
	float imag;

public:	
	mag(float r, float i) : real(r), imag(i){}

	float getMag() { return CalcMag(); }
	operator float() { return CalcMag(); }

private:
	float CalcMag(){ return sqrt((real * real) + (imag * imag)); }
};

void main(){
	int q = 75;
	int *p = &q;
	test(*p);

	q = 65;
	test(*p);
/*
	char a = 'S';
	int b = (int) a;

	test2(&a, sizeof(char));
	test2(&b, sizeof(int));

	//cout<<"\n\n***********************";
	//cout<<"\n\na = "<<a<<", b = "<<b;

	cout<<"\n";

	oper o1(3, 12);
	oper o2(20, 30);
	oper o3(10, 85);

	o1.show(true);
	o2.show();
	o3.show();

	o1 += o3 ;
	o1.show(true);*/

	//VarSum(898989);
	//Reverse(741258963);

	//memory();

	mag _msg(3.0f, 4.0f);

	int  a[5] = { 0, 1, 2, 3, 4 };
	int  i, j, m ;
	
	i = a[1];
	j = a[1]++;
	m = a[i++];
	printf ( "\n%d %d %d", i, j, m ) ;

	_getch();
}