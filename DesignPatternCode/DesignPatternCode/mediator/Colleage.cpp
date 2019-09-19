#include "Mediator.h"
#include "Colleage.h"

#include <iostream>
using namespace std;

Colleage::Colleage()
{
	cout << "Colleage::Colleage()" << endl;
}

Colleage::Colleage(Mediator* mdt)
{
	cout << "Colleage::Colleage(Mediator* mdt)" << endl;
	this->_mdt = mdt;
}

Colleage::~Colleage() 
{
}

ConcreteColleageA::ConcreteColleageA()
{
	cout << "ConcreteColleageA::ConcreteColleageA()" << endl;
}

ConcreteColleageA::~ConcreteColleageA()
{
}

ConcreteColleageA::ConcreteColleageA(Mediator* mdt) :Colleage(mdt)
{
	cout << "ConcreteColleageA::ConcreteColleageA(Mediator* mdt)" << endl;
}

string ConcreteColleageA::GetState()
{
	return _sdt;
}

void ConcreteColleageA::SetState(const string& sdt)
{
	_sdt = sdt;
}

void ConcreteColleageA::Aciton()
{
	_mdt->DoActionFromAtoB();
	cout << "State of ConcreteColleageA : " << this->GetState().c_str() << endl;
}

ConcreteColleageB::ConcreteColleageB()
{
	cout << "ConcreteColleageB::ConcreteColleageB()" << endl;
}

ConcreteColleageB::~ConcreteColleageB()
{
}

ConcreteColleageB::ConcreteColleageB(Mediator* mdt) :Colleage(mdt)
{
	cout << "ConcreteColleageB::ConcreteColleageB(Mediator* mdt)" << endl;
}

void ConcreteColleageB::Aciton()
{
	_mdt->DoActionFromBtoA();
	cout << "State of ConcreteColleageB : " << this->GetState().c_str() << endl;
}

string ConcreteColleageB::GetState()
{
	return _sdt;
}

void ConcreteColleageB::SetState(const string& sdt)
{
	_sdt = sdt;
}