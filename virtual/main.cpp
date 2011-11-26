#include "virtual.h"
#include <map>
#include <list>

void main()
{
	//Parent* parent = new Parent();
	Child* child = new Child();
	Child* child_2 = new Child();
	Child* child_3 = new Child();

	Child2* child2 = new Child2();
	Child2* child2_2 = new Child2();
	Child2* child2_3 = new Child2();

	map<int, Parent*> parentList;
	list<Parent*> parentList2;

	//parent->Update();
	//child->Update();

	cout<<"\n\nMAP";
	//map
	int i = 0;
	parentList[i] = child;
	parentList[++i] = child_2;
	parentList[++i] = child_3;

	parentList[++i] = child2;
	parentList[++i] = child2_2;
	parentList[++i] = child2_3; 

	//while(true)
	for(int j = 0; j <= i; j++)
		parentList[j]->Update();

	cout<<"\n\nLIST";
	//list
	parentList2.push_back(child);
	parentList2.push_back(child_2);
	parentList2.push_back(child_3);
	
	parentList2.push_back(child2);
	parentList2.push_back(child2_2);
	parentList2.push_back(child2_3);

	for(list<Parent*>::iterator iter = parentList2.begin(); iter != parentList2.end(); iter++)
		(*iter)->Update();

	_getch();
}