#ifndef AProduct_h
#define AProduct_h

#include <iostream>
using namespace std;

class AbstractProductA
{
public:
	virtual ~AbstractProductA() {}

protected:
	AbstractProductA() {}
};

class AbstractProductB
{
public:
	virtual ~AbstractProductB() {}

protected:
	AbstractProductB() {}
};

class ProductA1 :public AbstractProductA
{
public:
	ProductA1()
	{
		cout << "ProductA1::ProductA1()" << endl;
	}
	~ProductA1() {}
};

class ProductA2 :public AbstractProductA
{
public:
	ProductA2()
	{
		cout << "ProductA2::ProductA2()" << endl;
	}
	~ProductA2() {}
};

class ProductB1 :public AbstractProductB
{
public:
	ProductB1() 
	{
		cout << "ProductB1::ProductB1()" << endl;
	}

	~ProductB1() {}
};

class ProductB2 :public AbstractProductB
{
public:
	ProductB2() 
	{
		cout << "ProductB2::ProductB2()" << endl;
	}
	~ProductB2() {}
};

#endif // !AProduct_h
