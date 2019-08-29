#ifndef Strategy_h
#define Strategy_h

#include <iostream>
using namespace std;

class Strategy
{
public:
	Strategy() { cout << "Strategy::Strategy()" << endl; }
	virtual ~Strategy() { cout << "Strategy::~Strategy()" << endl; }

	virtual void AlgorithmInterface() = 0
	{
		cout << "Strategy::AlgorithmInterface()" << endl;
	}
};


#endif // ! Strategy_h
