#pragma once
#include"hero.h"
#include"soldier.h"
#include<iostream>
#include<string>
using namespace std;
#ifndef __LINE_H__
#define __LINE_H__

class Line
{
public:
	Line(hero h1, hero h2, Soldier s1, Soldier s2);
	Line(Line &l);       
	~Line();
	void budao(hero& h);
	void duixian(hero& h1, hero& h2);
private:
	hero h1, h2;
	Soldier s1, s2;
};
#endif // !__LINE_H__
