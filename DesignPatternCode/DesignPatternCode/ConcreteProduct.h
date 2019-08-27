#ifndef ConcreteProduct_h
#define ConcreteProduct_h

#include "Product.h"

class ConcreteProduct : public Product
{
public:
	ConcreteProduct()
	{
		cout << "ConcreteProduct::ConcreteProduct()" << endl;
	}

	~ConcreteProduct()
	{
		cout << "ConcreteProduct::~ConcreteProduct()" << endl;
	}
};

#endif // !ConcreteProduct_h
