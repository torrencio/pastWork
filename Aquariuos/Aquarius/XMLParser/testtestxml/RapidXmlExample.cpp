#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "rapidxml-1.13/rapidxml.hpp"
#include <istream>
using namespace rapidxml;
using namespace std;
int main(void) 

{
	string charName;
	int abilityScoreArray[6];
	int abilityModArray[6];
	int defensesArray[4];
	int hp;
	int numSurges;
	int initiative;
	int actionPoints;
	int tempSkillsArray[17];
	int skillsArray[17];
	int skillCount(0);
	int passives[2]; // perception then insight
	int speed;
	string race;
	string classStr;
	
	xml_document<> doc;
	xml_node<> * root_node;
	xml_node<> * char_root_node;
	// Read the xml file into a vector
	ifstream theFile ("Helja.xml");
	vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	// Parse the buffer using the xml file parsing library into doc
	doc.parse<0>(&buffer[0]);
	// Find our root node
	root_node = doc.first_node("D20Character");
	char_root_node = root_node->first_node("CharacterSheet");
	//xml_node<> * detail_node = char_root_node->first_node("Details");
	//xml_node<> * name_node = char_root_node->first_node("Details")->first_node("name");
	charName = char_root_node->first_node("Details")->first_node("name")->value();
	xml_node<> * abilScore_node = char_root_node->first_node("StatBlock");

	int count = 0;
	for (xml_node<> * stat_node = abilScore_node->first_node("Stat"); stat_node; stat_node = stat_node->next_sibling())
	{
		string temp = stat_node->first_attribute("value")->value();
		if (count<6)
			abilityScoreArray[count] = atoi(temp.c_str());
		
		else if(count >= 6 && count < 12)
			abilityModArray[count-6] = atoi(temp.c_str());
		else if(count >= 12 && count < 16)
			defensesArray[count-12] = atoi(temp.c_str());
		else if(count == 18)
			hp = atoi(temp.c_str());
		else if(count == 20)
			numSurges = atoi(temp.c_str());
		else if(count == 25)
			initiative = atoi(temp.c_str());
		else if(count == 28)
			actionPoints = atoi(temp.c_str());
		else if(count >= 31 && count < 82 && count%3 == 1){
			tempSkillsArray[skillCount] = atoi(temp.c_str());
			skillCount++;
		}
		else if(count == 82)
			passives[count-82] = atoi(temp.c_str());
		else if(count == 83)
			passives[count-82] = atoi(temp.c_str());
		else if(count == 84)
			speed = atoi(temp.c_str());

		count++;
	}
	xml_node<> * ruleElementTally_node = char_root_node->first_node("RulesElementTally");

	for (xml_node<> * rulesEl_node = ruleElementTally_node->first_node("RulesElement"); rulesEl_node; rulesEl_node = rulesEl_node->next_sibling())
	{
		
		if(strcmp(rulesEl_node->first_attribute("type")->value(),"Race") == 0){
			race = rulesEl_node->first_attribute("name")->value();
		}
		else if(strcmp(rulesEl_node->first_attribute("type")->value(),"CountsAsClass") == 0)
			classStr = rulesEl_node->first_attribute("name")->value();
		
		//std::cout << rulesEl_node->first_attribute("type")->value();
	}
	
	int levelNodeCount(0);
	/*
	for (xml_node<> * level_node = root_node->first_node("Level"); level_node; level_node = level_node->next_sibling())
	{
		
		if(strcmp(rulesEl_node->first_attribute("type")->value(),"Race") == 0){
			race = rulesEl_node->first_attribute("name")->value();
		}

	}
	*/
	
	
	
	
	
	////////////////////
	skillsArray[0] = tempSkillsArray[0];
	skillsArray[1] = tempSkillsArray[1];
	for(int i = 3; i < 17; i++){
		skillsArray[i] = tempSkillsArray[i-1];
	}
	skillsArray[2] = tempSkillsArray[16];
	
	for(int i = 0; i < 6; i++){
		std::cout<<"abil:"<<abilityScoreArray[i]<<endl;
	}

	for(int i = 0; i < 6; i++){
		std::cout<<"mod:"<<abilityModArray[i]<<endl;
	}

	for(int i = 0; i < 4; i++){
		std::cout<<"def:"<<defensesArray[i]<<endl;
	}
	
	std::cout << "hp " << hp << endl;
	std::cout << "surges " << numSurges << endl;
	std::cout << "intiative " <<initiative << endl;
	std::cout << "action points " << actionPoints << endl;
	for(int i = 0; i < 17; i++){
		std::cout<<"skills:"<< i << ": " << skillsArray[i]<<endl;
	}
	std::cout << "passive perp " << passives[0] << endl;
	std::cout << "passive ins " << passives[1] << endl;
	std::cout << "speed " << speed << endl;
	std::cout << "race " << race << endl;
	std::cout << "class " << classStr << endl;
	system("pause");


	/*
std::cout << "Parsing my beer journal..." << endl;
xml_document<> doc;
xml_node<> * char_root_node;
// Read the xml file into a vector
ifstream theFile ("beerJournal.xml");
vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());
buffer.push_back('\0');
// Parse the buffer using the xml file parsing library into doc
doc.parse<0>(&buffer[0]);
// Find our root node
char_root_node = doc.first_node("MyBeerJournal");
// Iterate over the brewerys
for (xml_node<> * brewery_node = char_root_node->first_node("Brewery"); brewery_node; brewery_node = brewery_node->next_sibling())
{
printf("I have visited %s in %s. ",
brewery_node->first_attribute("name")->value(),
brewery_node->first_attribute("location")->value());
// Interate over the beers
for(xml_node<> * beer_node = brewery_node->first_node("Beer"); beer_node; beer_node = beer_node->next_sibling())
{
printf("On %s, I tried their %s which is a %s. ",
beer_node->first_attribute("dateSampled")->value(),
beer_node->first_attribute("name")->value(),
beer_node->first_attribute("description")->value());
printf("I gave it the following review: %s", beer_node->value());
}
std::cout << endl;
system("pause");
}
*/



}