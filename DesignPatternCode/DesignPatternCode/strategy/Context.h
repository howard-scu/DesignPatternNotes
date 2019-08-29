#ifndef Context_h
#define Context_h

#include "Strategy.h"

class Context
{
public:
	Context(Strategy* stg) :_stg(stg) { cout << "Context::Context(Strategy* stg)" << endl; }
	~Context() { cout << "~Context::Context()" << endl; }

	void DoAction()
	{
		_stg->AlgorithmInterface();
	}
private:
	Strategy * _stg;
};

#endif // ! Context_h