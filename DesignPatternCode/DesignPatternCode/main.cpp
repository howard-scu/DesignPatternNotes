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

#include "AbstractClass.h"
#include "ConcreteClass1.h"
#include "ConcreteClass2.h"

void test_template()
{
	AbstractClass* p1 = new ConcreteClass1();
	p1->TemplateMethod();

	AbstractClass* p2 = new ConcreteClass2();
	p2->TemplateMethod();
}

void main()
{
	test_template();
	system("pause");
}
