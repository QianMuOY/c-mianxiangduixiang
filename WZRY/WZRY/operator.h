#pragma once
#include<iostream>
using namespace std;
#ifndef __OPERATOR_H__
#define __OPERATOR_H__
class Operators
{
public:
	Operators();
	~Operators();
	virtual void magic_1() = 0;
	virtual void magic_2() = 0;
	virtual void magic_3() = 0;
	virtual void update() = 0;
	template<typename T>
	void show(T x);
private:

};
#endif // !__OPERATOR_H__


