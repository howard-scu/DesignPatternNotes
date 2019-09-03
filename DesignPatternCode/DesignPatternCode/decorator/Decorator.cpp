#include "Decorator.h"

ConcreteComponent::ConcreteComponent()
{
}

ConcreteComponent::~ConcreteComponent()
{
}

void ConcreteComponent::Operation()
{
	std::cout << "ConcreteComponent::Operation()" << std::endl;
}

Decorator::Decorator(Component* com)
{
	this->_com = com;
}

Decorator::~Decorator()
{
	delete _com;
}

void Decorator::Operation()
{
}

ConcreteDecorator::ConcreteDecorator(Component*com) : Decorator(com)
{
}

ConcreteDecorator::~ConcreteDecorator()
{
}

void ConcreteDecorator::AddedBehavior()
{
	std::cout << "ConcreteDecorator::AddedBehavior()" << std::endl;
}

void ConcreteDecorator::Operation()
{
	_com->Operation();
	this->AddedBehavior();
}