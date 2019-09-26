#ifndef _COMMAND_H_
#define _COMMAND_H_

class Reciever;
class Command
{
public:
	virtual ~Command();
	virtual void Excute() = 0;

protected:
	Command();
};




template <class Reciever>
class SimpleCommand :public Command
{
public:
	typedef void (Reciever::* Action)();

	SimpleCommand(Reciever* rev, Action act)
	{
		_rev = rev;
		_act = act;
	}

	virtual void Excute()
	{
		(_rev->*_act)();
	}

	~SimpleCommand()
	{
		delete _rev;
	}

private:
	Reciever * _rev;
	Action		_act;
};


class ConcreteCommand :public Command
{
public:
	ConcreteCommand(Reciever* rev);
	~ConcreteCommand();
	void Excute();

private:
	Reciever * _rev;
};
#endif //~_COMMAND_H