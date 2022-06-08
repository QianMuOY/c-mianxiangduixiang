#include"object.h"
#include<iostream>
using namespace std;
Object::Object(int b, int a, int d) :blood(b), attack(a), defence(d)
{
	cout << "a object has been created" << endl;
}

Object::~Object()
{
	cout << "a object has been release" << endl;
}

int Object::getBlood()const
{
	return blood;
}

int Object::getAttack()const
{
	return attack;
}

int Object::getDefence()const
{
	return defence;
}

void Object::setBlood(int b)
{
	this->blood = b;
}

void Object::setAttack(int a)
{
	this->attack = a;
}

void Object::setDefence(int d)
{
	this->defence = d;
}


