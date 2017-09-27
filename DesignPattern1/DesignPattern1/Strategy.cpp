#include <iostream>

using namespace std;

class Weapon
{
public:
	virtual void attack() {};
};

class Dager : public Weapon
{
public:
	void attack() override
	{
		cout << "단검공격" << endl;
	}
};

class Sword : public Weapon
{

public:
	void attack() override
	{
		cout << "장검공격" << endl;
	}
};

class Character
{
	Weapon* weapon = nullptr;

public:
	void setWeapon(Weapon* wp) { weapon = wp; }

	void attack()
	{
		if (weapon == nullptr)
		{
			cout << "맨손공격" << endl;
		}
		else
		{
			weapon->attack();
		}
	}
};


void main()
{
	Character* hero = new Character;
	//맨손공격
	hero->attack();

	//단검장비
	hero->setWeapon(new Dager);
	hero->attack();

	//장검장비
	hero->setWeapon(new Sword);
	hero->attack();

	return;
}