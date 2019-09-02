#ifndef Singleton_h
#define Singleton_h

#include <iostream>
using namespace std;

class Singleton
{
public:
	static Singleton* Instance();

protected:
	Singleton();

private:
	static Singleton* _instance;
};

#endif // !Singleton_h
