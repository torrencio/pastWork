#pragma once
#include <string>
#include <vector>
using namespace std;

class Character
{
public:
	Character();
	void useActionPoint();
	void useSecondWind();
	void useHealingSurge();
	void increaseHealth();
	void decreaseHealth();
	void newDay();
	void newEncounter();
	void endTurn();
	void increaseGold();
	void decreaseGold();
	void increaseSilver();
	void decreaseSilver();
	void increaseCopper();
	void decreaseCopper();
	void increasePlatinum();
	void decreasePlatinum();
	void addEquipment();
	void useAttack();

	//accessors
	vector<string> getEquipment();
	vector<string> getDetails();

private:
	int originalHP;
	int currentHP;
	int originalActionPoints;
	int gold;
	int actionPoints;
	string items;
	int copper;
	int silver;
	int platinum;
	vector<string> equipment;
	vector<vector<int>> abilities;
	int originalHealthSurges;
	int currentHealthSurges;
	int ac;
	int fort;
	int ref;
	int will;
	int initiative;
	int speed;
	int passiveInsight;
	int passivePerception;
	string specialSenses;
	string languages;
	string resistances;
	int skills[17];
	vector<string> equipment_details;
	string characterNotes;
};

