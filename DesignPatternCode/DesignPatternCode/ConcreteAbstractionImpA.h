#ifndef ConcreteAbstractionImpA_h
#define ConcreteAbstractionImpA_h

#include "AbstractionImp.h"

class ConcreteAbstractionImpA :public AbstractionImp
{
public:
	ConcreteAbstractionImpA()
	{

	}
	~ConcreteAbstractionImpA()
	{

	}
	virtual void Operation()
	{
		cout << "ConcreteAbstractionImpA::Operation()" << endl;
	}
};

#endif // !ConcreteAbstractionImpA_h