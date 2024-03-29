#ifndef Mediator_h
#define Mediator_h
class Colleage;
class Mediator
{
public:
	virtual ~Mediator();
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;

protected:
	Mediator();
};

class ConcreteMediator :public Mediator
{
public:
	ConcreteMediator();
	ConcreteMediator(Colleage* clgA, Colleage* clgB);
	~ConcreteMediator();
	void SetConcreteColleageA(Colleage* clgA);
	void SetConcreteColleageB(Colleage* clgB);
	Colleage* GetConcreteColleageA();
	Colleage* GetConcreteColleageB();
	void IntroColleage(Colleage* clgA, Colleage* clgB);
	void DoActionFromAtoB();
	void DoActionFromBtoA();

private:
	Colleage*	_clgA;
	Colleage*	_clgB;
};
#endif // !Mediator_h