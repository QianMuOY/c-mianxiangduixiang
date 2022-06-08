#include "soldier.h"

Soldier::Soldier(int b, int a, int d) :Object(b, a, d)
{
	soldier_num++;
	cout << "a solider has been created" << endl;
}

Soldier::Soldier(Soldier& s):Object(s.getBlood(),s.getAttack(),s.getDefence())
{
	soldier_num++;
}

void Soldier::magic_1()
{
	cout << "soldier attack" << endl;
}

void Soldier::magic_2()
{
	cout << "soldier attack" << endl;
}

void Soldier::magic_3()
{
	cout << "soldier attack" << endl;
}

void Soldier::update()
{
	cout << "soldiers can not be updated" << endl;
}

void Soldier::show()
{
	cout << "------------" << endl;
	cout << "a soldier" << endl;
	cout << "attack:" << this->getAttack() << endl;
	cout << "blood:" << this->getBlood() << endl;
	cout << "defence:" << this->getDefence() << endl;
	cout << "there are" << this->soldier_num << " soldiers" << endl;
	cout << "------------" << endl;
}

void Soldier::setSoldierNum(int n)
{
	soldier_num = n;
}

int Soldier::getSoldierNum()
{
	return soldier_num;
}

Soldier::~Soldier()
{
	soldier_num--;
	cout << "a soldier has been released" << endl;
}

int Soldier::soldier_num = 0;
