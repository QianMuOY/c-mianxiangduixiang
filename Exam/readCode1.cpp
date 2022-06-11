#include <iostream>
using namespace std;

class A {
	public:
		A() {
			cout << "A" << endl;
		}
		~A() {
			cout << "~A" << endl;
		}
};

class B {
	public:
		B() {
			f();
			cout << "B" << endl;
		}
		virtual void f() {
			cout << "B::f" << endl;
		}
		virtual ~B() {
			cout << "~B" << endl;
		}
};

class D: public B {
	public:
		D() {
			cout << "D" << endl;
		}
		void f() {
			cout << "D::f" << endl;
		}
		virtual ~D() {
			cout << "~D" << endl;
		}
	private:
		A a;
};

int main() {
	B *pB = new D;
	pB->f();
	delete pB;
	return 0;
}
