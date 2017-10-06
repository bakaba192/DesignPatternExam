#include "Publisher.h"

void Publisher::addObserver(Observer * observer)
{
	std::cout << "¸â¹ö Ãß°¡" << std::endl;
	observers.push_back(observer);
}

void Publisher::removeObserver(Observer * observer)
{
	std::vector<Observer*>::iterator to_remove;
	for (to_remove = observers.begin(); to_remove != observers.end(); ++to_remove)
	{
		if (*to_remove == observer)
		{
			std::cout << "¸â¹ö »èÁ¦" << std::endl;
			observers.erase(to_remove);
			break;
		}
	}
}

void Publisher::notifyObserver()
{
	for (auto at : observers)
	{
		if (at != nullptr)
		{
			at->notify();
		}
	}
}
