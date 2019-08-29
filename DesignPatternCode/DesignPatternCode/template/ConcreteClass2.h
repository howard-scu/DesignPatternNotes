#ifndef ConcreteClass2_h
#define ConcreteClass2_h

#include "AbstractClass.h"

class ConcreteClass2 : public AbstractClass
{
public:
	ConcreteClass2() {}
	~ConcreteClass2() {}

protected:
	void PrimitiveOperation1()
	{
		cout << "ConcreteClass2::PrimitiveOperation1()" << endl;
	}

	void PrimitiveOperation2()
	{
		cout << "ConcreteClass2::PrimitiveOperation2()" << endl;
	}
};
#endif // !ConcreteClass2_h