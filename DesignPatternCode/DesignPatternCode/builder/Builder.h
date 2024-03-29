#ifndef Builder_H_
#define Builder_H_

#include <string>

using namespace std;

class Product;

class Builder
{
public:
	virtual ~Builder();
	virtual void BuildPartA(const string& buildPara) = 0;
	virtual void BuildPartB(const string& buildPara) = 0;
	virtual void BuildPartC(const string& buildPara) = 0;
	virtual Product* GetProduct() = 0;

protected:
	Builder();
};

class ConcreteBuilder :public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPartA(const string& buildPara);
	void BuildPartB(const string& buildPara);
	void BuildPartC(const string& buildPara);
	Product* GetProduct();
};
#endif //~Builder_H_