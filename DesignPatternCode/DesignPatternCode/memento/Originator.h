#ifndef Originator_h
#define Originator_h

#include <iostream>
#include <string>

using namespace std;

class Memento;

typedef string State;

class Originator
{
public:
	Originator();
	Originator(const State& sdt);
	~Originator();
	
	Memento*	CreateMemento();
	void		SetMemento(Memento* men);
	void		RestoreToMemento(Memento* men);
	State		GetState();
	void		SetState(const State& sdt);
	void		PrintState();

private:
	Memento*	_mt;
	State		_sdt;

};

#endif // ! Originator_h
