#include <stdio.h>

class Monster {
	public:
		Monster(int h = 100, int d = 2, int defense = 1): hitpoint(h), damage(d), defense(defense) {

		}
		virtual void attack(Monster &m) {
			hitpoint -= m.damage - defense;
			if (hitpoint == 0)
				hitpoint = 0;
		}
		bool fight(Monster &m) {
			while (true) {
				attack(m);
				m.attack(*this);
				if (m.hitpoint <= 0) {
					return true;
				}
				if (hitpoint <= 0) {
					return false;
				}
			}
		}
	private:
		int hitpoint;
		int damage;
		int defense;
};

int main() {
	Monster m1;
	Monster m2(1000, 100, 100);
	bool flag = m1.fight(m2);
	printf("%d", flag);
}