#include "Character.h"


Character::Character(string cn, int asa[6], int ama[6], int def[4], int hp, int sur, int init, int ap, int ski[17], int pass[2], int spee, string ra, string cla, int gd, string ite, string vis, vector<string> lang, vector<string> resis, string cNotes, string equi[12] , vector<vector<string> > abil)
{
	charName = cn;
	for(int i=0; i<6; i++){
		abilityScoreArray[i] = asa[i];
		abilityModArray[i] = ama[i];
	}
	for(int i=0; i<4; i++){
		defensesArray[i] = def[i];
	}
	originalHP = hp;
	currentHP = hp;
	originalSurges = sur;
	currentSurges = sur;
	initiative = init;
	originalActionPoints = ap;
	currentActionPoints = ap;
	for(int i=0; i<17; i++){
		skills[i] = ski[i];
	}
	passives[0] = pass[0];
	passives[1] = pass[1];
	speed = spee;
	race = ra;
	classStr = cla;
	gold = gd;
	items = ite;
	vision = vis;
	for(int i = 0; i < lang.size(); i++)
		languages.push_back(lang[i]);
	for(int i = 0; i < resis.size(); i++)
		resistances.push_back(resis[i]);
	characterNotes = cNotes;
	secondWindUsed = false;
	surgeValue = (int)(originalHP/4);
	for(int i = 0; i < 12; i++)
		equipment[i] = equi[i];

	for(int i = 0; i < abil.size(); i++){
		vector<string> temp;
		for(int j = 0; j < 12; j++){
			temp.push_back(abil.at(i)[j]);
		}
		abilities.push_back(temp);
	}
}

Character::Character()
{
	charName = "";
	for (int i = 0; i<6; i++){
		abilityScoreArray[i] = 0;
		abilityModArray[i] = 0;
	}
	for (int i = 0; i<4; i++){
		defensesArray[i] = 0;
	}
	originalHP = 0;
	currentHP = 0;
	originalSurges = 2;
	currentSurges = 2;
	initiative = 0;
	originalActionPoints = 0;
	currentActionPoints = 0;
	for (int i = 0; i<17; i++){
		skills[i] = 0;
	}
	passives[0] = 0;
	passives[1] = 0;
	speed = 0;
	race = "";
	classStr = "";
	gold = 0;
	items = "";
	vision = "";

	
	secondWindUsed = false;
	surgeValue = (int)(originalHP / 4);
		
	
}

void Character::useActionPoint(){
	if(currentActionPoints > 0)
		currentActionPoints--;
}
void Character::useSecondWind(){
	secondWindUsed = true;
	useHealingSurge();
}
void Character::useHealingSurge(){
	currentHP = currentHP + surgeValue;
	if (currentHP > originalHP){
		currentHP = originalHP;
	}
	currentSurges--;
}
void Character::increaseHealth(){
	currentHP++;
	if (currentHP > originalHP)
		currentHP = originalHP;
}
void Character::decreaseHealth(){
	currentHP--;
}
void Character::newDay(){
	currentHP = originalHP;
	currentSurges = originalSurges;
	currentActionPoints = originalActionPoints;
	secondWindUsed = false;
}
void Character::shortRest(){
	secondWindUsed = false;
	/// Gives encounters back
}
void Character::increaseGold(){
	gold++;
}
void Character::decreaseGold(){
	gold--;
}

void Character::addActionPoint(){
	currentActionPoints++;
}