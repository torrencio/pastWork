#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "rapidxml-1.13/rapidxml.hpp"
#include <istream>
#include <array>
#include "XMLParser.h"
using namespace rapidxml;
using namespace std;
 
XMLParser::XMLParser(string fileName)
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
	int goldNum;
	string vision;
	string equipment[12];
	string items;
	vector<array<string, 10> > abilities;
	vector<string> resistances;
	vector<string> languages;

	for (int i = 0; i < 12; i++)
		equipment[i] = " ";
	
	xml_document<> doc;
	xml_node<> * root_node;
	xml_node<> * char_root_node;
	// Read the xml file into a vector
	ifstream theFile (fileName);
	vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	// Parse the buffer using the xml file parsing library into doc
	doc.parse<0>(&buffer[0]);
	// Find our root node
	root_node = doc.first_node("D20Character");
	char_root_node = root_node->first_node("CharacterSheet");
	charName = char_root_node->first_node("Details")->first_node("name")->value();
	
	string goldString = char_root_node->first_node("Details")->first_node("CarriedMoney")->value();
	int lastIndex = goldString.find_last_of(" "); 
	string goldStringRaw = goldString.substr(0, lastIndex); 
	lastIndex = goldStringRaw.find_last_of(" ");
	string goldStringRaw2 = goldStringRaw.substr(0, lastIndex);
	goldNum = atoi(goldStringRaw2.c_str());

	xml_node<> * abilScore_node = char_root_node->first_node("StatBlock");

	int count = 0;
	string tempResis;
	int colPos;
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
		
		tempResis = stat_node->first_node("alias")->first_attribute("name")->value();
		if(tempResis.find("resist:") != std::string::npos) {
			colPos = tempResis.find_last_of(":"); 
			tempResis = tempResis.substr(colPos + 1, tempResis.length() - 1);
			tempResis.append(" ");
			tempResis.append(stat_node->first_attribute("value")->value());
			
			resistances.push_back(tempResis);
		}

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
		else if(strcmp(rulesEl_node->first_attribute("type")->value(),"Vision") == 0)
			vision = rulesEl_node->first_attribute("name")->value();
		else if(strcmp(rulesEl_node->first_attribute("type")->value(),"Language") == 0)
			languages.push_back(rulesEl_node->first_attribute("name")->value());
		
	}
	
	int levelNodeCount(0);
	string tempName;
	string itemSlot = "no";

	xml_node<> * lootTally_node = char_root_node->first_node("LootTally");

	for (xml_node<> * loot_node = lootTally_node->first_node("loot"); loot_node; loot_node = loot_node->next_sibling())
	{
		tempName = loot_node->first_node("RulesElement")->first_attribute("name")->value();

		xml_node<> * rulesEl2_node = loot_node->first_node("RulesElement");

		if (loot_node->first_attribute("equip-count")->value() > 0){
			for (xml_node<> * spec_node = rulesEl2_node->first_node("specific"); spec_node; spec_node = spec_node->next_sibling())
			{
				if(strcmp(spec_node->value()," Head ") == 0){
					equipment[0] = tempName;
				}
				else if(strcmp(spec_node->value()," Neck ") == 0){
					equipment[1] = tempName;
				}
				else if(strcmp(spec_node->value()," Arms ") == 0){
					equipment[2] = tempName;
				}
				else if(strcmp(spec_node->value()," Ring ") == 0){
					equipment[3] = tempName;
				}
				else if(strcmp(spec_node->value()," Hands ") == 0){
					equipment[4] = tempName;
				}
				else if(strcmp(spec_node->value()," One-hand ") == 0){
					equipment[5] = tempName;
				}
				else if(strcmp(spec_node->value()," Off-Hand ") == 0){
					equipment[6] = tempName;
				}
				else if(strcmp(spec_node->value()," Waist ") == 0){
					equipment[7] = tempName;
				}
				else if(strcmp(spec_node->value()," Body ") == 0){
					equipment[8] = tempName;
				}
				else if(strcmp(spec_node->value()," Feet ") == 0){
					equipment[9] = tempName;
				}
				else if(strcmp(spec_node->value()," Tatoo ") == 0){
					equipment[10] = tempName;
				}
				else if(strcmp(spec_node->value()," Ki Focus ") == 0){
					equipment[11] = tempName;
				}
			}
		}
		items.append(tempName);
		items.append(", ");
	}
	
	lastIndex = items.find_last_of(","); 
	items = items.substr(0, lastIndex);

	xml_node<> * powerStats_node = char_root_node->first_node("PowerStats");

	for (xml_node<> * power_node = powerStats_node->first_node("Power"); power_node; power_node = power_node->next_sibling())
	{
		std::array<string, 10> tempAbilityArray;
		for(int i = 0; i < 10; i++){
			tempAbilityArray[i];
		}

		tempAbilityArray[0] = power_node->first_attribute("name")->value();
		for (xml_node<> * spec2_node = power_node->first_node("specific"); spec2_node; spec2_node = spec2_node->next_sibling())
		{
			//cout << spec2_node->first_attribute("name")->value() << " : " << spec2_node->value() << endl;
			if(strcmp(spec2_node->first_attribute("name")->value(),"Power Usage") == 0)
				tempAbilityArray[1] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Action Type") == 0)
				tempAbilityArray[2] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Flavor") == 0)
				tempAbilityArray[3] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Attack Type") == 0)
				tempAbilityArray[4] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Target") == 0)
				tempAbilityArray[5] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Keywords") == 0)
				tempAbilityArray[6] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Attack") == 0)
				tempAbilityArray[7] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Hit") == 0)
				tempAbilityArray[8] = spec2_node->value();
			else if(strcmp(spec2_node->first_attribute("name")->value(),"Effect") == 0)
				tempAbilityArray[9] = spec2_node->value();
		}
		abilities.push_back(tempAbilityArray);

	}
	////////////////////
	skillsArray[0] = tempSkillsArray[0];
	skillsArray[1] = tempSkillsArray[1];
	for(int i = 3; i < 17; i++){
		skillsArray[i] = tempSkillsArray[i-1];
	}
	skillsArray[2] = tempSkillsArray[16];
	
	for(int i = 0; i < 6; i++){
		asa[i] = abilityScoreArray[i];
	}

	for(int i = 0; i < 6; i++){
		ama[i] = abilityModArray[i];
	}

	for(int i = 0; i < 4; i++){
		def[i] = defensesArray[i];
	}
	cn = charName;
	hpVal = hp;
	sur =  numSurges;
	init = initiative;
	ap = actionPoints;
	for(int i = 0; i < 17; i++){
		ski[i] = skillsArray[i];
	}
	pass[0] = passives[0];
	pass[1] = passives[1];
	spee = speed;
	ra = race;
	cla = classStr;
	vis = vision;
	gd = goldNum;
	ite = items;

	for(int i = 0; i < 12; i++){
		equi[i] = equipment[i];
	}

	for(int i = 0; i < abilities.size(); i++){
		std::array<string, 10> temp;
		for(int j = 0; j < 10; j++){
			temp[j] = abilities.at(i)[j];
		}
		abil.push_back(temp);
	}

	for(int i = 0; i < resistances.size(); i++){
		resis.push_back(resistances[i]);
	}

	for(int i = 0; i < languages.size(); i++){
		lang.push_back(languages[i]);
	}

}

Character XMLParser::makeCharacter(){
	Character newChar(cn,asa,ama,def,hpVal,sur,init,ap,ski,pass,spee,ra,cla,gd,ite,vis,lang,resis,"",equi,abil);
	return newChar;
}