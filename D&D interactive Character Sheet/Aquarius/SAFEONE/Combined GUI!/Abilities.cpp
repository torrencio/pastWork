#include "Abilities.h"

void addAbility(Abilities::AbilitiesForm^ abilities, Ability^ ability){
	//----------------------Sequential-------------------//
	String^ empty;
	String^ attacktype;
	AbilitiesTable::AbilitiesTableForm^ table = addButton(abilities, ability->Name);

	table->propColor1 = System::Drawing::SystemColors::ScrollBar;
	table->propcolor2 = System::Drawing::SystemColors::MenuBar;

	if (ability->Flavor != empty)
		addAbilityProp(table, ability->Flavor, true);

	if (ability->KeyWords != empty)
		addAbilityProp(table, "Keywords:", ability->KeyWords);

	switch (ability->Attack_Type){
	case Melee: attacktype = "Melee"; break;
	case Ranged: attacktype = "Ranged"; break;
	case Close_Blast: attacktype = "Close Blast"; break;
	case Close_Burst: attacktype = "Close Burst"; break;
	case Area_Burst: attacktype = "Area Burst"; break;
	case Area_Wall: attacktype = "Area Wall"; break;
	case Personal: attacktype = "Personal"; break;
	}
	if (ability->Range != empty)
		addAbilityProp(table, attacktype, ability->Range);

	if (ability->Target != empty)
		addAbilityProp(table, "Target:", ability->Target);

	if (ability->Attack != empty)
		addAbilityProp(table, "Attack:", ability->Attack);

	if (ability->Hit != empty)
		addAbilityProp(table, "Hit:", ability->Hit);

	if (ability->Effect != empty)
		addAbilityProp(table, "Effect:", ability->Effect);

	if (ability->Additional_Effects != empty)
		addAbilityProp(table, "Additional Effects:", ability->Additional_Effects);

	//------------------Non Sequential-------------------//
	table->AbilityName->Text = ability->Name;

	switch (ability->Action_Type){
	case No_Action: table->action_type->Text = "No Action"; break;
	case Free_Action: table->action_type->Text = "Free Action"; break;
	case Immediate_Interrupt: table->action_type->Text = "Immediate Interrupt"; break;
	case Immediate_Reaction: table->action_type->Text = "Immediate Reaction"; break;
	case Minor_Action: table->action_type->Text = "Minor Action"; break;
	case Move_Action: table->action_type->Text = "Move Action"; break;
	case Standard_Action: table->action_type->Text = "Standard Action"; break;
	}

	switch (ability->Power_Usage){

	case defaultc: table->power_usage->Text = "No Action";
		break;

	case At_Will: table->power_usage->Text = "At Will";
		table->panel2->BackColor = System::Drawing::Color::DarkGreen;
		table->panel3->BackColor = System::Drawing::Color::DarkGreen;
		table->Used->Visible = false;

		break;

	case Daily: table->power_usage->Text = "Daily";
		table->panel2->BackColor = System::Drawing::Color::Gray;
		table->panel3->BackColor = System::Drawing::Color::Gray;
		break;

	case Encounter: table->power_usage->Text = "Encounter";
		table->panel2->BackColor = System::Drawing::Color::DarkRed;
		table->panel3->BackColor = System::Drawing::Color::DarkRed;
		break;
	}

	//--------------------------------------------------//
}


AbilitiesTable::AbilitiesTableForm^ addButton(Abilities::AbilitiesForm^ abilities, String^ x){
	System::Windows::Forms::Button^  button1 = (gcnew System::Windows::Forms::Button());
	abilities->flowLayoutPanel1->Controls->Add(button1);
	button1->Location = System::Drawing::Point(3, 3);
	button1->Name = abilities->abilitycount.ToString();
	button1->Size = System::Drawing::Size(168, 29);
	button1->TabIndex = 0;
	button1->Text = x;
	button1->UseVisualStyleBackColor = true;
	button1->Click += gcnew System::EventHandler(abilities, &Abilities::AbilitiesForm::AbilityButton_Click);


	AbilitiesTable::AbilitiesTableForm^ table = gcnew AbilitiesTable::AbilitiesTableForm();
	table->AbilityName->Text = x;
	table->TopLevel = false;
	table->Parent = abilities->splitContainer1->Panel2;

	abilities->abilitycount++;
	abilities->abilitytables.push_back(table);

	return table;

}
void addTable(Abilities::AbilitiesForm^ abilities){
	AbilitiesTable::AbilitiesTableForm^ table = gcnew AbilitiesTable::AbilitiesTableForm();
	table->TopLevel = false;
	table->Parent = abilities->splitContainer1->Panel2;
	table->Visible = true;
}