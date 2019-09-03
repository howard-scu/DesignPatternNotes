#ifndef Component_h
#define Component_h

class Component
{
public:
	Component() {}
	virtual ~Component() {}

public:
	virtual void Operation() = 0;
	virtual void Add(const Component&) {}
	virtual void Remove(const Component&) {}
	virtual Component* GetChild(int) { return nullptr; }
};

#endif //~Component_h