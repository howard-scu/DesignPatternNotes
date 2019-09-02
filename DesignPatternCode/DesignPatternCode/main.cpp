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


#include "memento/Memento.h"
#include "memento/Originator.h"

void test_memento()
{
	Originator* o = new Originator();
	o->SetState("old"); //����ǰ״̬
	o->PrintState();

	Memento* m = o->CreateMemento(); //��״̬����
	o->SetState("new"); //�޸�״̬
	o->PrintState();
	o->RestoreToMemento(m); //�ָ��޸�ǰ״̬
	o->PrintState();
}

#include "abstract factory/AbstractFactory.h"
#include "abstract factory/Product.h"

void test_abstract_factory()
{
	AbstractFactory* factory1 = new ConcreteFactory1();
	AbstractFactory* factory2 = new ConcreteFactory2();

	factory1->CreateProductA();
	factory1->CreateProductB();

	factory2->CreateProductA();
	factory2->CreateProductB();
}

#include "singleton/Singleton.h"

void test_singleton()
{
	Singleton* ps1 = Singleton::Instance();
	Singleton* ps2 = Singleton::Instance();
}

#else


void main()
{
	system("pause");
}

#endif // TEST




