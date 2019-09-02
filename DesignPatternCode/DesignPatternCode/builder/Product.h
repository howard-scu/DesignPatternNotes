#ifndef BProduct_h
#define BProduct_h
#include <iostream>

using namespace std;

class Product
{
public:
	Product()
	{
		ProducePart();
		cout << "return a product" << endl;
	}
	~Product() {}
	void ProducePart()
	{
		cout << "build part of product.." << endl;
	}
};


class ProductPart
{
public:
	ProductPart() {}
	~ProductPart() {}
	ProductPart* BuildPart()
	{
		return new ProductPart;
	}
};

#endif // !BProduct_h
