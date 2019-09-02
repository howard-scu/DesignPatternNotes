#ifndef Director_H_
#define Director_H_

class Builder;

class Director
{
public:
	Director(Builder* bld);
	~Director();
	void Construct();

private:
	Builder * _bld;
};

#endif //~Director_H_