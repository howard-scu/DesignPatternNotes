#ifndef Factory_h
#define Factory_h

#include <iostream>
using namespace std;

#include "Product.h"

class Factory
{
public:
	virtual ~Factory() = 0
	{
		cout << "Factory::~Factory()" << endl;
	};
	virtual Product* CreateProduct() = 0;

protected:
	Factory()
	{
		cout << "Factory::Factory()" << endl;
	}
};
#endif // !Factory_h
