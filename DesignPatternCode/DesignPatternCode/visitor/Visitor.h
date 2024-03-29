#ifndef _VISITOR_H_
#define _VISITOR_H_

class ConcreteElementA;
class ConcreteElementB;
class Element;

class Visitor
{
public:
	virtual ~Visitor();
	virtual void VisitConcreteElementA(Element* elm) = 0;
	virtual void VisitConcreteElementB(Element* elm) = 0;

protected:
	Visitor();
};

class ConcreteVisitorA :public Visitor
{
public:
	ConcreteVisitorA();
	virtual ~ConcreteVisitorA();
	virtual void VisitConcreteElementA(Element* elm);
	virtual void VisitConcreteElementB(Element* elm);
};

class ConcreteVisitorB :public Visitor
{
public:
	ConcreteVisitorB();
	virtual ~ConcreteVisitorB();
	virtual void VisitConcreteElementA(Element* elm);
	virtual void VisitConcreteElementB(Element* elm);
};
#endif //~_VISITOR_H