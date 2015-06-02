using namespace std;

#include "Character.h"	// Add your netid to the #include

int main() {

	// TAKE CODE STARTING FROM HERE AND PUT IN ONLOAD FOR GUI
	int arrAbil[6] = {1,2,3,4,5,6};
	int arrMod[6] = {0,1,0,1,0,1};
	int arrDef[4] = {10,20,30,40};
	int arrSkill[17] = {17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	int arrPass[2] = {5,6};
	
	vector <string> vecItem;
	vecItem.push_back("A funny hat");
	vecItem.push_back("A pet rock");
	vecItem.push_back("The Philosopher's Stone");

	vector <string> vecLang;
	vecLang.push_back("Common");
	vecLang.push_back("Dwarven");

	vector <string> vecResis;
	vecResis.push_back("10 Fire");
	vecResis.push_back("10 Poison");

	Character testChar("Bob", arrAbil, arrMod, arrDef, 50, 8, 5, 1, arrSkill, arrPass, 6, "Dwarf", "Mage", 500, vecItem, "Low-light", vecLang, vecResis, "A character we made to test");
	
	// STOP TAKING CODE HERE

	// TESTING ATTRIBUTES
	std::cout << testChar.charName << endl;
	for(int i = 0; i < 6; i++)
		std::cout << testChar.abilityScoreArray[i] << endl;
	std::cout << endl;
	for(int i = 0; i < 6; i++)
		std::cout << testChar.abilityModArray[i] << endl;
	std:cout << endl;
	for(int i = 0; i < 4; i++)
		std::cout << testChar.defensesArray[i] << endl;
	std::cout << endl;
	std::cout << testChar.originalHP << endl;
	std::cout << testChar.currentHP << endl;
	std::cout << testChar.originalSurges << endl;
	std::cout << testChar.currentSurges << endl;
	std::cout << testChar.initiative<< endl;
	std::cout << testChar.originalActionPoints<< endl;
	std::cout << testChar.currentActionPoints<< endl << endl;
	for(int i = 0; i < 17; i++)
		std::cout << testChar.skills[i] << endl;
	std::cout << endl;
	std::cout << testChar.passives[0] << endl;
	std::cout << testChar.passives[1] << endl << endl;

	std::cout << testChar.speed << endl;
	std::cout << testChar.race << endl;
	std::cout << testChar.classStr << endl;
	std::cout << testChar.gold << endl;

	for(int i = 0; i < testChar.items.size(); i++)
		std::cout << testChar.items.at(i) << endl;
	std::cout << endl;

	std::cout << testChar.vision << endl;

	for(int i = 0; i < testChar.languages.size(); i++)
		std::cout << testChar.languages.at(i) << endl;
	std::cout << endl;

	cout << testChar.characterNotes << endl;
	cout << testChar.secondWindUsed << endl;
	cout << testChar.surgeValue << endl << endl << endl;

	//TESTING FUNCTIONS
	std::cout <<  "TESTING FUNCS" << endl;
	std::cout << testChar.currentActionPoints<< endl;
	testChar.useActionPoint();
	std::cout << testChar.currentActionPoints<< endl << endl;

	std::cout << testChar.secondWindUsed<< endl;
	testChar.useSecondWind();
	std::cout << testChar.secondWindUsed<< endl;



	system("pause");
}