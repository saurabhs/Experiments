#include "Singleton.h"

bool Singleton::m_bInstance = false;
Singleton* Singleton::m_singleton = NULL;

Singleton::Singleton()
{
	m_iNumber = 10;
}

Singleton::~Singleton()
{
	m_singleton = NULL;
	m_bInstance = false;
}

Singleton* Singleton::getInstance()
{
    if(! m_bInstance)
    {
        m_singleton = new Singleton();
        m_bInstance = true;

        return m_singleton;
    }
    else
    {
        return m_singleton;
    }
}

void Singleton::method()
{
    printf("Method of the singleton class");
}

void Singleton::setValue(int _number)
{
	m_iNumber = _number;
}

int Singleton::getValue()
{
	return m_iNumber;
}

int main()
{
    Singleton *sc1,*sc2;

    sc1 = Singleton::getInstance();
    //sc1->method();
	printf("number sc1 before : %d\n", sc1->getValue());
	sc1->setValue(99);
	printf("number sc1 after : %d\n", sc1->getValue());
    
	sc2 = Singleton::getInstance();
	sc2->setValue(45);
    //sc2->method();
	printf("number sc2 : %d\n", sc2->getValue());

	//sc1->method();
	printf("number sc1 : %d\n", sc1->getValue());

    _getch();
}