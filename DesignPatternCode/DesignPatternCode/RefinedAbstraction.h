#ifndef RefinedAbstraction_h
#define RefinedAbstraction_h

#include "Abstraction.h"
#include "AbstractionImp.h"

class RefinedAbstraction : public Abstraction
{
public:
	RefinedAbstraction(AbstractionImp* imp)
	{
		_imp = imp;
	}
	~RefinedAbstraction()
	{
		cout << "RefinedAbstraction::~RefinedAbstraction()" << endl;
	}
	void Operation()
	{
		_imp->Operation();
	}
private:
	AbstractionImp * _imp;
};

#endif // !RefinedAbstraction_h
