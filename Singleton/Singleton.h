#include <iostream>
#include <conio.h>

using namespace std;

class Singleton
{
private:
    static bool			m_bInstance;
    static Singleton	*m_singleton;
	int					m_iNumber;

						Singleton();

public:
    static Singleton*	getInstance();
    void				method();

	void				setValue(int _number);
	int					getValue();

						~Singleton();
};