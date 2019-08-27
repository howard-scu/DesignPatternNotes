#include "ConcreteFactory.h"
#include "Product.h"

void test()
{
	Factory* factory = new ConcreteFactory();
	Product* product = factory->CreateProduct();
	delete factory;
	delete product;
}

void main()
{
	test();

	system("pause");
}