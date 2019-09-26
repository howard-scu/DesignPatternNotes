#include "Handle.h"
#include <iostream>
using namespace std;

Handle::Handle()
{
	_succ = 0;
}

Handle::~Handle()
{
	delete _succ;
}

Handle::Handle(Handle* succ)
{
	this->_succ = succ;
}

void Handle::SetSuccessor(Handle* succ)
{
	_succ = succ;
}

Handle* Handle::GetSuccessor()
{
	return _succ;
}

void Handle::HandleRequest()
{
}

ConcreteHandleA::ConcreteHandleA()
{
}

ConcreteHandleA::ConcreteHandleA(Handle* succ) :Handle(succ)
{
}

ConcreteHandleA::~ConcreteHandleA()
{
}

void ConcreteHandleA::HandleRequest()
{
	if (this->GetSuccessor() != 0)
	{
		cout << "ConcreteHandleA has successor" << endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		cout << "ConcreteHandleA do not have successor" << endl;
	}
}

ConcreteHandleB::ConcreteHandleB()
{
}

ConcreteHandleB::ConcreteHandleB(Handle* succ) :Handle(succ)
{
}

ConcreteHandleB::~ConcreteHandleB()
{
}

void ConcreteHandleB::HandleRequest()
{
	if (this->GetSuccessor() != 0)
	{
		cout << "ConcreteHandleB has successor" << endl;
		this->GetSuccessor()->HandleRequest();
	}
	else
	{
		cout << "ConcreteHandleB do not have successor" << endl;
	}
}