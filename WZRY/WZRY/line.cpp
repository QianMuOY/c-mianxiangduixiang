#include "line.h"

Line::Line(hero h1, hero h2, Soldier s1, Soldier s2):
	h1(h1),h2(h2),s2(s2),s1(s1)
{
	hero::setHeroNum(hero::getHeroNum() - 2);
	Soldier::setSoldierNum(Soldier::getSoldierNum() - 2);
	cout << "a Line has been created" << endl;
}

Line::Line(Line& l)
{
	this->h1 = l.h1;
	this->h2 = l.h2;
	this->s1 = l.s1;
	this->s2 = l.s2;
	hero::setHeroNum(hero::getHeroNum() - 2);
	Soldier::setSoldierNum(Soldier::getSoldierNum() - 2);
	cout << "a Line has been copied" << endl;
}

Line::~Line()
{
	cout << "a Line has been released" << endl;
}

void Line::duixian(hero& h1, hero& h2)
{
	try {
		if (h1.getGrade() > h2.getGrade()) throw 1;
		else if (h1.getGrade() == h2.getGrade()) throw 0;
		else if (h1.getGrade() < h2.getGrade()) throw -1;
		cout << "here" << endl;
	}
	catch (int i) {
		if (i == 1) cout << "youshi" << endl;
		else if (i == 0) cout << "junshi" << endl;
		else if (i == -1) cout << "lieshi" << endl;
	}
	catch (...) { cout << "unknown error!"<<endl; }
	cout << "end try" << endl;
	
}

void Line::budao(hero &h)
{
	cout << h.getName() << " killed a soldier" << endl;
	h++;
	Soldier::setSoldierNum(Soldier::getSoldierNum() - 1);
}
