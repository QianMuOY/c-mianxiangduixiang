#include <stdio.h>
const double PI = 3.14159265358979323846;

class Shape {
	public:
		virtual double getArea() = 0;
};

class Circle: public virtual Shape {
	public:
		Circle(double r = 1.0): raidus(r) {

		}
		virtual double getArea() {
			return PI * raidus * raidus;
		}
	private:
		double raidus;
};

class Rectangle: public virtual Shape {
	public:
		Rectangle(double w = 1.0, double h = 1.0): width(w), heigth(h) {

		}
		virtual double getArea() {
			return width * heigth;
		}
	private:
		double width, heigth;
};

int main() {
	Shape *c1 = new Circle();
	Shape *t1 = new Rectangle();
	double area1 = c1 -> getArea();
	double area2 = t1 -> getArea();
	printf("%f\r\n", area1);
	printf("%f\r\n", area2);
	return 0;

}