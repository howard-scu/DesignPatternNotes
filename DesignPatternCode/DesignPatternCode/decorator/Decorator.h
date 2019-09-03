#ifndef Decorator_h
#define Decorator_h

#include <iostream>
using namespace std;

class Component
{
public:
	virtual ~Component();
	virtual void Operation();

protected:
	Component();
};

class ConcreteComponent :public Component
{
public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operation();
};

class Decorator :public Component
{
public:
	Decorator(Component* com);
	virtual ~Decorator();
	void Operation();

protected:
	Component * _com;
};

class ConcreteDecorator :public Decorator
{
public:
	ConcreteDecorator(Component* com);
	~ConcreteDecorator();
	void Operation();
	void AddedBehavior();
};
#endif // !Decorator_h