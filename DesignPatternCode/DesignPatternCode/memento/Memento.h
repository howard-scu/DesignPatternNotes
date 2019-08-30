#ifndef Mememto_h
#define Mememto_h

#include <iostream>
#include <string>

using namespace std;

typedef string State;

class Memento
{
private:
	friend class Originator;
	Memento();
	Memento(const State& sdt);
	~Memento();
	void	SetState(const State& sdt);
	State	GetState();

	State _sdt;
};

#endif // !Mememto_h
