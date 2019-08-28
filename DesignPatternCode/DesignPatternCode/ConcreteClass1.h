#ifndef ConcreteClass1_h
#define ConcreteClass1_h

#include "AbstractClass.h"

class ConcreteClass1 : public AbstractClass
{
public:
	ConcreteClass1() {}
	~ConcreteClass1() {}

protected:
	void PrimitiveOperation1()
	{
		cout << "ConcreteClass1::PrimitiveOperation1()" << endl;
	}

	void PrimitiveOperation2()
	{
		cout << "ConcreteClass1::PrimitiveOperation2()" << endl;
	}
};

#endif // !ConcreteClass1_h
