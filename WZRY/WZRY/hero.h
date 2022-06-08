
#ifndef __HERO_H__
#define __HERO_H__
#include <string>
#include"object.h"
#include"operator.h"
using namespace std;
class hero:public Object, virtual public Operators
{
public:
	hero(int b=0, int a=0, int d=0, int p=18888, string n="unknown", string m1="unknown", string m2="unknown", string m3 = "unknown", string q = "unknown", int g=1);
	hero(hero& h);
	~hero();
	void show();
	int getGrade();
	string getName();
	virtual void magic_1();
	virtual void magic_2();
	virtual void magic_3();
	virtual void update();
	friend ostream& operator<<(ostream& out, const hero& h);
	hero& operator+(int g);
	hero& operator++();
	hero operator++(int);
	static void setHeroNum(int n);
	static int getHeroNum();
private:
	int price;
	int grade;
	string name;
	string* magic_names = new string[4];
	string quality;
	static int hero_num;
};
#endif // !__HERO_H__

