#include<iostream>
#include<list>
using namespace std;

//���� �߻�Ŭ����(�������̽�)�� �ش��ϴ� ������
class Observer
{
public :
	void update(string title, string news);

};
//���� �߻�Ŭ����(�������̽�)�� �ش��ϴ� �ۺ���
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
			if (&(*iter) == &observer)//�������� ����Ű��
			{
				observers->erase(iter);//�����
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