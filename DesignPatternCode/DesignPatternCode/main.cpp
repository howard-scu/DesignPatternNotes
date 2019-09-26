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
	o->SetState("old"); //±¸ÍüÇ°×´Ì¬
	o->PrintState();

	Memento* m = o->CreateMemento(); //½«×´Ì¬±¸Íü
	o->SetState("new"); //ÐÞ¸Ä×´Ì¬
	o->PrintState();
	o->RestoreToMemento(m); //»Ö¸´ÐÞ¸ÄÇ°×´Ì¬
	o->PrintState();
}



#include "singleton/Singleton.h"

void test_singleton()
{
	Singleton* ps1 = Singleton::Instance();
	Singleton* ps2 = Singleton::Instance();
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


#include "builder\Builder.h"
#include "builder\Product.h"
#include "builder\Director.h"

void test_builder()
{
	Director* d = new Director(new ConcreteBuilder());
	d->Construct();
}

#include "prototype/Prototype.h"

void test_prototype()
{
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();
}


#include "adapter\Adapter.h"

void test_adapter()
{
#ifndef COMPOSITE
	Target* adt = new Adapter();
	adt->Request();
#else
	Adaptee* ade = new Adaptee;
	Target* adt = new Adapter(ade);
	adt->Request();
#endif // !COMPOSITE
}


#include "decorator/Decorator.h"

void test_decorator()
{
	Component* component = new ConcreteComponent();
	Decorator* decorator = new ConcreteDecorator(component);
	decorator->Operation();
	component->Operation();
}


#include "composite/Component.h"
#include "composite/Composite.h"
#include "composite/Leaf.h"

void test_composite()
{
	Leaf* l = new Leaf();
	l->Operation();
	Composite* com = new Composite();
	com->Add(l);
	com->Operation();
	Component* ll = com->GetChild(0);
	ll->Operation();
}


#include "mediator/Colleage.h"
#include "mediator/Mediator.h"

void test_mediator()
{
	ConcreteMediator* m = new ConcreteMediator();
	ConcreteColleageA* c1 = new ConcreteColleageA(m);
	ConcreteColleageB* c2 = new ConcreteColleageB(m);
	m->IntroColleage(c1, c2);
	c1->SetState("old");
	c2->SetState("old");
	c1->Aciton();
	c2->Aciton();

	c1->SetState("new");
	c1->Aciton();
	c2->Aciton();

	c2->SetState("old");
	c2->Aciton();
	c1->Aciton();
}

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
	o->SetState("old"); //±¸ÍüÇ°×´Ì¬
	o->PrintState();

	Memento* m = o->CreateMemento(); //½«×´Ì¬±¸Íü
	o->SetState("new"); //ÐÞ¸Ä×´Ì¬
	o->PrintState();
	o->RestoreToMemento(m); //»Ö¸´ÐÞ¸ÄÇ°×´Ì¬
	o->PrintState();
}



#include "singleton/Singleton.h"

void test_singleton()
{
	Singleton* ps1 = Singleton::Instance();
	Singleton* ps2 = Singleton::Instance();
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


#include "builder\Builder.h"
#include "builder\Product.h"
#include "builder\Director.h"

void test_builder()
{
	Director* d = new Director(new ConcreteBuilder());
	d->Construct();
}

#include "prototype/Prototype.h"

void test_prototype()
{
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();
}


#include "adapter\Adapter.h"

void test_adapter()
{
#ifndef COMPOSITE
	Target* adt = new Adapter();
	adt->Request();
#else
	Adaptee* ade = new Adaptee;
	Target* adt = new Adapter(ade);
	adt->Request();
#endif // !COMPOSITE
}


#include "decorator/Decorator.h"

void test_decorator()
{
	Component* component = new ConcreteComponent();
	Decorator* decorator = new ConcreteDecorator(component);
	decorator->Operation();
	component->Operation();
}


#include "composite/Component.h"
#include "composite/Composite.h"
#include "composite/Leaf.h"

void test_composite()
{
	Leaf* l = new Leaf();
	l->Operation();
	Composite* com = new Composite();
	com->Add(l);
	com->Operation();
	Component* ll = com->GetChild(0);
	ll->Operation();
}

#include "mediator/Colleage.h"
#include "mediator/Mediator.h"

void test_mediator()
{
	ConcreteMediator* m = new ConcreteMediator();
	ConcreteColleageA* c1 = new ConcreteColleageA(m);
	ConcreteColleageB* c2 = new ConcreteColleageB(m);
	m->IntroColleage(c1, c2);
	c1->SetState("old");
	c2->SetState("old");
	c1->Aciton();
	c2->Aciton();

	c1->SetState("new");
	c1->Aciton();
	c2->Aciton();

	c2->SetState("old");
	c2->Aciton();
	c1->Aciton();
}


#include "command/Command.h"
#include "command/Reciever.h"
#include "command/Invoker.h"

void test_command_1()
{
	Reciever* rev = new Reciever();
	Command* cmd = new	SimpleCommand<Reciever>(rev, &Reciever::Action);
	cmd->Excute();
}

void test_command_2()
{
	Reciever* rev = new Reciever();
	Command* cmd = new ConcreteCommand(rev);
	Invoker* inv = new Invoker(cmd);
	inv->Invoke();
}

#else


#include "visitor/Element.h"
#include "visitor/Visitor.h"

void test_visitor()
{
	Visitor* vis = new ConcreteVisitorA();
	Element* elm = new ConcreteElementA();
	elm->Accept(vis);
}


#include <iostream> 
using namespace std;

void main()
{
	test_visitor();
	system("pause");
}

#endif // TEST
