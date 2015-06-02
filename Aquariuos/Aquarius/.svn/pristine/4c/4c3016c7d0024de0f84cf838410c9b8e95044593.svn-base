#pragma once
#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

class Character
{
public:
	Character::Character(string cn, int asa[6], int ama[6], int def[4], int hp, int sur, int init, int ap, int ski[17], int pass[2], int spee, string ra, string cla, int gd, string ite, string vis, vector<string> lang, vector<string> resis, string cnotes, string equi[12], vector<vector<string> > abil);
	Character::Character();
	void useActionPoint();
	void useSecondWind();
	void useHealingSurge();
	void increaseHealth();
	void decreaseHealth();
	void newDay();
	void shortRest();
	void increaseGold();
	void decreaseGold();
	void addActionPoint();

	string charName;
	int abilityScoreArray[6];
	int abilityModArray[6];
	int defensesArray[4];
	int originalHP;
	int currentHP;
	int originalSurges;
	int currentSurges;
	int initiative;
	int originalActionPoints;
	int currentActionPoints;
	int skills[17];
	int passives[2]; // perception then insight
	int speed;
	string race;
	string classStr;
	int gold;
	string items;
	string vision;
	vector<string> languages;
	vector<string> resistances;
	vector<vector<string>> abilities;
	string characterNotes;
	bool secondWindUsed;
	string equipment[12];
	int surgeValue;
};

