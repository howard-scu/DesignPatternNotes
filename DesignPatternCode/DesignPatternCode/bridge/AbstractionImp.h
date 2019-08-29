#ifndef AbstractionImp_h
#define AbstractionImp_h

#include "Abstraction.h"

class AbstractionImp
{
public:

	virtual ~AbstractionImp()
	{

	}
	virtual void Operation() = 0
	{
		cout << "AbstractionImp::Operation()" << endl;
	}

protected:
	AbstractionImp()
	{

	}
};

#endif // !AbstractionImp_h