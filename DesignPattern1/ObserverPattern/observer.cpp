#include<iostream>
#include<list>
using namespace std;

//순수 추상클래스(인터페이스)에 해당하는 옵저버
class Observer
{
public :
	void update(string title, string news);

};
//순수 추상클래스(인터페이스)에 해당하는 퍼블리셔
class Publisher
{
public :
	virtual void add(Observer observer);
	virtual void del(Observer observer);
	virtual void notifyObserver();
};

class ConcretePublisher : public Publisher
{
private:
	list<Observer>* observers;
	string title;
	string news;

public:
	ConcretePublisher()
	{
		observers = new list<Observer>();
	}

	void add(Observer observer) override
	{
		observers->push_back(observer);
	}

	void del(Observer observer) override
	{
		list<Observer>::iterator iter;
		for (iter = observers->begin(); iter != observers->end(); ++iter)
		{
			if (&(*iter) == &observer)//같은곳을 가리키면
			{
				observers->erase(iter);//지우기
			}
		}
	}

	void notifyObserver() override
	{
		for (auto i = observers->begin(); i != observers->end(); ++i)
		{
			i->update(title, news);
		}
	}

	string getTitle() { return title; }
	string getNews() { return news; }
};

class ConcreteObserver : public Observer
{

};

void main()
{
	Observer


}