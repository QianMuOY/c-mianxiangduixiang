#include "hero.h"
#include<iostream>

hero::hero(int b, int a, int d, int p, string n, string m1, string m2, string m3, string q, int g):
	price(p),name(n),quality(q),grade(g),Object(b, a, d)
{
	cout << "a hero has been created" << endl;
	magic_names[0] = m1;
	magic_names[1] = m2;
	magic_names[2] = m3;
	hero_num++;
}


hero::hero(hero& h)
{
	hero_num++;
	cout << "a hero has been copied" << endl;
	// this.blood = h.blood;
	setBlood(h.getBlood());
	setAttack(h.getAttack());
	setDefence(h.getDefence());
	this->price = h.price;
	this->name = h.name;
	this->quality = h.quality;
	this->grade = h.grade;
	this->magic_names = new string[4];
	for (int i = 0; i < 3; i++)
	{
		this->magic_names[i] = h.magic_names[i];
	}
}

hero::~hero()
{
	cout << "a hero has been released" << endl;
	delete[] magic_names;
	magic_names = NULL;
	hero_num--;
}

	void hero::show()
{
	cout << "------------" << endl;
	cout <<"name:" << this->name << endl;
	cout << "attack:" << this->getAttack() << endl;
	cout << "blood:" << this->getBlood() << endl;
	cout << "defence:" << this->getDefence() << endl;
	cout << "grade:" << this->grade << endl;
	cout << "price:" << this->price << endl;
	cout << "quality:" << this->quality << endl;
	cout << "there are " << this->hero_num << " heros" << endl;
	cout << "------------" << endl;
}

	int hero::getGrade()
	{
		return this->grade;
	}

	string hero::getName()
	{
		return this->name;
	}



void hero::magic_1()
{
	cout << "hero " << this->name << "is using the first magic " << this->magic_names[0] << endl;
}

void hero::magic_2()
{
	cout << "hero " << this->name << "is using the second magic " << this->magic_names[1] << endl;
}

void hero::magic_3()
{
	cout << "hero " << this->name << "is using the third magic " << this->magic_names[2] << endl;
}

void hero::update()
{
	this->grade += 1;
}
hero& hero::operator+(int g)
{
	this->grade += g;
	return *this;
}

hero& hero::operator++()
{
	this->grade+=1;
	return*this;
}

hero hero::operator++(int)
{
	hero temp(*this);
	this->grade += 1;
	return temp;
}

void hero::setHeroNum(int n)
{
	hero_num = n;
}

int hero::getHeroNum()
{
	return hero_num;
}


ostream& operator<<(ostream& out, const hero& h)
{
	out << "------------" << endl
		<< "name:" << h.name << endl
		<< "attack:" << h.getAttack() << endl
		<< "blood:" << h.getBlood() << endl
		<< "defence:" << h.getDefence() << endl
		<< "grade:" << h.grade << endl
		<< "price:" << h.price << endl
		<< "quality:" << h.quality << endl
		<< "there are" << h.hero_num << " heros" << endl
		<< "------------" << endl;
	return out;
}

int hero::hero_num = 0;

