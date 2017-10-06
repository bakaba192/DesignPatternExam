#include <iostream>
#include "Publisher.h"


void main()
{
	ConcreteObserverA* ob1 = new ConcreteObserverA;
	ConcreteObserverB* ob2 = new ConcreteObserverB;

	Publisher* PP = new Publisher;

	PP->addObserver(ob1);
	PP->addObserver(ob2);

	PP->notifyObserver();

	PP->removeObserver(ob2);

	PP->notifyObserver();

}