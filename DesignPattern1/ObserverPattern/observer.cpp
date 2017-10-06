#pragma once
#include <iostream>
#include "observer.h"

void Observer::notify()
{
	std::cout << "notified" << std::endl;
}

void ConcreteObserverA::notify()
{
	std::cout << "notified concreteA" << std::endl;
}

void ConcreteObserverB::notify()
{
	std::cout << "notified concreteB" << std::endl;
}