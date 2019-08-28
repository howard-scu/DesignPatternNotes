#ifndef ConcreteAbstractionImpB_h
#define ConcreteAbstractionImpB_h

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
		cout << "ConcreteAbstractionImpB::Operation()" << endl;
	}
};

#endif // !ConcreteAbstractionImpB_h