#ifndef Product_h
#define Product_h

#include <iostream>
using namespace std;

class AbstractProductA
{
public:
	virtual ~AbstractProductA();

protected:
	AbstractProductA();
};

class AbstractProductB
{
public:
	virtual ~AbstractProductB();

protected:
	AbstractProductB();
};

class ProductA1 :public AbstractProductA
{
public:
	ProductA1();
	~ProductA1();
};

class ProductA2 :public AbstractProductA
{
public:
	ProductA2();
	~ProductA2();
};

class ProductB1 :public AbstractProductB
{
public:
	ProductB1();
	~ProductB1();
};

class ProductB2 :public AbstractProductB
{
public:
	ProductB2();
	~ProductB2();
};
#endif // !Product_h
