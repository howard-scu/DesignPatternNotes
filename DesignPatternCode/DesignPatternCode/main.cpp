#include "ConcreteFactory.h"
#include "Product.h"

void test_factory()
{
	Factory* factory = new ConcreteFactory();
	Product* product = factory->CreateProduct();
	delete factory;
	delete product;
}

#include "Abstraction.h"
#include "AbstractionImp.h"
#include "ConcreteAbstractionImpA.h"
#include "RefinedAbstraction.h"

#include <iostream>
using namespace std;

void test_bridge()
{
	AbstractionImp* imp = new ConcreteAbstractionImpA();
	Abstraction* abs = new RefinedAbstraction(imp);
	abs->Operation();
}

void main()
{
	test_bridge();
	system("pause");
}