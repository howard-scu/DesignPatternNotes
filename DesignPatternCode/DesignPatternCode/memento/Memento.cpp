#include "Memento.h"

Memento::Memento()
{
}

Memento::Memento(const State & sdt):_sdt(sdt)
{
}

Memento::~Memento()
{
}

State Memento::GetState()
{
	return _sdt;
}

void Memento::SetState(const State& sdt)
{
	_sdt = sdt;
}