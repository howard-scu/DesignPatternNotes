#ifndef ConcreteStrategyA_h
#define ConcreteStrategyA_h

#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
	ConcreteStrategyA() { cout << "ConcreteStrategyA::ConcreteStrategyA()" << endl; }
	~ConcreteStrategyA() { cout << "ConcreteStrategyA::~ConcreteStrategyA()" << endl; }

	void AlgorithmInterface()
	{
		cout << "ConcreteStrategyA::AlgorithmInterface()" << endl;
	}
};

#endif // ! ConcreteStrategyA_h
