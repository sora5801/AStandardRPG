#pragma once
//This is going to be one of the biggest challenge.
//How am I going to implement a turn-based battle system?
#include "mage.h"
#include "priest.h"
#include "warrior.h"
#include "ranger.h"
#include "Monster.h"
class Battle {
public:
	void EngageBattle(mage& m, priest& p, warrior& w, ranger& r, Monster& M) {
		while (M.getHealth() > 0) { //While the monster is still alive, 
			M.setDamage(5);
			char c;
			//if (m.isAlive()) {
			//	cout << "What should the mage do?" << endl;
			//	cout << "Press 'f' to cast fireball." << endl;
			//	cout << "Press 'l' to cast lightning." << endl;
			//	cin >> c;
			//	if (c == 'f') {
			//		cout << "The mage casted fireball!" << endl; // exclamation point to make things seem more exciting
			//		m.castFireBall(M);
			//		cout << "It dealt " << m.getDamageDealt() << " damage to the monster!" << endl;
			//	}
			//	else if (c == 'l') {
			//		cout << "The mage casted lightning!" << endl;
			//		m.castLightning(M);
			//		cout << "It dealt " << m.getDamageDealt() << " damage to the monster!" << endl;
			//	}
			//	else
			//		cout << "Invalid choice. You have lose your turn." << endl;
			//}
			if (w.isAlive()) {
				cout << "The warrior swings his weapon!" << endl;
				w.swingWeapon(M);
				cout << "It dealt " << w.getDamageDealt() << " damage to the monster!" << endl;
			}
			if (M.getHealth() > 0) {
				cout << "The monster attacks!" << endl;
				M.chooseTarget();
				if (M.getTarget() == 1) {
					cout << "It deals " << M.getDamage() << " damage to the mage!" << endl;
					m.setHealth(m.getHealth() - M.getDamage());
				}
				if (M.getTarget() == 2) {
					cout << "It deals " << M.getDamage() << " damage to the priest!" << endl;
					p.setHealth(p.getHealth() - M.getDamage());
				}
				if (M.getTarget() == 3) {
					cout << "It deals " << M.getDamage() << " damage to the warrior!" << endl;
					w.setHealth(w.getHealth() - M.getDamage());
				}
				if (M.getTarget() == 4) {
					cout << "It deals " << M.getDamage() << " damage to the ranger!" << endl;
					r.setHealth(r.getHealth() - M.getDamage());
				}

			}
			if (M.getHealth() <= 0) {
				cout << "The monster is dead!" << endl;
				break;
			}
		}
	}
};