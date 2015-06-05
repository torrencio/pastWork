#include "Character.h"


Character::Character(string cn, int asa[6], int ama[6], int def[4], int hp, int sur, int init, int ap, int ski[17], int pass[2], int spee, string ra, string cla, int gd, vector<string> ite, string vis, vector<string> lang, vector<string> resis, string cNotes)
{
	charName = cn;
	for (int i = 0; i<6; i++){
		abilityScoreArray[i] = asa[i];
		abilityModArray[i] = ama[i];
	}
	for (int i = 0; i<4; i++){
		defensesArray[i] = def[i];
	}
	originalHP = hp;
	currentHP = hp;
	originalSurges = sur;
	currentSurges = sur;
	initiative = init;
	originalActionPoints = ap;
	currentActionPoints = ap;
	for (int i = 0; i<17; i++){
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
	languages = lang;
	resistances = resis;
	characterNotes = cNotes;
	secondWindUsed = false;
	surgeValue = (int)(originalHP / 4);

}


void Character::useActionPoint(){
	if (currentActionPoints > 0)
		currentActionPoints--;
}
void Character::addActionPoint(){
	currentActionPoints++;
}
void Character::useSecondWind(){
	secondWindUsed = true;
	useHealingSurge();
}
void Character::useHealingSurge(){
	currentHP = currentHP + surgeValue;
	if (currentHP > originalHP)
		currentHP = originalHP;
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


Character::Character()
{
	// fill equipment vector
	equipment.push_back("head equipment!");
	equipment.push_back("neck equipment");
	equipment.push_back("arm equipment");
	equipment.push_back("ring equipment");
	equipment.push_back("hand equipment");
	equipment.push_back("main hand equipment");
	equipment.push_back("off hand equipment");
	equipment.push_back("waist equipment");
	equipment.push_back("armour equipment");
	equipment.push_back("feet equipment");
	equipment.push_back("tattoo equipment");
	equipment.push_back("ki_focus equipment");

	// fill equipment details vector
	equipment_details.push_back("this is the head equipment");
	equipment_details.push_back("this is the neck equipment");
	equipment_details.push_back("this is the arm equipment");
	equipment_details.push_back("this is the ring equipment");
	equipment_details.push_back("this is the hand equipment");
	equipment_details.push_back("this is the main hand equipment");
	equipment_details.push_back("this is the off hand equipment");
	equipment_details.push_back("this is the waist equipment");
	equipment_details.push_back("this is the armour equipment");
	equipment_details.push_back("this is the feet equipment");
	equipment_details.push_back("this is the tattoo equipment");
	equipment_details.push_back("this is the ki_focus equipment");

}
vector<string> Character::getEquipment(){
	return equipment;
}
vector<string> Character::getDetails(){
	return equipment_details;
}
