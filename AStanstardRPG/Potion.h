#pragma once
//Need to avoid circular dependencies
class Potion {
	int Healthrecover;
	int Manarecover;
public:
	Potion() { Healthrecover = 5; }
	void setManaRecover(int m) { Manarecover = m; }
	void setHealthRecover(int h) { Healthrecover = h; }
	int getManaRecover() { return Manarecover; }
	int getHealthRecover() { return Healthrecover; }
};

