#ifndef ConcreteFactory_h
#define ConcreteFactory_h

#include "Factory.h"
#include "ConcreteProduct.h"

class ConcreteFactory : public Factory
{
public:
	~ConcreteFactory()
	{
		cout << "ConcreteFactory::~ConcreteFactory()" << endl;
	}

	ConcreteFactory()
	{
		cout << "ConcreteFactory::ConcreteFactory()" << endl;
	}

	Product* CreateProduct()
	{
		cout << "ConcreteFactory::CreateProduct()" << endl;
		return new ConcreteProduct();
	}
};
#endif // !ConcreteFactory_h
