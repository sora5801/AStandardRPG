#pragma once
#include <string>
//Need to avoid circular dependencies

class Potion {
public:
	std::string name;
	int Healthrecover;
	int Manarecover;
	Potion() { Healthrecover = 5; }
	Potion(std::string, int, int);
	void setManaRecover(int m) { Manarecover = m; }
	void setHealthRecover(int h) { Healthrecover = h; }
	int getManaRecover() { return Manarecover; }
	int getHealthRecover() { return Healthrecover; }
	bool operator==(const Potion &p) const { //Needed to make Potion a key option for unordered_map
		if (p.Healthrecover == this->Healthrecover && p.Manarecover == this->Manarecover && p.name == this->name)
			return true;
		return false;
	}
};
//The following struct is needed to make Potion a key option for unordered_map
struct KeyHasher
{
	std::size_t operator()(const Potion& p) const
	{
		using std::size_t;
		using std::hash;
		using std::string;

		return ((hash<string>()(p.name)
			^ (hash<int>()(p.Healthrecover) << 1)) >> 1)
			^ (hash<int>()(p.Manarecover) << 1);
	}
};

