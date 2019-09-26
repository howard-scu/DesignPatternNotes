#include "Element.h"
#include "Visitor.h"

#include <iostream>
using namespace std;

Element::Element()
{
}

Element::~Element()
{
}

void Element::Accept(Visitor* vis)
{
}

ConcreteElementA::ConcreteElementA()
{
}

ConcreteElementA::~ConcreteElementA()
{
}

void ConcreteElementA::Accept(Visitor* vis)
{
	cout << "ConcreteElementA::Accept(Visitor* vis)" << endl;
	vis->VisitConcreteElementA(this);
}

ConcreteElementB::ConcreteElementB()
{
}

ConcreteElementB::~ConcreteElementB()
{
}

void ConcreteElementB::Accept(Visitor* vis)
{
	cout << "ConcreteElementB::Accept(Visitor* vis)" << endl;
	vis->VisitConcreteElementB(this);
}
