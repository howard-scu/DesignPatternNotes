#include "Originator.h"
#include "Memento.h"

Originator::Originator()
{
	_sdt = "";
	_mt = 0;
}

Originator::Originator(const State& sdt) :_sdt(sdt)
{
}

Originator::~Originator()
{
}

Memento* Originator::CreateMemento()
{
	return new Memento(_sdt);
}

State Originator::GetState()
{
	return _sdt;
}
void Originator::SetState(const State& sdt)
{
	_sdt = sdt;
}
void Originator::PrintState()
{
	cout << "State : " << this->_sdt << endl;
}
void Originator::SetMemento(Memento* men)
{
}
void Originator::RestoreToMemento(Memento* mt)
{
	this->_sdt = mt->GetState();
}