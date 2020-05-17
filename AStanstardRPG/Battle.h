#pragma once
//This is going to be one of the biggest challenge.
//How am I going to implement a turn-based battle system?
#include "Party.h"
#include "Monster.h"
class Battle {
public:
	//void EngageBattle(mage& m, priest& p, warrior& w, ranger& r, Monster M) {
	//	while (M.getHealth() > 0) { //While the monster is still alive, 
	//		vector<int> vectis;
	//		m.rollforInitiative();
	//		vectis.push_back(m.getInitiative());
	//		p.rollforInitiative();
	//		vectis.push_back(p.getInitiative());
	//		w.rollforInitiative();
	//		vectis.push_back(w.getInitiative());
	//		r.rollforInitiative();
	//		vectis.push_back(r.getInitiative());
	//		M.rollforInitiative();
	//		vectis.push_back(M.getInitiative());
	//		sort(vectis.begin(), vectis.end());
	//		M.setDamage(5);
	//		for (int i = 0; i < vectis.size(); i++) {
	//			if (vectis[i] == m.getInitiative()) {
	//				char c;
	//				if (m.isAlive()) {
	//					cout << "What should the mage do?" << endl;
	//					cout << "Press 'f' to cast fireball." << endl;
	//					cout << "Press 'l' to cast lightning." << endl;
	//					cin >> c;
	//					if (c == 'f') {
	//						cout << "The mage casted fireball!" << endl; // exclamation point to make things seem more exciting
	//						m.castFireBall(M);
	//						cout << "It dealt " << m.getDamageDealt() << " damage to the monster!" << endl;
	//					}
	//					else if (c == 'l') {
	//						cout << "The mage casted lightning!" << endl;
	//						m.castLightning(M);
	//						cout << "It dealt " << m.getDamageDealt() << " damage to the monster!" << endl;
	//					}
	//					else
	//						cout << "Invalid choice. You have lose your turn." << endl;
	//				}
	//			}
	//			if (vectis[i] == w.getInitiative()) {
	//				if (w.isAlive()) {
	//					cout << "The warrior swings his weapon!" << endl;
	//					w.swingWeapon(M);
	//					cout << "It dealt " << w.getDamageDealt() << " damage to the monster!" << endl;
	//				}
	//			}
	//			if (vectis[i] == r.getInitiative()) {
	//				if (r.isAlive()) {
	//					cout << "The ranger shoots her bow!" << endl;
	//					r.shootBow(M);
	//					cout << "It dealt " << r.getDamageDealt() << " damage to the monster!" << endl;
	//				}
	//			}
	//			if (vectis[i] == p.getInitiative()) {
	//				if (p.isAlive()) {
	//					cout << "The priest casts holy light!" << endl;
	//					p.castHolyLight(M);
	//					cout << "It dealt " << p.getDamageDealt() << " damage to the monster!" << endl;
	//				}
	//			}
	//			if(vectis[i] == M.getInitiative()){
	//				if (M.getHealth() > 0) {
	//					cout << "The "<< M.getName() << " attacks!" << endl;
	//					M.chooseTarget();
	//					if (M.getTarget() == 1) {
	//						m.setPhysicalDamageTaken();
	//						cout << "It deals " << M.getDamage() << " damage to the mage!" << endl;
	//						m.setHealth(m.getHealth() - M.getDamage() + m.getPhysicalDamageTaken());
	//					}
	//					if (M.getTarget() == 2) {
	//						p.setPhysicalDamageTaken();
	//						cout << "It deals " << M.getDamage() << " damage to the priest!" << endl;
	//						p.setHealth(p.getHealth() - M.getDamage() + p.getPhysicalDamageTaken());
	//					}
	//					if (M.getTarget() == 3) {
	//						w.setPhysicalDamageTaken();
	//						cout << "It deals " << M.getDamage() << " damage to the warrior!" << endl;
	//						w.setHealth(w.getHealth() - M.getDamage() + w.getPhysicalDamageTaken());
	//					}
	//					if (M.getTarget() == 4) {
	//						r.setPhysicalDamageTaken();
	//						cout << "It deals " << M.getDamage() << " damage to the ranger!" << endl;
	//						r.setHealth(r.getHealth() - M.getDamage() + r.getPhysicalDamageTaken());
	//					}
	//				}
	//			}
	//			if (M.getHealth() <= 0) {
	//				cout << "The " << M.getName() << " is dead!" << endl;
	//				std::random_device rd;  //Will be used to obtain a seed for the random number engine
	//				std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	//				std::uniform_int_distribution<> dis(1, 6);
	//				if (dis(gen) == 6) {
	//					m.addWeapon(M.dropWeaponLoot());
	//					cout << "You received a " << M.dropWeaponLoot().getName() << endl;
	//				}
	//				break;
	//			}
	//		}
	//	}
	//}
	
	void EngageBattle(Party& p, Monster M) {
		while (M.getHealth() > 0) { //While the monster is still alive, 
			vector<int> vectis;
			p.man.rollforInitiative();
			vectis.push_back(p.man.getInitiative());
			p.wan.rollforInitiative();
			vectis.push_back(p.wan.getInitiative());
			p.ran.rollforInitiative();
			vectis.push_back(p.ran.getInitiative());
			p.pan.rollforInitiative();
			vectis.push_back(p.pan.getInitiative());
			M.rollforInitiative();
			vectis.push_back(M.getInitiative());
			sort(vectis.begin(), vectis.end());
			M.setDamage(5);
			for (int i = 0; i < vectis.size(); i++) {
				if (vectis[i] == p.man.getInitiative()) {
					char c;
					if (p.man.isAlive()) {
						cout << "What should the mage do?" << endl;
						cout << "Press 'f' to cast fireball." << endl;
						cout << "Press 'l' to cast lightning." << endl;
						cin >> c;
						if (c == 'f') {
							cout << "The mage casted fireball!" << endl; // exclamation point to make things seem more exciting
							p.man.castFireBall(M);
							cout << "He dealt " << p.man.getDamageDealt() << " damage to the monster!" << endl;
						}
						else if (c == 'l') {
							cout << "The mage casted lightning!" << endl;
							p.man.castLightning(M);
							cout << "He dealt " << p.man.getDamageDealt() << " damage to the monster!" << endl;
						}
						else
							cout << "Invalid choice. You have lost your turn." << endl;
					}
				}
				if (vectis[i] == p.wan.getInitiative()) {
					if (p.wan.isAlive()) {
						cout << "The warrior swings his weapon!" << endl;
						p.wan.swingWeapon(M);
						cout << "He dealt " << p.wan.getDamageDealt() << " damage to the monster!" << endl;
					}
				}
				if (vectis[i] == p.ran.getInitiative()) {
					if (p.ran.isAlive()) {
						cout << "The ranger shoots her bow!" << endl;
						p.ran.shootBow(M);
						cout << "She dealt " << p.ran.getDamageDealt() << " damage to the monster!" << endl;
					}
				}
				if (vectis[i] == p.pan.getInitiative()) {
					if (p.pan.isAlive()) {
						cout << "The priest casts holy light!" << endl;
						p.pan.castHolyLight(M);
						cout << "She dealt " << p.pan.getDamageDealt() << " damage to the monster!" << endl;
					}
				}
				if (vectis[i] == M.getInitiative()) {
					if (M.getHealth() > 0) {
						cout << "The " << M.getName() << " attacks!" << endl;
						M.chooseTarget();
						if (M.getTarget() == 1) {
							p.man.setPhysicalDamageTaken();
							cout << "It deals " << M.getDamage() << " damage to the mage!" << endl;
							p.man.setHealth(p.man.getHealth() - M.getDamage() + p.man.getPhysicalDamageTaken());
						}
						if (M.getTarget() == 2) {
							p.pan.setPhysicalDamageTaken();
							cout << "It deals " << M.getDamage() << " damage to the priest!" << endl;
							p.pan.setHealth(p.pan.getHealth() - M.getDamage() + p.pan.getPhysicalDamageTaken());
						}
						if (M.getTarget() == 3) {
							p.wan.setPhysicalDamageTaken();
							cout << "It deals " << M.getDamage() << " damage to the warrior!" << endl;
							p.wan.setHealth(p.wan.getHealth() - M.getDamage() + p.wan.getPhysicalDamageTaken());
						}
						if (M.getTarget() == 4) {
							p.ran.setPhysicalDamageTaken();
							cout << "It deals " << M.getDamage() << " damage to the ranger!" << endl;
							p.ran.setHealth(p.ran.getHealth() - M.getDamage() + p.ran.getPhysicalDamageTaken());
						}
					}
				}
				if (M.getHealth() <= 0) {
					cout << "The " << M.getName() << " is dead!" << endl;
					std::random_device rd;  //Will be used to obtain a seed for the random number engine
					std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
					std::uniform_int_distribution<> dis(1, 6);
					if (dis(gen) == 6) {
						p.wan.addWeapon(M.dropWeaponLoot());
						cout << "You received a " << M.dropWeaponLoot().getName() << endl;
					}
					break;
				}
				if (p.man.getHealth() == 0 && p.wan.getHealth() == 0 && p.wan.getHealth() == 0 && p.ran.getHealth() == 0)
				{
					std::cout << "The party died!" << std::endl;
				}
			}
		}
	}
};