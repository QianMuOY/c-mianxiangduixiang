#include<windows.h>
#include<vector>
#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>
#include"hero.h"
#include"object.h"
#include"operator.h"
#include"soldier.h"
#include "line.h"
using namespace std;
vector<string> actors;
enum heroPrice
{
	OLD=8888,
	NEW1=13888,
	NEW2=18888
};

int main()
{
	hero zf(500,500,800,NEW1,"zhangfei","HDWL","SHJG","KSXX","fuzhu",1);
	actors.push_back(zf.getName());
	zf + 1;
	// zf.show();
	// zf.show(123);
	Operators* p = &zf;
	p->magic_1();
	zf.magic_2();
	cout << zf;
	zf++;
	++zf;
	cout << zf;
	Soldier REDjinzhanbingx10(10, 5, 20);
	actors.push_back("REDjinzhanbingx10");
	Soldier BLUEjinzhanbingx10(REDjinzhanbingx10);
	actors.push_back("BLUEjinzhanbingx10");
	Soldier::setSoldierNum(20);
	cout <<setw(10)<< "soldiers:" << Soldier::getSoldierNum() << endl;
	hero gy(500, 800, 500, NEW2, "guanyu", "DDFH", "QLYY", "DFTJ","shangdan");
	actors.push_back(gy.getName());
	Line top(zf, gy, REDjinzhanbingx10, BLUEjinzhanbingx10);
	actors.push_back("LineTop");
	top.budao(zf);
	cout<<"soldiers:"<<Soldier::getSoldierNum()<<endl;
	top.duixian(zf, gy);
	ofstream fout;
	fout.open("actors.txt", ios_base::out);
	for (vector<string>::iterator iter = actors.begin(); iter != actors.end(); iter++)
	{
		fout << *iter << endl;
		cout << "here is: " << fout.tellp()<<endl;
		// fout.seekp(100);
	}
	// tellg,seekg,tellp,seekp
	fout.close();
	ifstream fin("actors.txt");
	string s;
	while (getline(fin,s))
	{
		cout << "----getline----" << endl;
		cout << s << endl;
	}
	
}