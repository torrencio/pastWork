#include "Character.h"


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
