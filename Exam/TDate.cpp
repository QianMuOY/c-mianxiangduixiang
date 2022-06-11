#include <iostream>
#include <stdio.h>
using namespace std;

class TDate {
	public:
		TDate() {
			month = 6;
			day = 11;
			year = 2022;
		}
		TDate(int m, int d = 11, int y = 2022): month(m), day(d), year(y) {

		}
		friend void show(TDate &date);
		void setDay(int d) {
			this->day = d;
		}
	private:
		int month, day, year;

};

void show(TDate &date) {
	printf("month: %d\r\n", date.month);
	printf("day: %d\r\n", date.day);
	printf("year: %d\r\n", date.year);
}

int main() {
	TDate d1;
	TDate d2(6, 11, 2023);
	d1.setDay(10);
	show(d1);
	show(d2);
	return 0;
}