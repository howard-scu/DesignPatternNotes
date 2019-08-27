#ifndef Product_h
#define Product_h

#include <iostream>
using namespace std;

class Product
{
public:
	virtual ~Product() = 0
	{
		cout << "Product::~Product()" << endl;
	};

protected:
	Product()
	{
		cout << "Product::Product()" << endl;
	}
};

#endif // !Product_h
