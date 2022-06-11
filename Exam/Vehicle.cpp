#include <stdio.h>

class Vehicle {
	public:
		virtual void run() = 0;
		virtual void stop() = 0;
};

class Bicycle: virtual public Vehicle {
	public:
		Bicycle(float r = 1.0): radius(r) {

		}
		virtual void run() {
			printf("%s\r\n", "bicycle run");
		}
		virtual void stop() {
			printf("%s\r\n", "bicycle stop");
		}
	private:
		float radius;
};

class Motocar: virtual public Vehicle {
	public:
		Motocar(float d = 10.0): displacement(d) {

		}
		virtual void run() {
			printf("%s\r\n", "Motocar run");
		}
		virtual void stop() {
			printf("%s\r\n", "Motocar stop");
		}
	private:
		float displacement;
};

int main() {
	Vehicle *v1 = new Bicycle();
	Vehicle *v2 = new Motocar();
	v1->run();
	v2->run();

}




