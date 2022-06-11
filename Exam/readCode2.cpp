#include <iostream>
using namespace std;

int divid(int x, int y) {
	if (y == 0)
		throw y;
	return x / y;
}

int main() {
	try {
		cout << "5/3=" << divid(5, 3) << endl;
		cout << "8/0=" << divid(8, 0) << endl;
		cout << "7/2=" << divid(7, 2) << endl;
	} catch (int e) {
		cout << "Exception: divided by " << e << endl;
	}
	cout << "That's ok." << endl;

	return 0;

}
