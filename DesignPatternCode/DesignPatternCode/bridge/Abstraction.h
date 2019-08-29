#ifndef Abstraction_h
#define Abstraction_h

#include <iostream>
using namespace std;

class Abstraction
{
public:
	virtual ~Abstraction()
	{
		cout << "Abstraction::~Abstraction()" << endl;
	}

	virtual void Operation() = 0;

protected:
	Abstraction()
	{
		cout << "Abstraction::Abstraction()" << endl;
	}
};

#endif // !Abstraction_h
