#include "operator.h"

Operators::Operators()
{
	cout << "a operator has been created" << endl;
}

Operators::~Operators()
{
	cout << "a operator has been released" << endl;
}

template<typename T>
inline void Operators::show(T x)
{
	cout << x << endl;
}
