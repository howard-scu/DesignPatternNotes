//Visitor.cpp
#include "Visitor.h"
#include "Element.h"
#include <iostream>
using namespace std;

Visitor::Visitor()
{
}

Visitor::~Visitor()
{
}

ConcreteVisitorA::ConcreteVisitorA()
{
}

ConcreteVisitorA::~ConcreteVisitorA()
{
}

void ConcreteVisitorA::VisitConcreteElementA(Element* elm)
{
	cout << "ConcreteVisitorA::VisitConcreteElementA(Element* elm)" << endl;
}

void ConcreteVisitorA::VisitConcreteElementB(Element* elm)
{
	cout << "ConcreteVisitorA::VisitConcreteElementB(Element* elm)" << endl;
}

ConcreteVisitorB::ConcreteVisitorB()
{
}

ConcreteVisitorB::~ConcreteVisitorB()
{
}

void ConcreteVisitorB::VisitConcreteElementA(Element* elm)
{
	cout << "ConcreteVisitorB::VisitConcreteElementA(Element* elm)" << endl;
}

void ConcreteVisitorB::VisitConcreteElementB(Element* elm)
{
	cout << "ConcreteVisitorB::VisitConcreteElementB(Element* elm)" << endl;
}