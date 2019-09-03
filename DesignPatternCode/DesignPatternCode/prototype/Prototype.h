#ifndef Prototype_h
#define Prototype_h
#include <iostream>

using namespace std;

class Prototype
{
public:
	virtual ~Prototype();
	virtual Prototype* Clone() const = 0;

protected:
	Prototype();
};

class ConcretePrototype :public Prototype
{
public:
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype& cp);
	~ConcretePrototype();
	Prototype* Clone() const;
};

#endif //~Prototype_h