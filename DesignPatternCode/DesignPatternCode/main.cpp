#ifdef TEST
#include "factory\ConcreteFactory.h"
#include "factory\Product.h"

void test_factory()
{
	Factory* factory = new ConcreteFactory();
	Product* product = factory->CreateProduct();
	delete factory;
	delete product;
}

#include "bridge\Abstraction.h"
#include "bridge\AbstractionImp.h"
#include "bridge\ConcreteAbstractionImpA.h"
#include "bridge\RefinedAbstraction.h"

#include <iostream>
using namespace std;

void test_bridge()
{
	AbstractionImp* imp = new ConcreteAbstractionImpA();
	Abstraction* abs = new RefinedAbstraction(imp);
	abs->Operation();
}

#include "template\AbstractClass.h"
#include "template\ConcreteClass1.h"
#include "template\ConcreteClass2.h"

void test_template()
{
	AbstractClass* p1 = new ConcreteClass1();
	p1->TemplateMethod();

	AbstractClass* p2 = new ConcreteClass2();
	p2->TemplateMethod();
}

#include "strategy\Strategy.h"
#include "strategy\Context.h"
#include "strategy\ConcreteStrategyA.h"
#include "strategy\ConcreteStrategyB.h"

void test_strategy()
{
	Strategy* ps = new ConcreteStrategyA();
	Context*  pc = new Context(ps);
	pc->DoAction();
	if (NULL != pc)
		delete pc;
}


#include "state\Context.h"
#include "state\State.h"

void test_state()
{
	State* st = new ConcreteStateA();
	Context* con = new Context(st);
	con->OperationChangeState();
	con->OperationChangeState();
	con->OperationChangeState();

	if (con != NULL)
		delete con;
	if (st != NULL)
		st = NULL;
}

#else

#include "observer/Observer.h"
#include "observer/Subject.h"

void test_observer()
{
	ConcreteSubject* sub = new ConcreteSubject();
	
	Observer* o1 = new ConcreteObserverA(sub);
	Observer* o2 = new ConcreteObserverB(sub);
	
	sub->SetState("old");
	sub->Notify();
	
	sub->SetState("new");
	sub->Notify();
}

void main()
{
	test_observer();
	system("pause");
}

#endif // TEST




