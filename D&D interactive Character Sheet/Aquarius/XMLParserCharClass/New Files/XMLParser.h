#pragma once
#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
#include "Character.h"
using namespace std;


class XMLParser{
public:
	XMLParser(string fileName);
	Character makeCharacter();

private:
	string cn; //
	int asa[6]; //
	int ama[6]; //
	int def[4]; //
	int hpVal; //
	int sur; //
	int init; //
	int ap; //
	int ski[17]; //
	int pass[2]; //
	int spee; //
	string ra; //
	string cla; //
	int gd; //
	string ite; //
	string vis; //
	vector<string> lang; 
	vector<string> resis; //
	string cnotes;
	string equi[12]; //
	vector<array<string, 10> > abil;

};