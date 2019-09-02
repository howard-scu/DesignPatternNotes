#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton* Singleton::_instance = 0;

Singleton::Singleton()
{
	cout << "Singleton::Singleton()" << endl;
}

Singleton* Singleton::Instance()
{
	if (_instance == 0)
	{
		_instance = new Singleton();
	}
	return _instance;
}
