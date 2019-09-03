#ifndef Adapter_h
#define Adapter_h

#define COMPOSITE 

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
};

#ifndef COMPOSITE
// 继承方式
class Adapter :public Target, private Adaptee
{
public:
	Adapter();
	~Adapter();
	void Request();
};

#else
// 组合方式
class Adapter :public Target
{
public:
	Adapter(Adaptee* ade);
	~Adapter();
	void Request();
private:
	Adaptee * _ade;
};

#endif // COMPOSITE

#endif //~Adapter_h