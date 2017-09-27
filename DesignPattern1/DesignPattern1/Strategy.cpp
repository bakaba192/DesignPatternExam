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
		cout << "�ܰ˰���" << endl;
	}
};

class Sword : public Weapon
{

public:
	void attack() override
	{
		cout << "��˰���" << endl;
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
			cout << "�Ǽհ���" << endl;
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
	//�Ǽհ���
	hero->attack();

	//�ܰ����
	hero->setWeapon(new Dager);
	hero->attack();

	//������
	hero->setWeapon(new Sword);
	hero->attack();

	return;
}