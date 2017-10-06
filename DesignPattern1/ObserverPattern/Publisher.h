#pragma once
#include "observer.h"
#include <vector>
#include <iostream>

class Publisher
{
private:
	std::vector<Observer*> observers;

public:
	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);
	void notifyObserver();
};

