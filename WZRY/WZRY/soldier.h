#pragma once
#include"object.h"
#include"operator.h"
#ifndef __SOLDIER_H__
#define __SOLDIER_H__

class Soldier:public Object,virtual public Operators
{
public:
	Soldier(int b=0, int a=0, int d=0);
	Soldier(Soldier& s);
	virtual void magic_1();
	virtual void magic_2();
	virtual void magic_3();
	virtual void update();
	void show();
	static void setSoldierNum(int n);
	static int getSoldierNum();
	~Soldier();
private:
	static int soldier_num;
};


#endif // !__SOLDIER_H__

