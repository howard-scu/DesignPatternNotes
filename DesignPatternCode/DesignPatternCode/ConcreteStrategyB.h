#ifndef ConcreteStrategyB_h
#define ConcreteStrategyB_h
#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
	ConcreteStrategyB() { cout << "ConcreteStrategyA::ConcreteStrategyB()" << endl; }
	~ConcreteStrategyB() { cout << "ConcreteStrategyA::~ConcreteStrategyB()" << endl; }

	void AlgorithmInterface()
	{
		cout << "ConcreteStrategyB::AlgorithmInterface()" << endl;
	}
};

#endif // ! ConcreteStrategyB_h