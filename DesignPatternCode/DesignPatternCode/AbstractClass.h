#ifndef AbstractClass_h
#define AbstractClass_h
#include <iostream>
using namespace std;

class AbstractClass
{
public:
	virtual	~AbstractClass() {}
	void TemplateMethod()
	{
		this->PrimitiveOperation1();
		this->PrimitiveOperation2();
	}

protected:
	AbstractClass() {}
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

#endif // !AbstractClass_h
