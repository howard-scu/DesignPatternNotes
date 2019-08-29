#ifndef SContext_h
#define SContext_h
class State;

class Context
{
public:
	Context();
	Context(State* state);
	~Context();
	void OprationInterface();
	void OperationChangeState();

private:
	friend class State; //������ State ���п��Է��� Context ��� private �ֶ�
	bool ChangeState(State* state);

private:
	State * _state;
};
#endif // !SContext_h