#pragma once
#ifndef __OBJECT_H__
#define __OBJECT_H__
class Object
{
public:
	Object(int b=0, int a=0, int d=0);
	~Object();
	int getBlood()const;
	int getAttack()const;
	int getDefence()const;
	void setBlood(int b);
	void setAttack(int a);
	void setDefence(int d);
private:
	int blood;
	int attack;
	int defence;
};
#endif // !__OBJECT_H__
