#pragma once
class Observer
{
public:
	virtual void notify();
};

class ConcreteObserverA : public Observer 
{
	void notify() override;
};
class ConcreteObserverB : public Observer 
{
	void notify() override;
};