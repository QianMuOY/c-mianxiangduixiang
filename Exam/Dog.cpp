#include <stdio.h>

class Dog {
	public:
		Dog() {
			age = 0;
			weight = 10;
		}
		Dog(int a, int w = 10): age(a), weight(w) {

		}
		friend void printDogInfo(Dog &dog);
		void setAge(int a) {
			this->age = a;
		}
	private:
		int age, weight;
};

void printDogInfo(Dog &dog) {
	printf("age: %d\r\n", dog.age);
	printf("weight: %d\r\n", dog.weight);
}

int main() {
	Dog d1;
	Dog d2(5, 30);
	d1.setAge(2);
	printDogInfo(d1);
	printDogInfo(d2);
}