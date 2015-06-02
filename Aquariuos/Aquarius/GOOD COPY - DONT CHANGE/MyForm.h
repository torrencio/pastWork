#pragma once
#include "Character.h"
#include <string>
#include <time.h>       /* time */
#include <msclr\marshal_cppstd.h>
#include "Abilities.h"
#include "XMLParser.h"
string fileName;
struct Dice{
	int numofDice = 0;
	int diceNum = 0;
	int addedToDice = 0;
};
Dice Maker(string x){
	int count = 1;
	string numOfDice;
	string diceNum;
	string addedToDice;

	for (int j = 0; j < x.size(); j++){
		if (x[j] != ' ' && x[j] != 'd'&& x[j] != '+'){
			if (count == 1){
				numOfDice = numOfDice + x[j];
				if (x[j + 1] == ' ' || x[j + 1] == 'd' || x[j + 1] == '+'){
					count++;
				}
			}
			else if (count == 2){
				diceNum += x[j];
				if (x[j + 1] == ' ' || x[j + 1] == 'd' || x[j + 1] == '+'){
					count++;
				}
			}
			else if (count == 3){
				addedToDice += x[j];
				if (x[j + 1] == ' ' || x[j + 1] == 'd' || x[j + 1] == '+'){
					count++;
				}
			}
		}

	}
	Dice a;
	a.numofDice = atoi(numOfDice.c_str());
	a.diceNum = atoi(diceNum.c_str());
	a.addedToDice = atoi(addedToDice.c_str());
	return a;
}
int rollDice(Dice a){

	int sum = 0;
	while (a.numofDice > 0){
		switch (a.diceNum)
		{
		case 4:
			sum += rand() % 4 + 1;
			a.numofDice--;

			break;
		case 6:
			sum += rand() % 6 + 1;
			a.numofDice--;
			break;
		case 8:
			sum += rand() % 8 + 1;
			a.numofDice--;
			break;
		case 10:
			sum += rand() % 10 + 1;
			a.numofDice--;
			break;
		case 12:
			sum += rand() % 12 + 1;
			a.numofDice--;
			break;
		case 20:
			sum += rand() % 20 + 1;
			a.numofDice--;
			break;
		case 100:
			sum += rand() % 100 + 1;
			a.numofDice--;
			break;
		}
	}
	return sum = sum + a.addedToDice;

}
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	Character testChar;
	//string fileName;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	// common to entire form
	//public: String^ fileName;
	private: System::Windows::Forms::TabControl^  tab_control;
	private: System::Windows::Forms::TabPage^  stats_tab;
	private: System::Windows::Forms::TabPage^  skills_tab;

	public: System::Windows::Forms::TabPage^  abilities_tab;
	private: System::Windows::Forms::TabPage^  item_tab;
	private: System::Windows::Forms::TabPage^  tabPage5;

	private: System::Windows::Forms::Button^  NewDayButton;
	 // Rachel starts
	private: System::Windows::Forms::Label^  items;
	private: System::Windows::Forms::RichTextBox^  items_txt_box;
	private: System::Windows::Forms::Label^  gold_label;
	private: System::Windows::Forms::Label^  equipment;






	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	
	private: System::Windows::Forms::Label^  neck;
	private: System::Windows::Forms::Label^  head;
	private: System::Windows::Forms::Label^  arms;
	private: System::Windows::Forms::Label^  rings;
	private: System::Windows::Forms::Label^  hands;
	private: System::Windows::Forms::Label^  main_hand;
	private: System::Windows::Forms::Label^  off_hand;
	private: System::Windows::Forms::Label^  waist;
	private: System::Windows::Forms::Label^  armour;
	private: System::Windows::Forms::Label^  feet;
	private: System::Windows::Forms::Label^  tattoo;
	private: System::Windows::Forms::Label^  ki_focus;

	private: System::Windows::Forms::Label^  head_equip;
	private: System::Windows::Forms::Label^  neck_equip;
	private: System::Windows::Forms::Label^  arm_equip;
	private: System::Windows::Forms::Label^  ring_equip;
	private: System::Windows::Forms::Label^  hand_equip;
	private: System::Windows::Forms::Label^  mainhand_equip;
	private: System::Windows::Forms::Label^  offhand_equip;
	private: System::Windows::Forms::Label^  waist_equip;
	private: System::Windows::Forms::Label^  armour_equip;
	private: System::Windows::Forms::Label^  feet_equip;
	private: System::Windows::Forms::Label^  tattoo_equip;
	private: System::Windows::Forms::Label^  ki_focus_equip;


	private: System::Windows::Forms::RichTextBox^  notes_box;
	private: System::Windows::Forms::Label^  Notes;

	// Catherine - Stats and Skills
	private: System::Windows::Forms::NumericUpDown^  CurrentHealth;
	private: System::Windows::Forms::Label^  HealthLabel;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  DEXLabel;
	private: System::Windows::Forms::Label^  CONLabel;
	private: System::Windows::Forms::Label^  STRLabel;
	private: System::Windows::Forms::Label^  StatCheckLabel;
	private: System::Windows::Forms::Label^  StatScoreLabel;
	private: System::Windows::Forms::Label^  StatAbilityLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  UseSurge;

	private: System::Windows::Forms::Label^  HealingSurgesLabel;
	private: System::Windows::Forms::Label^  CHALabel;
	private: System::Windows::Forms::Label^  WISLabel;
	private: System::Windows::Forms::Label^  INTLabel;
	private: System::Windows::Forms::Label^  FORTLabel;
	private: System::Windows::Forms::Label^  ACLabel;
	private: System::Windows::Forms::Label^  DefensesLabel;
	private: System::Windows::Forms::Label^  ResistancesLabel;
	private: System::Windows::Forms::Label^  WILLLabel;
	private: System::Windows::Forms::Label^  REFLabel;
	private: System::Windows::Forms::Label^  SecondWindLabel;
	private: System::Windows::Forms::Label^  ActionPointsLabel;

	private: System::Windows::Forms::Button^  UseActionPoints;

	private: System::Windows::Forms::Label^  LanguagesLabel;
	private: System::Windows::Forms::Label^  SpecialSensesLabel;
	private: System::Windows::Forms::Label^  PassivePerceptionLabel;
	private: System::Windows::Forms::Label^  PassiveInsightLabel;
	private: System::Windows::Forms::Label^  SpeedLabel;
	private: System::Windows::Forms::Label^  InitiativeLabel;
	private: System::Windows::Forms::RichTextBox^  LanguagesTextBox;
	private: System::Windows::Forms::RichTextBox^  SpecialSensesTextBox;
	private: System::Windows::Forms::RichTextBox^  ResistancesTextBox;
	private: System::Windows::Forms::Label^  Bloodied;
	private: System::Windows::Forms::Label^  HealthSlashLabel;
	private: System::Windows::Forms::Label^  STRScoreLabel;
	private: System::Windows::Forms::Label^  PassiveInsightScore;

	private: System::Windows::Forms::Label^  SpeedScore;

	private: System::Windows::Forms::Label^  InitiativeScore;

	private: System::Windows::Forms::Label^  WILLValue;

	private: System::Windows::Forms::Label^  REFValue;
	private: System::Windows::Forms::Label^  FORTValue;

	private: System::Windows::Forms::Label^  ACValue;
	private: System::Windows::Forms::Label^  CHACheckLabel;

	private: System::Windows::Forms::Label^  CHAScoreLabel;
	private: System::Windows::Forms::Label^  WISCheckLabel;

	private: System::Windows::Forms::Label^  WISScoreLabel;
	private: System::Windows::Forms::Label^  INTCheckLabel;

	private: System::Windows::Forms::Label^  INTScoreLabel;
	private: System::Windows::Forms::Label^  CONCheckLabel;

	private: System::Windows::Forms::Label^  CONScoreLabel;
	private: System::Windows::Forms::Label^  DEXCheckLabel;

	private: System::Windows::Forms::Label^  DEXScoreLabel;
	private: System::Windows::Forms::Label^  STRCheckLabel;
	private: System::Windows::Forms::Label^  PassivePerceptionScore;
	private: System::Windows::Forms::Button^  NewEncounterButton;

	private: System::Windows::Forms::Button^  EndTurnButton;

	private: System::Windows::Forms::Label^  SkillsSkillLabel;
	private: System::Windows::Forms::Label^  SkillsScoreLabel;
	private: System::Windows::Forms::TableLayoutPanel^  SkillsValueTable;

	private: System::Windows::Forms::Label^  AcrobaticsLabel;
	private: System::Windows::Forms::Label^  ArcanaLabel;
	private: System::Windows::Forms::Label^  BluffLabel;
	private: System::Windows::Forms::Label^  DiplomacyLabel;
	private: System::Windows::Forms::Label^  DungeneeringLabel;
	private: System::Windows::Forms::Label^  EnduranceLabel;
	private: System::Windows::Forms::Label^  HealLabel;
	private: System::Windows::Forms::Label^  HistoryLabel;
	private: System::Windows::Forms::Label^  InsightLabel;
	private: System::Windows::Forms::Label^  IntimidateLabel;
	private: System::Windows::Forms::Label^  NatureLabel;
	private: System::Windows::Forms::Label^  PerceptionLabel;
	private: System::Windows::Forms::Label^  ReligionLabel;
	private: System::Windows::Forms::Label^  StealthLabel;
	private: System::Windows::Forms::Label^  StreetwiseLabel;
	private: System::Windows::Forms::Label^  TheiveryLabel;
	private: System::Windows::Forms::Label^  BluffValue;

	private: System::Windows::Forms::Label^  ArcanaValue;

	private: System::Windows::Forms::Label^  AcrobaticsValue;
	private: System::Windows::Forms::Label^  TheiveryValue;

	private: System::Windows::Forms::Label^  StreetwiseValue;

	private: System::Windows::Forms::Label^  StealthValue;

	private: System::Windows::Forms::Label^  ReligionValue;

	private: System::Windows::Forms::Label^  PerceptionValue;

	private: System::Windows::Forms::Label^  NatureValue;

	private: System::Windows::Forms::Label^  IntimidateValue;

	private: System::Windows::Forms::Label^  InsightValue;

	private: System::Windows::Forms::Label^  HistoryValue;

	private: System::Windows::Forms::Label^  HealValue;

	private: System::Windows::Forms::Label^  EnduranceValue;

	private: System::Windows::Forms::Label^  DungeneeringValue;

	private: System::Windows::Forms::Label^  DiplomacyValue;

	private: System::Windows::Forms::Button^  UseSecondWind;
	private: System::Windows::Forms::Label^  CurrentSecondWind;
	private: System::Windows::Forms::Label^  CurrentActionPoints;
	private: System::Windows::Forms::Label^  TotalHealth;
	public: System::Windows::Forms::Label^  CurrentHealingSurges;
	private: System::Windows::Forms::TableLayoutPanel^  InitiativeandSpeedTable;

	private: System::Windows::Forms::TableLayoutPanel^  DefensesTable;
	private: System::Windows::Forms::TableLayoutPanel^  AbilitiesScoreCheckTable;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  AthleticsLabel;
	private: System::Windows::Forms::Label^  AthleticsValue;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TableLayoutPanel^  SkilsValueTable2;

private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  DiceSizeLabel;

private: System::Windows::Forms::DomainUpDown^  domainUpDown1;
private: System::Windows::Forms::Label^  NumDiceLabel;

private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::Label^  SurgeValueVal;

private: System::Windows::Forms::Label^  SurgeValueLabel;
private: System::Windows::Forms::Button^  ShortRestButton;
public: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
private: System::Windows::Forms::Button^  AddActionPointButton;
public:







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tab_control = (gcnew System::Windows::Forms::TabControl());
			this->stats_tab = (gcnew System::Windows::Forms::TabPage());
			this->AddActionPointButton = (gcnew System::Windows::Forms::Button());
			this->SurgeValueVal = (gcnew System::Windows::Forms::Label());
			this->SurgeValueLabel = (gcnew System::Windows::Forms::Label());
			this->AbilitiesScoreCheckTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->StatCheckLabel = (gcnew System::Windows::Forms::Label());
			this->StatScoreLabel = (gcnew System::Windows::Forms::Label());
			this->STRLabel = (gcnew System::Windows::Forms::Label());
			this->INTLabel = (gcnew System::Windows::Forms::Label());
			this->WISLabel = (gcnew System::Windows::Forms::Label());
			this->CHACheckLabel = (gcnew System::Windows::Forms::Label());
			this->CHALabel = (gcnew System::Windows::Forms::Label());
			this->WISCheckLabel = (gcnew System::Windows::Forms::Label());
			this->CHAScoreLabel = (gcnew System::Windows::Forms::Label());
			this->INTCheckLabel = (gcnew System::Windows::Forms::Label());
			this->STRScoreLabel = (gcnew System::Windows::Forms::Label());
			this->CONCheckLabel = (gcnew System::Windows::Forms::Label());
			this->DEXScoreLabel = (gcnew System::Windows::Forms::Label());
			this->DEXCheckLabel = (gcnew System::Windows::Forms::Label());
			this->WISScoreLabel = (gcnew System::Windows::Forms::Label());
			this->STRCheckLabel = (gcnew System::Windows::Forms::Label());
			this->CONScoreLabel = (gcnew System::Windows::Forms::Label());
			this->INTScoreLabel = (gcnew System::Windows::Forms::Label());
			this->DEXLabel = (gcnew System::Windows::Forms::Label());
			this->CONLabel = (gcnew System::Windows::Forms::Label());
			this->StatAbilityLabel = (gcnew System::Windows::Forms::Label());
			this->DefensesTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ACLabel = (gcnew System::Windows::Forms::Label());
			this->FORTLabel = (gcnew System::Windows::Forms::Label());
			this->REFLabel = (gcnew System::Windows::Forms::Label());
			this->WILLLabel = (gcnew System::Windows::Forms::Label());
			this->ACValue = (gcnew System::Windows::Forms::Label());
			this->FORTValue = (gcnew System::Windows::Forms::Label());
			this->REFValue = (gcnew System::Windows::Forms::Label());
			this->WILLValue = (gcnew System::Windows::Forms::Label());
			this->InitiativeandSpeedTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->InitiativeLabel = (gcnew System::Windows::Forms::Label());
			this->InitiativeScore = (gcnew System::Windows::Forms::Label());
			this->SpeedLabel = (gcnew System::Windows::Forms::Label());
			this->PassiveInsightLabel = (gcnew System::Windows::Forms::Label());
			this->PassivePerceptionLabel = (gcnew System::Windows::Forms::Label());
			this->SpeedScore = (gcnew System::Windows::Forms::Label());
			this->PassivePerceptionScore = (gcnew System::Windows::Forms::Label());
			this->PassiveInsightScore = (gcnew System::Windows::Forms::Label());
			this->CurrentHealingSurges = (gcnew System::Windows::Forms::Label());
			this->TotalHealth = (gcnew System::Windows::Forms::Label());
			this->UseSecondWind = (gcnew System::Windows::Forms::Button());
			this->CurrentSecondWind = (gcnew System::Windows::Forms::Label());
			this->CurrentActionPoints = (gcnew System::Windows::Forms::Label());
			this->HealthSlashLabel = (gcnew System::Windows::Forms::Label());
			this->Bloodied = (gcnew System::Windows::Forms::Label());
			this->ResistancesTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->LanguagesTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->SpecialSensesTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->LanguagesLabel = (gcnew System::Windows::Forms::Label());
			this->SpecialSensesLabel = (gcnew System::Windows::Forms::Label());
			this->UseActionPoints = (gcnew System::Windows::Forms::Button());
			this->SecondWindLabel = (gcnew System::Windows::Forms::Label());
			this->ActionPointsLabel = (gcnew System::Windows::Forms::Label());
			this->ResistancesLabel = (gcnew System::Windows::Forms::Label());
			this->DefensesLabel = (gcnew System::Windows::Forms::Label());
			this->UseSurge = (gcnew System::Windows::Forms::Button());
			this->HealingSurgesLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CurrentHealth = (gcnew System::Windows::Forms::NumericUpDown());
			this->HealthLabel = (gcnew System::Windows::Forms::Label());
			this->skills_tab = (gcnew System::Windows::Forms::TabPage());
			this->SkilsValueTable2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->HistoryLabel = (gcnew System::Windows::Forms::Label());
			this->HistoryValue = (gcnew System::Windows::Forms::Label());
			this->InsightLabel = (gcnew System::Windows::Forms::Label());
			this->TheiveryValue = (gcnew System::Windows::Forms::Label());
			this->TheiveryLabel = (gcnew System::Windows::Forms::Label());
			this->InsightValue = (gcnew System::Windows::Forms::Label());
			this->StreetwiseLabel = (gcnew System::Windows::Forms::Label());
			this->StreetwiseValue = (gcnew System::Windows::Forms::Label());
			this->IntimidateLabel = (gcnew System::Windows::Forms::Label());
			this->StealthLabel = (gcnew System::Windows::Forms::Label());
			this->IntimidateValue = (gcnew System::Windows::Forms::Label());
			this->ReligionLabel = (gcnew System::Windows::Forms::Label());
			this->NatureLabel = (gcnew System::Windows::Forms::Label());
			this->PerceptionLabel = (gcnew System::Windows::Forms::Label());
			this->ReligionValue = (gcnew System::Windows::Forms::Label());
			this->NatureValue = (gcnew System::Windows::Forms::Label());
			this->PerceptionValue = (gcnew System::Windows::Forms::Label());
			this->StealthValue = (gcnew System::Windows::Forms::Label());
			this->SkillsValueTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ArcanaValue = (gcnew System::Windows::Forms::Label());
			this->ArcanaLabel = (gcnew System::Windows::Forms::Label());
			this->AcrobaticsValue = (gcnew System::Windows::Forms::Label());
			this->HealLabel = (gcnew System::Windows::Forms::Label());
			this->EnduranceLabel = (gcnew System::Windows::Forms::Label());
			this->DungeneeringLabel = (gcnew System::Windows::Forms::Label());
			this->DiplomacyLabel = (gcnew System::Windows::Forms::Label());
			this->BluffLabel = (gcnew System::Windows::Forms::Label());
			this->HealValue = (gcnew System::Windows::Forms::Label());
			this->EnduranceValue = (gcnew System::Windows::Forms::Label());
			this->DungeneeringValue = (gcnew System::Windows::Forms::Label());
			this->DiplomacyValue = (gcnew System::Windows::Forms::Label());
			this->BluffValue = (gcnew System::Windows::Forms::Label());
			this->AthleticsLabel = (gcnew System::Windows::Forms::Label());
			this->AcrobaticsLabel = (gcnew System::Windows::Forms::Label());
			this->AthleticsValue = (gcnew System::Windows::Forms::Label());
			this->SkillsScoreLabel = (gcnew System::Windows::Forms::Label());
			this->SkillsSkillLabel = (gcnew System::Windows::Forms::Label());
			this->abilities_tab = (gcnew System::Windows::Forms::TabPage());
			this->item_tab = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->gold_label = (gcnew System::Windows::Forms::Label());
			this->equipment = (gcnew System::Windows::Forms::Label());
			this->items = (gcnew System::Windows::Forms::Label());
			this->items_txt_box = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->neck = (gcnew System::Windows::Forms::Label());
			this->head = (gcnew System::Windows::Forms::Label());
			this->arms = (gcnew System::Windows::Forms::Label());
			this->rings = (gcnew System::Windows::Forms::Label());
			this->hands = (gcnew System::Windows::Forms::Label());
			this->main_hand = (gcnew System::Windows::Forms::Label());
			this->off_hand = (gcnew System::Windows::Forms::Label());
			this->waist = (gcnew System::Windows::Forms::Label());
			this->armour = (gcnew System::Windows::Forms::Label());
			this->feet = (gcnew System::Windows::Forms::Label());
			this->tattoo = (gcnew System::Windows::Forms::Label());
			this->ki_focus = (gcnew System::Windows::Forms::Label());
			this->head_equip = (gcnew System::Windows::Forms::Label());
			this->neck_equip = (gcnew System::Windows::Forms::Label());
			this->arm_equip = (gcnew System::Windows::Forms::Label());
			this->ring_equip = (gcnew System::Windows::Forms::Label());
			this->hand_equip = (gcnew System::Windows::Forms::Label());
			this->mainhand_equip = (gcnew System::Windows::Forms::Label());
			this->offhand_equip = (gcnew System::Windows::Forms::Label());
			this->waist_equip = (gcnew System::Windows::Forms::Label());
			this->armour_equip = (gcnew System::Windows::Forms::Label());
			this->feet_equip = (gcnew System::Windows::Forms::Label());
			this->tattoo_equip = (gcnew System::Windows::Forms::Label());
			this->ki_focus_equip = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->notes_box = (gcnew System::Windows::Forms::RichTextBox());
			this->Notes = (gcnew System::Windows::Forms::Label());
			this->NewDayButton = (gcnew System::Windows::Forms::Button());
			this->NewEncounterButton = (gcnew System::Windows::Forms::Button());
			this->EndTurnButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->DiceSizeLabel = (gcnew System::Windows::Forms::Label());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->NumDiceLabel = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->ShortRestButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tab_control->SuspendLayout();
			this->stats_tab->SuspendLayout();
			this->AbilitiesScoreCheckTable->SuspendLayout();
			this->DefensesTable->SuspendLayout();
			this->InitiativeandSpeedTable->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentHealth))->BeginInit();
			this->skills_tab->SuspendLayout();
			this->SkilsValueTable2->SuspendLayout();
			this->SkillsValueTable->SuspendLayout();
			this->item_tab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tab_control
			// 
			this->tab_control->Controls->Add(this->stats_tab);
			this->tab_control->Controls->Add(this->skills_tab);
			this->tab_control->Controls->Add(this->abilities_tab);
			this->tab_control->Controls->Add(this->item_tab);
			this->tab_control->Controls->Add(this->tabPage5);
			this->tab_control->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab_control->Location = System::Drawing::Point(1, 2);
			this->tab_control->Name = L"tab_control";
			this->tab_control->Padding = System::Drawing::Point(26, 0);
			this->tab_control->SelectedIndex = 0;
			this->tab_control->Size = System::Drawing::Size(603, 383);
			this->tab_control->TabIndex = 0;
			// 
			// stats_tab
			// 
			this->stats_tab->Controls->Add(this->AddActionPointButton);
			this->stats_tab->Controls->Add(this->SurgeValueVal);
			this->stats_tab->Controls->Add(this->SurgeValueLabel);
			this->stats_tab->Controls->Add(this->AbilitiesScoreCheckTable);
			this->stats_tab->Controls->Add(this->DefensesTable);
			this->stats_tab->Controls->Add(this->InitiativeandSpeedTable);
			this->stats_tab->Controls->Add(this->CurrentHealingSurges);
			this->stats_tab->Controls->Add(this->TotalHealth);
			this->stats_tab->Controls->Add(this->UseSecondWind);
			this->stats_tab->Controls->Add(this->CurrentSecondWind);
			this->stats_tab->Controls->Add(this->CurrentActionPoints);
			this->stats_tab->Controls->Add(this->HealthSlashLabel);
			this->stats_tab->Controls->Add(this->Bloodied);
			this->stats_tab->Controls->Add(this->ResistancesTextBox);
			this->stats_tab->Controls->Add(this->LanguagesTextBox);
			this->stats_tab->Controls->Add(this->SpecialSensesTextBox);
			this->stats_tab->Controls->Add(this->LanguagesLabel);
			this->stats_tab->Controls->Add(this->SpecialSensesLabel);
			this->stats_tab->Controls->Add(this->UseActionPoints);
			this->stats_tab->Controls->Add(this->SecondWindLabel);
			this->stats_tab->Controls->Add(this->ActionPointsLabel);
			this->stats_tab->Controls->Add(this->ResistancesLabel);
			this->stats_tab->Controls->Add(this->DefensesLabel);
			this->stats_tab->Controls->Add(this->UseSurge);
			this->stats_tab->Controls->Add(this->HealingSurgesLabel);
			this->stats_tab->Controls->Add(this->label2);
			this->stats_tab->Controls->Add(this->CurrentHealth);
			this->stats_tab->Controls->Add(this->HealthLabel);
			this->stats_tab->Location = System::Drawing::Point(4, 27);
			this->stats_tab->Name = L"stats_tab";
			this->stats_tab->Padding = System::Windows::Forms::Padding(3);
			this->stats_tab->Size = System::Drawing::Size(595, 352);
			this->stats_tab->TabIndex = 0;
			this->stats_tab->Text = L"Stats";
			this->stats_tab->UseVisualStyleBackColor = true;
			// 
			// AddActionPointButton
			// 
			this->AddActionPointButton->Location = System::Drawing::Point(506, 9);
			this->AddActionPointButton->Name = L"AddActionPointButton";
			this->AddActionPointButton->Size = System::Drawing::Size(81, 26);
			this->AddActionPointButton->TabIndex = 69;
			this->AddActionPointButton->Text = L"Add";
			this->AddActionPointButton->UseVisualStyleBackColor = true;
			this->AddActionPointButton->Click += gcnew System::EventHandler(this, &MyForm::AddActionPointButton_Click);
			// 
			// SurgeValueVal
			// 
			this->SurgeValueVal->AutoSize = true;
			this->SurgeValueVal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SurgeValueVal->Location = System::Drawing::Point(184, 193);
			this->SurgeValueVal->Name = L"SurgeValueVal";
			this->SurgeValueVal->Size = System::Drawing::Size(15, 16);
			this->SurgeValueVal->TabIndex = 68;
			this->SurgeValueVal->Text = L"8";
			// 
			// SurgeValueLabel
			// 
			this->SurgeValueLabel->AutoSize = true;
			this->SurgeValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SurgeValueLabel->Location = System::Drawing::Point(103, 193);
			this->SurgeValueLabel->Name = L"SurgeValueLabel";
			this->SurgeValueLabel->Size = System::Drawing::Size(82, 16);
			this->SurgeValueLabel->TabIndex = 67;
			this->SurgeValueLabel->Text = L"Surge Value";
			// 
			// AbilitiesScoreCheckTable
			// 
			this->AbilitiesScoreCheckTable->ColumnCount = 3;
			this->AbilitiesScoreCheckTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->AbilitiesScoreCheckTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->AbilitiesScoreCheckTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->AbilitiesScoreCheckTable->Controls->Add(this->StatCheckLabel, 2, 0);
			this->AbilitiesScoreCheckTable->Controls->Add(this->StatScoreLabel, 1, 0);
			this->AbilitiesScoreCheckTable->Controls->Add(this->STRLabel, 0, 1);
			this->AbilitiesScoreCheckTable->Controls->Add(this->INTLabel, 0, 4);
			this->AbilitiesScoreCheckTable->Controls->Add(this->WISLabel, 0, 5);
			this->AbilitiesScoreCheckTable->Controls->Add(this->CHACheckLabel, 2, 6);
			this->AbilitiesScoreCheckTable->Controls->Add(this->CHALabel, 0, 6);
			this->AbilitiesScoreCheckTable->Controls->Add(this->WISCheckLabel, 2, 5);
			this->AbilitiesScoreCheckTable->Controls->Add(this->CHAScoreLabel, 1, 6);
			this->AbilitiesScoreCheckTable->Controls->Add(this->INTCheckLabel, 2, 4);
			this->AbilitiesScoreCheckTable->Controls->Add(this->STRScoreLabel, 1, 1);
			this->AbilitiesScoreCheckTable->Controls->Add(this->CONCheckLabel, 2, 3);
			this->AbilitiesScoreCheckTable->Controls->Add(this->DEXScoreLabel, 1, 2);
			this->AbilitiesScoreCheckTable->Controls->Add(this->DEXCheckLabel, 2, 2);
			this->AbilitiesScoreCheckTable->Controls->Add(this->WISScoreLabel, 1, 5);
			this->AbilitiesScoreCheckTable->Controls->Add(this->STRCheckLabel, 2, 1);
			this->AbilitiesScoreCheckTable->Controls->Add(this->CONScoreLabel, 1, 3);
			this->AbilitiesScoreCheckTable->Controls->Add(this->INTScoreLabel, 1, 4);
			this->AbilitiesScoreCheckTable->Controls->Add(this->DEXLabel, 0, 2);
			this->AbilitiesScoreCheckTable->Controls->Add(this->CONLabel, 0, 3);
			this->AbilitiesScoreCheckTable->Controls->Add(this->StatAbilityLabel, 0, 0);
			this->AbilitiesScoreCheckTable->Location = System::Drawing::Point(24, 9);
			this->AbilitiesScoreCheckTable->Name = L"AbilitiesScoreCheckTable";
			this->AbilitiesScoreCheckTable->RowCount = 7;
			this->AbilitiesScoreCheckTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->AbilitiesScoreCheckTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->AbilitiesScoreCheckTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->AbilitiesScoreCheckTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->AbilitiesScoreCheckTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->AbilitiesScoreCheckTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->AbilitiesScoreCheckTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->AbilitiesScoreCheckTable->Size = System::Drawing::Size(186, 142);
			this->AbilitiesScoreCheckTable->TabIndex = 66;
			this->AbilitiesScoreCheckTable->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel4_Paint);
			// 
			// StatCheckLabel
			// 
			this->StatCheckLabel->AutoSize = true;
			this->StatCheckLabel->Location = System::Drawing::Point(127, 0);
			this->StatCheckLabel->Name = L"StatCheckLabel";
			this->StatCheckLabel->Size = System::Drawing::Size(40, 20);
			this->StatCheckLabel->TabIndex = 5;
			this->StatCheckLabel->Text = L"Mod";
			// 
			// StatScoreLabel
			// 
			this->StatScoreLabel->AutoSize = true;
			this->StatScoreLabel->Location = System::Drawing::Point(65, 0);
			this->StatScoreLabel->Name = L"StatScoreLabel";
			this->StatScoreLabel->Size = System::Drawing::Size(51, 20);
			this->StatScoreLabel->TabIndex = 4;
			this->StatScoreLabel->Text = L"Score";
			// 
			// STRLabel
			// 
			this->STRLabel->AutoSize = true;
			this->STRLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STRLabel->Location = System::Drawing::Point(3, 21);
			this->STRLabel->Name = L"STRLabel";
			this->STRLabel->Size = System::Drawing::Size(36, 16);
			this->STRLabel->TabIndex = 6;
			this->STRLabel->Text = L"STR";
			// 
			// INTLabel
			// 
			this->INTLabel->AutoSize = true;
			this->INTLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INTLabel->Location = System::Drawing::Point(3, 82);
			this->INTLabel->Name = L"INTLabel";
			this->INTLabel->Size = System::Drawing::Size(30, 16);
			this->INTLabel->TabIndex = 9;
			this->INTLabel->Text = L"INT";
			// 
			// WISLabel
			// 
			this->WISLabel->AutoSize = true;
			this->WISLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WISLabel->Location = System::Drawing::Point(3, 102);
			this->WISLabel->Name = L"WISLabel";
			this->WISLabel->Size = System::Drawing::Size(33, 16);
			this->WISLabel->TabIndex = 10;
			this->WISLabel->Text = L"WIS";
			// 
			// CHACheckLabel
			// 
			this->CHACheckLabel->AutoSize = true;
			this->CHACheckLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CHACheckLabel->Location = System::Drawing::Point(127, 122);
			this->CHACheckLabel->Name = L"CHACheckLabel";
			this->CHACheckLabel->Size = System::Drawing::Size(22, 16);
			this->CHACheckLabel->TabIndex = 50;
			this->CHACheckLabel->Text = L"10";
			// 
			// CHALabel
			// 
			this->CHALabel->AutoSize = true;
			this->CHALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CHALabel->Location = System::Drawing::Point(3, 122);
			this->CHALabel->Name = L"CHALabel";
			this->CHALabel->Size = System::Drawing::Size(36, 16);
			this->CHALabel->TabIndex = 11;
			this->CHALabel->Text = L"CHA";
			// 
			// WISCheckLabel
			// 
			this->WISCheckLabel->AutoSize = true;
			this->WISCheckLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WISCheckLabel->Location = System::Drawing::Point(127, 102);
			this->WISCheckLabel->Name = L"WISCheckLabel";
			this->WISCheckLabel->Size = System::Drawing::Size(22, 16);
			this->WISCheckLabel->TabIndex = 48;
			this->WISCheckLabel->Text = L"10";
			// 
			// CHAScoreLabel
			// 
			this->CHAScoreLabel->AutoSize = true;
			this->CHAScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CHAScoreLabel->Location = System::Drawing::Point(65, 122);
			this->CHAScoreLabel->Name = L"CHAScoreLabel";
			this->CHAScoreLabel->Size = System::Drawing::Size(22, 16);
			this->CHAScoreLabel->TabIndex = 49;
			this->CHAScoreLabel->Text = L"10";
			// 
			// INTCheckLabel
			// 
			this->INTCheckLabel->AutoSize = true;
			this->INTCheckLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INTCheckLabel->Location = System::Drawing::Point(127, 82);
			this->INTCheckLabel->Name = L"INTCheckLabel";
			this->INTCheckLabel->Size = System::Drawing::Size(22, 16);
			this->INTCheckLabel->TabIndex = 46;
			this->INTCheckLabel->Text = L"10";
			// 
			// STRScoreLabel
			// 
			this->STRScoreLabel->AutoSize = true;
			this->STRScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STRScoreLabel->Location = System::Drawing::Point(65, 21);
			this->STRScoreLabel->Name = L"STRScoreLabel";
			this->STRScoreLabel->Size = System::Drawing::Size(22, 16);
			this->STRScoreLabel->TabIndex = 39;
			this->STRScoreLabel->Text = L"10";
			// 
			// CONCheckLabel
			// 
			this->CONCheckLabel->AutoSize = true;
			this->CONCheckLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CONCheckLabel->Location = System::Drawing::Point(127, 62);
			this->CONCheckLabel->Name = L"CONCheckLabel";
			this->CONCheckLabel->Size = System::Drawing::Size(22, 16);
			this->CONCheckLabel->TabIndex = 44;
			this->CONCheckLabel->Text = L"10";
			// 
			// DEXScoreLabel
			// 
			this->DEXScoreLabel->AutoSize = true;
			this->DEXScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEXScoreLabel->Location = System::Drawing::Point(65, 42);
			this->DEXScoreLabel->Name = L"DEXScoreLabel";
			this->DEXScoreLabel->Size = System::Drawing::Size(22, 16);
			this->DEXScoreLabel->TabIndex = 41;
			this->DEXScoreLabel->Text = L"10";
			// 
			// DEXCheckLabel
			// 
			this->DEXCheckLabel->AutoSize = true;
			this->DEXCheckLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEXCheckLabel->Location = System::Drawing::Point(127, 42);
			this->DEXCheckLabel->Name = L"DEXCheckLabel";
			this->DEXCheckLabel->Size = System::Drawing::Size(22, 16);
			this->DEXCheckLabel->TabIndex = 42;
			this->DEXCheckLabel->Text = L"10";
			// 
			// WISScoreLabel
			// 
			this->WISScoreLabel->AutoSize = true;
			this->WISScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WISScoreLabel->Location = System::Drawing::Point(65, 102);
			this->WISScoreLabel->Name = L"WISScoreLabel";
			this->WISScoreLabel->Size = System::Drawing::Size(22, 16);
			this->WISScoreLabel->TabIndex = 47;
			this->WISScoreLabel->Text = L"10";
			// 
			// STRCheckLabel
			// 
			this->STRCheckLabel->AutoSize = true;
			this->STRCheckLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STRCheckLabel->Location = System::Drawing::Point(127, 21);
			this->STRCheckLabel->Name = L"STRCheckLabel";
			this->STRCheckLabel->Size = System::Drawing::Size(22, 16);
			this->STRCheckLabel->TabIndex = 40;
			this->STRCheckLabel->Text = L"10";
			// 
			// CONScoreLabel
			// 
			this->CONScoreLabel->AutoSize = true;
			this->CONScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CONScoreLabel->Location = System::Drawing::Point(65, 62);
			this->CONScoreLabel->Name = L"CONScoreLabel";
			this->CONScoreLabel->Size = System::Drawing::Size(22, 16);
			this->CONScoreLabel->TabIndex = 43;
			this->CONScoreLabel->Text = L"10";
			// 
			// INTScoreLabel
			// 
			this->INTScoreLabel->AutoSize = true;
			this->INTScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INTScoreLabel->Location = System::Drawing::Point(65, 82);
			this->INTScoreLabel->Name = L"INTScoreLabel";
			this->INTScoreLabel->Size = System::Drawing::Size(22, 16);
			this->INTScoreLabel->TabIndex = 45;
			this->INTScoreLabel->Text = L"10";
			// 
			// DEXLabel
			// 
			this->DEXLabel->AutoSize = true;
			this->DEXLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEXLabel->Location = System::Drawing::Point(3, 42);
			this->DEXLabel->Name = L"DEXLabel";
			this->DEXLabel->Size = System::Drawing::Size(35, 16);
			this->DEXLabel->TabIndex = 8;
			this->DEXLabel->Text = L"DEX";
			// 
			// CONLabel
			// 
			this->CONLabel->AutoSize = true;
			this->CONLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CONLabel->Location = System::Drawing::Point(3, 62);
			this->CONLabel->Name = L"CONLabel";
			this->CONLabel->Size = System::Drawing::Size(37, 16);
			this->CONLabel->TabIndex = 7;
			this->CONLabel->Text = L"CON";
			// 
			// StatAbilityLabel
			// 
			this->StatAbilityLabel->AutoSize = true;
			this->StatAbilityLabel->Location = System::Drawing::Point(3, 0);
			this->StatAbilityLabel->Name = L"StatAbilityLabel";
			this->StatAbilityLabel->Size = System::Drawing::Size(50, 20);
			this->StatAbilityLabel->TabIndex = 3;
			this->StatAbilityLabel->Text = L"Ability";
			// 
			// DefensesTable
			// 
			this->DefensesTable->ColumnCount = 2;
			this->DefensesTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->DefensesTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->DefensesTable->Controls->Add(this->ACLabel, 0, 0);
			this->DefensesTable->Controls->Add(this->FORTLabel, 0, 1);
			this->DefensesTable->Controls->Add(this->REFLabel, 0, 2);
			this->DefensesTable->Controls->Add(this->WILLLabel, 0, 3);
			this->DefensesTable->Controls->Add(this->ACValue, 1, 0);
			this->DefensesTable->Controls->Add(this->FORTValue, 1, 1);
			this->DefensesTable->Controls->Add(this->REFValue, 1, 2);
			this->DefensesTable->Controls->Add(this->WILLValue, 1, 3);
			this->DefensesTable->Location = System::Drawing::Point(24, 236);
			this->DefensesTable->Name = L"DefensesTable";
			this->DefensesTable->RowCount = 4;
			this->DefensesTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->DefensesTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->DefensesTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->DefensesTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->DefensesTable->Size = System::Drawing::Size(192, 72);
			this->DefensesTable->TabIndex = 65;
			// 
			// ACLabel
			// 
			this->ACLabel->AutoSize = true;
			this->ACLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ACLabel->Location = System::Drawing::Point(3, 0);
			this->ACLabel->Name = L"ACLabel";
			this->ACLabel->Size = System::Drawing::Size(26, 16);
			this->ACLabel->TabIndex = 16;
			this->ACLabel->Text = L"AC";
			// 
			// FORTLabel
			// 
			this->FORTLabel->AutoSize = true;
			this->FORTLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FORTLabel->Location = System::Drawing::Point(3, 16);
			this->FORTLabel->Name = L"FORTLabel";
			this->FORTLabel->Size = System::Drawing::Size(45, 16);
			this->FORTLabel->TabIndex = 17;
			this->FORTLabel->Text = L"FORT";
			// 
			// REFLabel
			// 
			this->REFLabel->AutoSize = true;
			this->REFLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REFLabel->Location = System::Drawing::Point(3, 32);
			this->REFLabel->Name = L"REFLabel";
			this->REFLabel->Size = System::Drawing::Size(35, 16);
			this->REFLabel->TabIndex = 18;
			this->REFLabel->Text = L"REF";
			// 
			// WILLLabel
			// 
			this->WILLLabel->AutoSize = true;
			this->WILLLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WILLLabel->Location = System::Drawing::Point(3, 52);
			this->WILLLabel->Name = L"WILLLabel";
			this->WILLLabel->Size = System::Drawing::Size(38, 16);
			this->WILLLabel->TabIndex = 19;
			this->WILLLabel->Text = L"WILL";
			// 
			// ACValue
			// 
			this->ACValue->AutoSize = true;
			this->ACValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ACValue->Location = System::Drawing::Point(99, 0);
			this->ACValue->Name = L"ACValue";
			this->ACValue->Size = System::Drawing::Size(22, 16);
			this->ACValue->TabIndex = 51;
			this->ACValue->Text = L"10";
			// 
			// FORTValue
			// 
			this->FORTValue->AutoSize = true;
			this->FORTValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FORTValue->Location = System::Drawing::Point(99, 16);
			this->FORTValue->Name = L"FORTValue";
			this->FORTValue->Size = System::Drawing::Size(22, 16);
			this->FORTValue->TabIndex = 52;
			this->FORTValue->Text = L"10";
			// 
			// REFValue
			// 
			this->REFValue->AutoSize = true;
			this->REFValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->REFValue->Location = System::Drawing::Point(99, 32);
			this->REFValue->Name = L"REFValue";
			this->REFValue->Size = System::Drawing::Size(22, 16);
			this->REFValue->TabIndex = 53;
			this->REFValue->Text = L"10";
			// 
			// WILLValue
			// 
			this->WILLValue->AutoSize = true;
			this->WILLValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WILLValue->Location = System::Drawing::Point(99, 52);
			this->WILLValue->Name = L"WILLValue";
			this->WILLValue->Size = System::Drawing::Size(22, 16);
			this->WILLValue->TabIndex = 54;
			this->WILLValue->Text = L"10";
			// 
			// InitiativeandSpeedTable
			// 
			this->InitiativeandSpeedTable->ColumnCount = 2;
			this->InitiativeandSpeedTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->InitiativeandSpeedTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->InitiativeandSpeedTable->Controls->Add(this->InitiativeLabel, 0, 0);
			this->InitiativeandSpeedTable->Controls->Add(this->InitiativeScore, 1, 0);
			this->InitiativeandSpeedTable->Controls->Add(this->SpeedLabel, 0, 1);
			this->InitiativeandSpeedTable->Controls->Add(this->PassiveInsightLabel, 0, 2);
			this->InitiativeandSpeedTable->Controls->Add(this->PassivePerceptionLabel, 0, 3);
			this->InitiativeandSpeedTable->Controls->Add(this->SpeedScore, 1, 1);
			this->InitiativeandSpeedTable->Controls->Add(this->PassivePerceptionScore, 1, 3);
			this->InitiativeandSpeedTable->Controls->Add(this->PassiveInsightScore, 1, 2);
			this->InitiativeandSpeedTable->Location = System::Drawing::Point(286, 101);
			this->InitiativeandSpeedTable->Name = L"InitiativeandSpeedTable";
			this->InitiativeandSpeedTable->RowCount = 4;
			this->InitiativeandSpeedTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->InitiativeandSpeedTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->InitiativeandSpeedTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->InitiativeandSpeedTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->InitiativeandSpeedTable->Size = System::Drawing::Size(285, 82);
			this->InitiativeandSpeedTable->TabIndex = 64;
			// 
			// InitiativeLabel
			// 
			this->InitiativeLabel->AutoSize = true;
			this->InitiativeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InitiativeLabel->Location = System::Drawing::Point(3, 0);
			this->InitiativeLabel->Name = L"InitiativeLabel";
			this->InitiativeLabel->Size = System::Drawing::Size(67, 20);
			this->InitiativeLabel->TabIndex = 27;
			this->InitiativeLabel->Text = L"Initiative";
			// 
			// InitiativeScore
			// 
			this->InitiativeScore->AutoSize = true;
			this->InitiativeScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InitiativeScore->Location = System::Drawing::Point(145, 0);
			this->InitiativeScore->Name = L"InitiativeScore";
			this->InitiativeScore->Size = System::Drawing::Size(22, 16);
			this->InitiativeScore->TabIndex = 55;
			this->InitiativeScore->Text = L"10";
			// 
			// SpeedLabel
			// 
			this->SpeedLabel->AutoSize = true;
			this->SpeedLabel->Location = System::Drawing::Point(3, 21);
			this->SpeedLabel->Name = L"SpeedLabel";
			this->SpeedLabel->Size = System::Drawing::Size(56, 20);
			this->SpeedLabel->TabIndex = 28;
			this->SpeedLabel->Text = L"Speed";
			// 
			// PassiveInsightLabel
			// 
			this->PassiveInsightLabel->AutoSize = true;
			this->PassiveInsightLabel->Location = System::Drawing::Point(3, 42);
			this->PassiveInsightLabel->Name = L"PassiveInsightLabel";
			this->PassiveInsightLabel->Size = System::Drawing::Size(115, 20);
			this->PassiveInsightLabel->TabIndex = 29;
			this->PassiveInsightLabel->Text = L"Passive Insight";
			// 
			// PassivePerceptionLabel
			// 
			this->PassivePerceptionLabel->AutoSize = true;
			this->PassivePerceptionLabel->Location = System::Drawing::Point(3, 62);
			this->PassivePerceptionLabel->Name = L"PassivePerceptionLabel";
			this->PassivePerceptionLabel->Size = System::Drawing::Size(85, 20);
			this->PassivePerceptionLabel->TabIndex = 30;
			this->PassivePerceptionLabel->Text = L"Passive Perception";
			// 
			// SpeedScore
			// 
			this->SpeedScore->AutoSize = true;
			this->SpeedScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SpeedScore->Location = System::Drawing::Point(145, 21);
			this->SpeedScore->Name = L"SpeedScore";
			this->SpeedScore->Size = System::Drawing::Size(22, 16);
			this->SpeedScore->TabIndex = 56;
			this->SpeedScore->Text = L"10";
			// 
			// PassivePerceptionScore
			// 
			this->PassivePerceptionScore->AutoSize = true;
			this->PassivePerceptionScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PassivePerceptionScore->Location = System::Drawing::Point(145, 62);
			this->PassivePerceptionScore->Name = L"PassivePerceptionScore";
			this->PassivePerceptionScore->Size = System::Drawing::Size(22, 16);
			this->PassivePerceptionScore->TabIndex = 58;
			this->PassivePerceptionScore->Text = L"10";
			// 
			// PassiveInsightScore
			// 
			this->PassiveInsightScore->AutoSize = true;
			this->PassiveInsightScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PassiveInsightScore->Location = System::Drawing::Point(145, 42);
			this->PassiveInsightScore->Name = L"PassiveInsightScore";
			this->PassiveInsightScore->Size = System::Drawing::Size(22, 16);
			this->PassiveInsightScore->TabIndex = 57;
			this->PassiveInsightScore->Text = L"10";
			// 
			// CurrentHealingSurges
			// 
			this->CurrentHealingSurges->AutoSize = true;
			this->CurrentHealingSurges->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentHealingSurges->Location = System::Drawing::Point(82, 193);
			this->CurrentHealingSurges->Name = L"CurrentHealingSurges";
			this->CurrentHealingSurges->Size = System::Drawing::Size(15, 16);
			this->CurrentHealingSurges->TabIndex = 63;
			this->CurrentHealingSurges->Text = L"8";
			// 
			// TotalHealth
			// 
			this->TotalHealth->AutoSize = true;
			this->TotalHealth->Location = System::Drawing::Point(164, 162);
			this->TotalHealth->Name = L"TotalHealth";
			this->TotalHealth->Size = System::Drawing::Size(27, 20);
			this->TotalHealth->TabIndex = 62;
			this->TotalHealth->Text = L"25";
			// 
			// UseSecondWind
			// 
			this->UseSecondWind->Location = System::Drawing::Point(425, 51);
			this->UseSecondWind->Name = L"UseSecondWind";
			this->UseSecondWind->Size = System::Drawing::Size(75, 26);
			this->UseSecondWind->TabIndex = 61;
			this->UseSecondWind->Text = L"Use";
			this->UseSecondWind->UseVisualStyleBackColor = true;
			this->UseSecondWind->Click += gcnew System::EventHandler(this, &MyForm::UseSecondWind_Click);
			// 
			// CurrentSecondWind
			// 
			this->CurrentSecondWind->AutoSize = true;
			this->CurrentSecondWind->Location = System::Drawing::Point(404, 54);
			this->CurrentSecondWind->Name = L"CurrentSecondWind";
			this->CurrentSecondWind->Size = System::Drawing::Size(18, 20);
			this->CurrentSecondWind->TabIndex = 60;
			this->CurrentSecondWind->Text = L"1";
			// 
			// CurrentActionPoints
			// 
			this->CurrentActionPoints->AutoSize = true;
			this->CurrentActionPoints->Location = System::Drawing::Point(404, 12);
			this->CurrentActionPoints->Name = L"CurrentActionPoints";
			this->CurrentActionPoints->Size = System::Drawing::Size(18, 20);
			this->CurrentActionPoints->TabIndex = 59;
			this->CurrentActionPoints->Text = L"2";
			// 
			// HealthSlashLabel
			// 
			this->HealthSlashLabel->AutoSize = true;
			this->HealthSlashLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HealthSlashLabel->Location = System::Drawing::Point(143, 162);
			this->HealthSlashLabel->Name = L"HealthSlashLabel";
			this->HealthSlashLabel->Size = System::Drawing::Size(15, 24);
			this->HealthSlashLabel->TabIndex = 37;
			this->HealthSlashLabel->Text = L"/";
			// 
			// Bloodied
			// 
			this->Bloodied->AutoSize = true;
			this->Bloodied->ForeColor = System::Drawing::Color::Red;
			this->Bloodied->Location = System::Drawing::Point(197, 162);
			this->Bloodied->Name = L"Bloodied";
			this->Bloodied->Size = System::Drawing::Size(71, 20);
			this->Bloodied->TabIndex = 36;
			this->Bloodied->Text = L"Bloodied";
			this->Bloodied->Visible = false;
			// 
			// ResistancesTextBox
			// 
			this->ResistancesTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ResistancesTextBox->Location = System::Drawing::Point(222, 313);
			this->ResistancesTextBox->Name = L"ResistancesTextBox";
			this->ResistancesTextBox->Size = System::Drawing::Size(357, 19);
			this->ResistancesTextBox->TabIndex = 35;
			this->ResistancesTextBox->Text = L"";
			// 
			// LanguagesTextBox
			// 
			this->LanguagesTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LanguagesTextBox->Location = System::Drawing::Point(355, 272);
			this->LanguagesTextBox->Name = L"LanguagesTextBox";
			this->LanguagesTextBox->Size = System::Drawing::Size(216, 20);
			this->LanguagesTextBox->TabIndex = 34;
			this->LanguagesTextBox->Text = L"";
			// 
			// SpecialSensesTextBox
			// 
			this->SpecialSensesTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SpecialSensesTextBox->Location = System::Drawing::Point(321, 236);
			this->SpecialSensesTextBox->Name = L"SpecialSensesTextBox";
			this->SpecialSensesTextBox->Size = System::Drawing::Size(252, 20);
			this->SpecialSensesTextBox->TabIndex = 33;
			this->SpecialSensesTextBox->Text = L"";
			// 
			// LanguagesLabel
			// 
			this->LanguagesLabel->AutoSize = true;
			this->LanguagesLabel->Location = System::Drawing::Point(259, 275);
			this->LanguagesLabel->Name = L"LanguagesLabel";
			this->LanguagesLabel->Size = System::Drawing::Size(93, 20);
			this->LanguagesLabel->TabIndex = 32;
			this->LanguagesLabel->Text = L"Languages:";
			// 
			// SpecialSensesLabel
			// 
			this->SpecialSensesLabel->AutoSize = true;
			this->SpecialSensesLabel->Location = System::Drawing::Point(259, 233);
			this->SpecialSensesLabel->Name = L"SpecialSensesLabel";
			this->SpecialSensesLabel->Size = System::Drawing::Size(56, 20);
			this->SpecialSensesLabel->TabIndex = 31;
			this->SpecialSensesLabel->Text = L"Vision:";
			// 
			// UseActionPoints
			// 
			this->UseActionPoints->Location = System::Drawing::Point(425, 9);
			this->UseActionPoints->Name = L"UseActionPoints";
			this->UseActionPoints->Size = System::Drawing::Size(75, 26);
			this->UseActionPoints->TabIndex = 25;
			this->UseActionPoints->Text = L"Use";
			this->UseActionPoints->UseVisualStyleBackColor = true;
			this->UseActionPoints->Click += gcnew System::EventHandler(this, &MyForm::UseActionPoints_Click);
			// 
			// SecondWindLabel
			// 
			this->SecondWindLabel->AutoSize = true;
			this->SecondWindLabel->Location = System::Drawing::Point(292, 51);
			this->SecondWindLabel->Name = L"SecondWindLabel";
			this->SecondWindLabel->Size = System::Drawing::Size(108, 20);
			this->SecondWindLabel->TabIndex = 22;
			this->SecondWindLabel->Text = L"Second Wind:";
			// 
			// ActionPointsLabel
			// 
			this->ActionPointsLabel->AutoSize = true;
			this->ActionPointsLabel->Location = System::Drawing::Point(285, 12);
			this->ActionPointsLabel->Name = L"ActionPointsLabel";
			this->ActionPointsLabel->Size = System::Drawing::Size(106, 20);
			this->ActionPointsLabel->TabIndex = 21;
			this->ActionPointsLabel->Text = L"Action Points:";
			// 
			// ResistancesLabel
			// 
			this->ResistancesLabel->AutoSize = true;
			this->ResistancesLabel->Location = System::Drawing::Point(16, 315);
			this->ResistancesLabel->Name = L"ResistancesLabel";
			this->ResistancesLabel->Size = System::Drawing::Size(203, 20);
			this->ResistancesLabel->TabIndex = 20;
			this->ResistancesLabel->Text = L"Resistances/Vulnerabilities:";
			// 
			// DefensesLabel
			// 
			this->DefensesLabel->AutoSize = true;
			this->DefensesLabel->Location = System::Drawing::Point(22, 216);
			this->DefensesLabel->Name = L"DefensesLabel";
			this->DefensesLabel->Size = System::Drawing::Size(78, 20);
			this->DefensesLabel->TabIndex = 15;
			this->DefensesLabel->Text = L"Defenses";
			// 
			// UseSurge
			// 
			this->UseSurge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UseSurge->Location = System::Drawing::Point(212, 185);
			this->UseSurge->Name = L"UseSurge";
			this->UseSurge->Size = System::Drawing::Size(82, 27);
			this->UseSurge->TabIndex = 14;
			this->UseSurge->Text = L"Use Surge";
			this->UseSurge->UseVisualStyleBackColor = true;
			this->UseSurge->Click += gcnew System::EventHandler(this, &MyForm::UseSurge_Click);
			// 
			// HealingSurgesLabel
			// 
			this->HealingSurgesLabel->AutoSize = true;
			this->HealingSurgesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HealingSurgesLabel->Location = System::Drawing::Point(24, 193);
			this->HealingSurgesLabel->Name = L"HealingSurgesLabel";
			this->HealingSurgesLabel->Size = System::Drawing::Size(51, 16);
			this->HealingSurgesLabel->TabIndex = 12;
			this->HealingSurgesLabel->Text = L"Surges";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 2;
			// 
			// CurrentHealth
			// 
			this->CurrentHealth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CurrentHealth->Location = System::Drawing::Point(83, 156);
			this->CurrentHealth->Name = L"CurrentHealth";
			this->CurrentHealth->Size = System::Drawing::Size(46, 26);
			this->CurrentHealth->TabIndex = 1;
			this->CurrentHealth->ValueChanged += gcnew System::EventHandler(this, &MyForm::CurrentHealth_ValueChanged);
			// 
			// HealthLabel
			// 
			this->HealthLabel->AutoSize = true;
			this->HealthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HealthLabel->Location = System::Drawing::Point(24, 165);
			this->HealthLabel->Name = L"HealthLabel";
			this->HealthLabel->Size = System::Drawing::Size(56, 20);
			this->HealthLabel->TabIndex = 0;
			this->HealthLabel->Text = L"Health\r\n";
			// 
			// skills_tab
			// 
			this->skills_tab->Controls->Add(this->SkilsValueTable2);
			this->skills_tab->Controls->Add(this->SkillsValueTable);
			this->skills_tab->Controls->Add(this->SkillsScoreLabel);
			this->skills_tab->Controls->Add(this->SkillsSkillLabel);
			this->skills_tab->Location = System::Drawing::Point(4, 27);
			this->skills_tab->Name = L"skills_tab";
			this->skills_tab->Padding = System::Windows::Forms::Padding(3);
			this->skills_tab->Size = System::Drawing::Size(595, 352);
			this->skills_tab->TabIndex = 1;
			this->skills_tab->Text = L"Skills";
			this->skills_tab->UseVisualStyleBackColor = true;
			// 
			// SkilsValueTable2
			// 
			this->SkilsValueTable2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->SkilsValueTable2->ColumnCount = 2;
			this->SkilsValueTable2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->SkilsValueTable2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->SkilsValueTable2->Controls->Add(this->HistoryLabel, 0, 0);
			this->SkilsValueTable2->Controls->Add(this->HistoryValue, 1, 0);
			this->SkilsValueTable2->Controls->Add(this->InsightLabel, 0, 1);
			this->SkilsValueTable2->Controls->Add(this->TheiveryValue, 1, 8);
			this->SkilsValueTable2->Controls->Add(this->TheiveryLabel, 0, 8);
			this->SkilsValueTable2->Controls->Add(this->InsightValue, 1, 1);
			this->SkilsValueTable2->Controls->Add(this->StreetwiseLabel, 0, 7);
			this->SkilsValueTable2->Controls->Add(this->StreetwiseValue, 1, 7);
			this->SkilsValueTable2->Controls->Add(this->IntimidateLabel, 0, 2);
			this->SkilsValueTable2->Controls->Add(this->StealthLabel, 0, 6);
			this->SkilsValueTable2->Controls->Add(this->IntimidateValue, 1, 2);
			this->SkilsValueTable2->Controls->Add(this->ReligionLabel, 0, 5);
			this->SkilsValueTable2->Controls->Add(this->NatureLabel, 0, 3);
			this->SkilsValueTable2->Controls->Add(this->PerceptionLabel, 0, 4);
			this->SkilsValueTable2->Controls->Add(this->ReligionValue, 1, 5);
			this->SkilsValueTable2->Controls->Add(this->NatureValue, 1, 3);
			this->SkilsValueTable2->Controls->Add(this->PerceptionValue, 1, 4);
			this->SkilsValueTable2->Controls->Add(this->StealthValue, 1, 6);
			this->SkilsValueTable2->Location = System::Drawing::Point(278, 72);
			this->SkilsValueTable2->Name = L"SkilsValueTable2";
			this->SkilsValueTable2->RowCount = 9;
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkilsValueTable2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkilsValueTable2->Size = System::Drawing::Size(237, 191);
			this->SkilsValueTable2->TabIndex = 5;
			// 
			// HistoryLabel
			// 
			this->HistoryLabel->AutoSize = true;
			this->HistoryLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HistoryLabel->Location = System::Drawing::Point(4, 1);
			this->HistoryLabel->Name = L"HistoryLabel";
			this->HistoryLabel->Size = System::Drawing::Size(55, 18);
			this->HistoryLabel->TabIndex = 7;
			this->HistoryLabel->Text = L"History";
			// 
			// HistoryValue
			// 
			this->HistoryValue->AutoSize = true;
			this->HistoryValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HistoryValue->Location = System::Drawing::Point(122, 1);
			this->HistoryValue->Name = L"HistoryValue";
			this->HistoryValue->Size = System::Drawing::Size(16, 18);
			this->HistoryValue->TabIndex = 22;
			this->HistoryValue->Text = L"5";
			// 
			// InsightLabel
			// 
			this->InsightLabel->AutoSize = true;
			this->InsightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsightLabel->Location = System::Drawing::Point(4, 22);
			this->InsightLabel->Name = L"InsightLabel";
			this->InsightLabel->Size = System::Drawing::Size(50, 18);
			this->InsightLabel->TabIndex = 8;
			this->InsightLabel->Text = L"Insight";
			// 
			// TheiveryValue
			// 
			this->TheiveryValue->AutoSize = true;
			this->TheiveryValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TheiveryValue->Location = System::Drawing::Point(122, 169);
			this->TheiveryValue->Name = L"TheiveryValue";
			this->TheiveryValue->Size = System::Drawing::Size(24, 18);
			this->TheiveryValue->TabIndex = 30;
			this->TheiveryValue->Text = L"10";
			// 
			// TheiveryLabel
			// 
			this->TheiveryLabel->AutoSize = true;
			this->TheiveryLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TheiveryLabel->Location = System::Drawing::Point(4, 169);
			this->TheiveryLabel->Name = L"TheiveryLabel";
			this->TheiveryLabel->Size = System::Drawing::Size(63, 18);
			this->TheiveryLabel->TabIndex = 15;
			this->TheiveryLabel->Text = L"Theivery";
			// 
			// InsightValue
			// 
			this->InsightValue->AutoSize = true;
			this->InsightValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsightValue->Location = System::Drawing::Point(122, 22);
			this->InsightValue->Name = L"InsightValue";
			this->InsightValue->Size = System::Drawing::Size(24, 18);
			this->InsightValue->TabIndex = 23;
			this->InsightValue->Text = L"10";
			// 
			// StreetwiseLabel
			// 
			this->StreetwiseLabel->AutoSize = true;
			this->StreetwiseLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->StreetwiseLabel->Location = System::Drawing::Point(4, 148);
			this->StreetwiseLabel->Name = L"StreetwiseLabel";
			this->StreetwiseLabel->Size = System::Drawing::Size(77, 18);
			this->StreetwiseLabel->TabIndex = 14;
			this->StreetwiseLabel->Text = L"Streetwise";
			// 
			// StreetwiseValue
			// 
			this->StreetwiseValue->AutoSize = true;
			this->StreetwiseValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->StreetwiseValue->Location = System::Drawing::Point(122, 148);
			this->StreetwiseValue->Name = L"StreetwiseValue";
			this->StreetwiseValue->Size = System::Drawing::Size(24, 18);
			this->StreetwiseValue->TabIndex = 29;
			this->StreetwiseValue->Text = L"11";
			// 
			// IntimidateLabel
			// 
			this->IntimidateLabel->AutoSize = true;
			this->IntimidateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IntimidateLabel->Location = System::Drawing::Point(4, 43);
			this->IntimidateLabel->Name = L"IntimidateLabel";
			this->IntimidateLabel->Size = System::Drawing::Size(70, 18);
			this->IntimidateLabel->TabIndex = 9;
			this->IntimidateLabel->Text = L"Intimidate";
			// 
			// StealthLabel
			// 
			this->StealthLabel->AutoSize = true;
			this->StealthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StealthLabel->Location = System::Drawing::Point(4, 127);
			this->StealthLabel->Name = L"StealthLabel";
			this->StealthLabel->Size = System::Drawing::Size(53, 18);
			this->StealthLabel->TabIndex = 13;
			this->StealthLabel->Text = L"Stealth";
			// 
			// IntimidateValue
			// 
			this->IntimidateValue->AutoSize = true;
			this->IntimidateValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IntimidateValue->Location = System::Drawing::Point(122, 43);
			this->IntimidateValue->Name = L"IntimidateValue";
			this->IntimidateValue->Size = System::Drawing::Size(16, 18);
			this->IntimidateValue->TabIndex = 24;
			this->IntimidateValue->Text = L"9";
			// 
			// ReligionLabel
			// 
			this->ReligionLabel->AutoSize = true;
			this->ReligionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReligionLabel->Location = System::Drawing::Point(4, 106);
			this->ReligionLabel->Name = L"ReligionLabel";
			this->ReligionLabel->Size = System::Drawing::Size(61, 18);
			this->ReligionLabel->TabIndex = 12;
			this->ReligionLabel->Text = L"Religion";
			// 
			// NatureLabel
			// 
			this->NatureLabel->AutoSize = true;
			this->NatureLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NatureLabel->Location = System::Drawing::Point(4, 64);
			this->NatureLabel->Name = L"NatureLabel";
			this->NatureLabel->Size = System::Drawing::Size(52, 18);
			this->NatureLabel->TabIndex = 10;
			this->NatureLabel->Text = L"Nature";
			// 
			// PerceptionLabel
			// 
			this->PerceptionLabel->AutoSize = true;
			this->PerceptionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PerceptionLabel->Location = System::Drawing::Point(4, 85);
			this->PerceptionLabel->Name = L"PerceptionLabel";
			this->PerceptionLabel->Size = System::Drawing::Size(79, 18);
			this->PerceptionLabel->TabIndex = 11;
			this->PerceptionLabel->Text = L"Perception";
			// 
			// ReligionValue
			// 
			this->ReligionValue->AutoSize = true;
			this->ReligionValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReligionValue->Location = System::Drawing::Point(122, 106);
			this->ReligionValue->Name = L"ReligionValue";
			this->ReligionValue->Size = System::Drawing::Size(16, 18);
			this->ReligionValue->TabIndex = 27;
			this->ReligionValue->Text = L"6";
			// 
			// NatureValue
			// 
			this->NatureValue->AutoSize = true;
			this->NatureValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NatureValue->Location = System::Drawing::Point(122, 64);
			this->NatureValue->Name = L"NatureValue";
			this->NatureValue->Size = System::Drawing::Size(24, 18);
			this->NatureValue->TabIndex = 25;
			this->NatureValue->Text = L"11";
			// 
			// PerceptionValue
			// 
			this->PerceptionValue->AutoSize = true;
			this->PerceptionValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PerceptionValue->Location = System::Drawing::Point(122, 85);
			this->PerceptionValue->Name = L"PerceptionValue";
			this->PerceptionValue->Size = System::Drawing::Size(16, 18);
			this->PerceptionValue->TabIndex = 26;
			this->PerceptionValue->Text = L"4";
			// 
			// StealthValue
			// 
			this->StealthValue->AutoSize = true;
			this->StealthValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StealthValue->Location = System::Drawing::Point(122, 127);
			this->StealthValue->Name = L"StealthValue";
			this->StealthValue->Size = System::Drawing::Size(24, 18);
			this->StealthValue->TabIndex = 28;
			this->StealthValue->Text = L"10";
			// 
			// SkillsValueTable
			// 
			this->SkillsValueTable->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->SkillsValueTable->ColumnCount = 2;
			this->SkillsValueTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->SkillsValueTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->SkillsValueTable->Controls->Add(this->ArcanaValue, 1, 1);
			this->SkillsValueTable->Controls->Add(this->ArcanaLabel, 0, 1);
			this->SkillsValueTable->Controls->Add(this->AcrobaticsValue, 1, 0);
			this->SkillsValueTable->Controls->Add(this->HealLabel, 0, 7);
			this->SkillsValueTable->Controls->Add(this->EnduranceLabel, 0, 6);
			this->SkillsValueTable->Controls->Add(this->DungeneeringLabel, 0, 5);
			this->SkillsValueTable->Controls->Add(this->DiplomacyLabel, 0, 4);
			this->SkillsValueTable->Controls->Add(this->BluffLabel, 0, 3);
			this->SkillsValueTable->Controls->Add(this->HealValue, 1, 7);
			this->SkillsValueTable->Controls->Add(this->EnduranceValue, 1, 6);
			this->SkillsValueTable->Controls->Add(this->DungeneeringValue, 1, 5);
			this->SkillsValueTable->Controls->Add(this->DiplomacyValue, 1, 4);
			this->SkillsValueTable->Controls->Add(this->BluffValue, 1, 3);
			this->SkillsValueTable->Controls->Add(this->AthleticsLabel, 0, 2);
			this->SkillsValueTable->Controls->Add(this->AcrobaticsLabel, 0, 0);
			this->SkillsValueTable->Controls->Add(this->AthleticsValue, 1, 2);
			this->SkillsValueTable->Location = System::Drawing::Point(21, 72);
			this->SkillsValueTable->Name = L"SkillsValueTable";
			this->SkillsValueTable->RowCount = 8;
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->SkillsValueTable->Size = System::Drawing::Size(236, 169);
			this->SkillsValueTable->TabIndex = 4;
			this->SkillsValueTable->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::SkillsValueTable_Paint);
			// 
			// ArcanaValue
			// 
			this->ArcanaValue->AutoSize = true;
			this->ArcanaValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArcanaValue->Location = System::Drawing::Point(121, 22);
			this->ArcanaValue->Name = L"ArcanaValue";
			this->ArcanaValue->Size = System::Drawing::Size(24, 18);
			this->ArcanaValue->TabIndex = 17;
			this->ArcanaValue->Text = L"13";
			// 
			// ArcanaLabel
			// 
			this->ArcanaLabel->AutoSize = true;
			this->ArcanaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArcanaLabel->Location = System::Drawing::Point(4, 22);
			this->ArcanaLabel->Name = L"ArcanaLabel";
			this->ArcanaLabel->Size = System::Drawing::Size(54, 18);
			this->ArcanaLabel->TabIndex = 1;
			this->ArcanaLabel->Text = L"Arcana";
			// 
			// AcrobaticsValue
			// 
			this->AcrobaticsValue->AutoSize = true;
			this->AcrobaticsValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AcrobaticsValue->Location = System::Drawing::Point(121, 1);
			this->AcrobaticsValue->Name = L"AcrobaticsValue";
			this->AcrobaticsValue->Size = System::Drawing::Size(24, 18);
			this->AcrobaticsValue->TabIndex = 16;
			this->AcrobaticsValue->Text = L"10";
			// 
			// HealLabel
			// 
			this->HealLabel->AutoSize = true;
			this->HealLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HealLabel->Location = System::Drawing::Point(4, 148);
			this->HealLabel->Name = L"HealLabel";
			this->HealLabel->Size = System::Drawing::Size(38, 18);
			this->HealLabel->TabIndex = 6;
			this->HealLabel->Text = L"Heal";
			// 
			// EnduranceLabel
			// 
			this->EnduranceLabel->AutoSize = true;
			this->EnduranceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnduranceLabel->Location = System::Drawing::Point(4, 127);
			this->EnduranceLabel->Name = L"EnduranceLabel";
			this->EnduranceLabel->Size = System::Drawing::Size(79, 18);
			this->EnduranceLabel->TabIndex = 5;
			this->EnduranceLabel->Text = L"Endurance";
			// 
			// DungeneeringLabel
			// 
			this->DungeneeringLabel->AutoSize = true;
			this->DungeneeringLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DungeneeringLabel->Location = System::Drawing::Point(4, 106);
			this->DungeneeringLabel->Name = L"DungeneeringLabel";
			this->DungeneeringLabel->Size = System::Drawing::Size(99, 18);
			this->DungeneeringLabel->TabIndex = 4;
			this->DungeneeringLabel->Text = L"Dungeneering";
			// 
			// DiplomacyLabel
			// 
			this->DiplomacyLabel->AutoSize = true;
			this->DiplomacyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiplomacyLabel->Location = System::Drawing::Point(4, 85);
			this->DiplomacyLabel->Name = L"DiplomacyLabel";
			this->DiplomacyLabel->Size = System::Drawing::Size(78, 18);
			this->DiplomacyLabel->TabIndex = 3;
			this->DiplomacyLabel->Text = L"Diplomacy";
			// 
			// BluffLabel
			// 
			this->BluffLabel->AutoSize = true;
			this->BluffLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BluffLabel->Location = System::Drawing::Point(4, 64);
			this->BluffLabel->Name = L"BluffLabel";
			this->BluffLabel->Size = System::Drawing::Size(37, 18);
			this->BluffLabel->TabIndex = 2;
			this->BluffLabel->Text = L"Bluff";
			// 
			// HealValue
			// 
			this->HealValue->AutoSize = true;
			this->HealValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HealValue->Location = System::Drawing::Point(121, 148);
			this->HealValue->Name = L"HealValue";
			this->HealValue->Size = System::Drawing::Size(24, 18);
			this->HealValue->TabIndex = 21;
			this->HealValue->Text = L"12";
			// 
			// EnduranceValue
			// 
			this->EnduranceValue->AutoSize = true;
			this->EnduranceValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnduranceValue->Location = System::Drawing::Point(121, 127);
			this->EnduranceValue->Name = L"EnduranceValue";
			this->EnduranceValue->Size = System::Drawing::Size(16, 18);
			this->EnduranceValue->TabIndex = 20;
			this->EnduranceValue->Text = L"8";
			// 
			// DungeneeringValue
			// 
			this->DungeneeringValue->AutoSize = true;
			this->DungeneeringValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DungeneeringValue->Location = System::Drawing::Point(121, 106);
			this->DungeneeringValue->Name = L"DungeneeringValue";
			this->DungeneeringValue->Size = System::Drawing::Size(16, 18);
			this->DungeneeringValue->TabIndex = 19;
			this->DungeneeringValue->Text = L"3";
			// 
			// DiplomacyValue
			// 
			this->DiplomacyValue->AutoSize = true;
			this->DiplomacyValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiplomacyValue->Location = System::Drawing::Point(121, 85);
			this->DiplomacyValue->Name = L"DiplomacyValue";
			this->DiplomacyValue->Size = System::Drawing::Size(24, 18);
			this->DiplomacyValue->TabIndex = 18;
			this->DiplomacyValue->Text = L"10";
			// 
			// BluffValue
			// 
			this->BluffValue->AutoSize = true;
			this->BluffValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BluffValue->Location = System::Drawing::Point(121, 64);
			this->BluffValue->Name = L"BluffValue";
			this->BluffValue->Size = System::Drawing::Size(16, 18);
			this->BluffValue->TabIndex = 17;
			this->BluffValue->Text = L"7";
			// 
			// AthleticsLabel
			// 
			this->AthleticsLabel->AutoSize = true;
			this->AthleticsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AthleticsLabel->Location = System::Drawing::Point(4, 43);
			this->AthleticsLabel->Name = L"AthleticsLabel";
			this->AthleticsLabel->Size = System::Drawing::Size(63, 18);
			this->AthleticsLabel->TabIndex = 31;
			this->AthleticsLabel->Text = L"Athletics";
			// 
			// AcrobaticsLabel
			// 
			this->AcrobaticsLabel->AutoSize = true;
			this->AcrobaticsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AcrobaticsLabel->Location = System::Drawing::Point(4, 1);
			this->AcrobaticsLabel->Name = L"AcrobaticsLabel";
			this->AcrobaticsLabel->Size = System::Drawing::Size(78, 18);
			this->AcrobaticsLabel->TabIndex = 0;
			this->AcrobaticsLabel->Text = L"Acrobatics";
			// 
			// AthleticsValue
			// 
			this->AthleticsValue->AutoSize = true;
			this->AthleticsValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AthleticsValue->Location = System::Drawing::Point(121, 43);
			this->AthleticsValue->Name = L"AthleticsValue";
			this->AthleticsValue->Size = System::Drawing::Size(16, 18);
			this->AthleticsValue->TabIndex = 32;
			this->AthleticsValue->Text = L"7";
			// 
			// SkillsScoreLabel
			// 
			this->SkillsScoreLabel->AutoSize = true;
			this->SkillsScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SkillsScoreLabel->Location = System::Drawing::Point(169, 52);
			this->SkillsScoreLabel->Name = L"SkillsScoreLabel";
			this->SkillsScoreLabel->Size = System::Drawing::Size(56, 20);
			this->SkillsScoreLabel->TabIndex = 1;
			this->SkillsScoreLabel->Text = L"Score";
			// 
			// SkillsSkillLabel
			// 
			this->SkillsSkillLabel->AutoSize = true;
			this->SkillsSkillLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SkillsSkillLabel->Location = System::Drawing::Point(49, 52);
			this->SkillsSkillLabel->Name = L"SkillsSkillLabel";
			this->SkillsSkillLabel->Size = System::Drawing::Size(42, 20);
			this->SkillsSkillLabel->TabIndex = 0;
			this->SkillsSkillLabel->Text = L"Skill";
			// 
			// abilities_tab
			// 
			this->abilities_tab->Location = System::Drawing::Point(4, 27);
			this->abilities_tab->Name = L"abilities_tab";
			this->abilities_tab->Padding = System::Windows::Forms::Padding(3);
			this->abilities_tab->Size = System::Drawing::Size(595, 352);
			this->abilities_tab->TabIndex = 2;
			this->abilities_tab->Text = L"Abilities";
			this->abilities_tab->UseVisualStyleBackColor = true;
			// 
			// item_tab
			// 
			this->item_tab->Controls->Add(this->numericUpDown2);
			this->item_tab->Controls->Add(this->gold_label);
			this->item_tab->Controls->Add(this->equipment);
			this->item_tab->Controls->Add(this->items);
			this->item_tab->Controls->Add(this->items_txt_box);
			this->item_tab->Controls->Add(this->tableLayoutPanel1);
			this->item_tab->Location = System::Drawing::Point(4, 27);
			this->item_tab->Name = L"item_tab";
			this->item_tab->Padding = System::Windows::Forms::Padding(3);
			this->item_tab->Size = System::Drawing::Size(595, 352);
			this->item_tab->TabIndex = 3;
			this->item_tab->Text = L"Items/Gold";
			this->item_tab->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(88, 17);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 26);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// gold_label
			// 
			this->gold_label->AutoSize = true;
			this->gold_label->Location = System::Drawing::Point(34, 18);
			this->gold_label->Name = L"gold_label";
			this->gold_label->Size = System::Drawing::Size(47, 20);
			this->gold_label->TabIndex = 4;
			this->gold_label->Text = L"Gold:";
			// 
			// equipment
			// 
			this->equipment->AutoSize = true;
			this->equipment->Location = System::Drawing::Point(283, 61);
			this->equipment->Name = L"equipment";
			this->equipment->Size = System::Drawing::Size(86, 20);
			this->equipment->TabIndex = 3;
			this->equipment->Text = L"Equipment";
			// 
			// items
			// 
			this->items->AutoSize = true;
			this->items->Location = System::Drawing::Point(32, 61);
			this->items->Name = L"items";
			this->items->Size = System::Drawing::Size(49, 20);
			this->items->TabIndex = 2;
			this->items->Text = L"Items";
			// 
			// items_txt_box
			// 
			this->items_txt_box->Location = System::Drawing::Point(30, 84);
			this->items_txt_box->Name = L"items_txt_box";
			this->items_txt_box->Size = System::Drawing::Size(229, 262);
			this->items_txt_box->TabIndex = 1;
			this->items_txt_box->Text = L"";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49)));
			this->tableLayoutPanel1->Controls->Add(this->neck, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->head, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->arms, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->rings, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->hands, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->main_hand, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->off_hand, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->waist, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->armour, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->feet, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->tattoo, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->ki_focus, 0, 11);
			this->tableLayoutPanel1->Controls->Add(this->head_equip, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->neck_equip, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->arm_equip, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->ring_equip, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->hand_equip, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->mainhand_equip, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->offhand_equip, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->waist_equip, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->armour_equip, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->feet_equip, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->tattoo_equip, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->ki_focus_equip, 1, 11);
			this->tableLayoutPanel1->Location = System::Drawing::Point(287, 84);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 12;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(287, 262);
			this->tableLayoutPanel1->TabIndex = 11;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint_1);
			// 
			// neck
			// 
			this->neck->AutoSize = true;
			this->neck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->neck->Location = System::Drawing::Point(4, 22);
			this->neck->Name = L"neck";
			this->neck->Size = System::Drawing::Size(40, 17);
			this->neck->TabIndex = 1;
			this->neck->Text = L"Neck";
			// 
			// head
			// 
			this->head->AutoSize = true;
			this->head->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->head->Location = System::Drawing::Point(4, 1);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(42, 16);
			this->head->TabIndex = 0;
			this->head->Text = L"Head";
			// 
			// arms
			// 
			this->arms->AutoSize = true;
			this->arms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->arms->Location = System::Drawing::Point(4, 43);
			this->arms->Name = L"arms";
			this->arms->Size = System::Drawing::Size(40, 17);
			this->arms->TabIndex = 2;
			this->arms->Text = L"Arms";
			// 
			// rings
			// 
			this->rings->AutoSize = true;
			this->rings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->rings->Location = System::Drawing::Point(4, 64);
			this->rings->Name = L"rings";
			this->rings->Size = System::Drawing::Size(44, 17);
			this->rings->TabIndex = 4;
			this->rings->Text = L"Rings";
			// 
			// hands
			// 
			this->hands->AutoSize = true;
			this->hands->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->hands->Location = System::Drawing::Point(4, 85);
			this->hands->Name = L"hands";
			this->hands->Size = System::Drawing::Size(49, 17);
			this->hands->TabIndex = 5;
			this->hands->Text = L"Hands";
			// 
			// main_hand
			// 
			this->main_hand->AutoSize = true;
			this->main_hand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->main_hand->Location = System::Drawing::Point(4, 106);
			this->main_hand->Name = L"main_hand";
			this->main_hand->Size = System::Drawing::Size(76, 17);
			this->main_hand->TabIndex = 6;
			this->main_hand->Text = L"Main Hand";
			// 
			// off_hand
			// 
			this->off_hand->AutoSize = true;
			this->off_hand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->off_hand->Location = System::Drawing::Point(4, 127);
			this->off_hand->Name = L"off_hand";
			this->off_hand->Size = System::Drawing::Size(65, 17);
			this->off_hand->TabIndex = 7;
			this->off_hand->Text = L"Off Hand";
			// 
			// waist
			// 
			this->waist->AutoSize = true;
			this->waist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->waist->Location = System::Drawing::Point(4, 148);
			this->waist->Name = L"waist";
			this->waist->Size = System::Drawing::Size(43, 17);
			this->waist->TabIndex = 8;
			this->waist->Text = L"Waist";
			// 
			// armour
			// 
			this->armour->AutoSize = true;
			this->armour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->armour->Location = System::Drawing::Point(4, 169);
			this->armour->Name = L"armour";
			this->armour->Size = System::Drawing::Size(54, 17);
			this->armour->TabIndex = 9;
			this->armour->Text = L"Armour";
			// 
			// feet
			// 
			this->feet->AutoSize = true;
			this->feet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->feet->Location = System::Drawing::Point(4, 190);
			this->feet->Name = L"feet";
			this->feet->Size = System::Drawing::Size(36, 17);
			this->feet->TabIndex = 10;
			this->feet->Text = L"Feet";
			// 
			// tattoo
			// 
			this->tattoo->AutoSize = true;
			this->tattoo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tattoo->Location = System::Drawing::Point(4, 211);
			this->tattoo->Name = L"tattoo";
			this->tattoo->Size = System::Drawing::Size(49, 17);
			this->tattoo->TabIndex = 11;
			this->tattoo->Text = L"Tattoo";
			// 
			// ki_focus
			// 
			this->ki_focus->AutoSize = true;
			this->ki_focus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ki_focus->Location = System::Drawing::Point(4, 232);
			this->ki_focus->Name = L"ki_focus";
			this->ki_focus->Size = System::Drawing::Size(62, 17);
			this->ki_focus->TabIndex = 12;
			this->ki_focus->Text = L"Ki Focus";
			// 
			// head_equip
			// 
			this->head_equip->AutoSize = true;
			this->head_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->head_equip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->head_equip->Location = System::Drawing::Point(112, 1);
			this->head_equip->Name = L"head_equip";
			this->head_equip->Size = System::Drawing::Size(171, 20);
			this->head_equip->TabIndex = 24;
			// 
			// neck_equip
			// 
			this->neck_equip->AutoSize = true;
			this->neck_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->neck_equip->Location = System::Drawing::Point(112, 22);
			this->neck_equip->Name = L"neck_equip";
			this->neck_equip->Size = System::Drawing::Size(171, 20);
			this->neck_equip->TabIndex = 25;
			// 
			// arm_equip
			// 
			this->arm_equip->AutoSize = true;
			this->arm_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->arm_equip->Location = System::Drawing::Point(112, 43);
			this->arm_equip->Name = L"arm_equip";
			this->arm_equip->Size = System::Drawing::Size(171, 20);
			this->arm_equip->TabIndex = 26;
			// 
			// ring_equip
			// 
			this->ring_equip->AutoSize = true;
			this->ring_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ring_equip->Location = System::Drawing::Point(112, 64);
			this->ring_equip->Name = L"ring_equip";
			this->ring_equip->Size = System::Drawing::Size(171, 20);
			this->ring_equip->TabIndex = 27;
			// 
			// hand_equip
			// 
			this->hand_equip->AutoSize = true;
			this->hand_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hand_equip->Location = System::Drawing::Point(112, 85);
			this->hand_equip->Name = L"hand_equip";
			this->hand_equip->Size = System::Drawing::Size(171, 20);
			this->hand_equip->TabIndex = 28;
			// 
			// mainhand_equip
			// 
			this->mainhand_equip->AutoSize = true;
			this->mainhand_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainhand_equip->Location = System::Drawing::Point(112, 106);
			this->mainhand_equip->Name = L"mainhand_equip";
			this->mainhand_equip->Size = System::Drawing::Size(171, 20);
			this->mainhand_equip->TabIndex = 29;
			// 
			// offhand_equip
			// 
			this->offhand_equip->AutoSize = true;
			this->offhand_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->offhand_equip->Location = System::Drawing::Point(112, 127);
			this->offhand_equip->Name = L"offhand_equip";
			this->offhand_equip->Size = System::Drawing::Size(171, 20);
			this->offhand_equip->TabIndex = 30;
			// 
			// waist_equip
			// 
			this->waist_equip->AutoSize = true;
			this->waist_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->waist_equip->Location = System::Drawing::Point(112, 148);
			this->waist_equip->Name = L"waist_equip";
			this->waist_equip->Size = System::Drawing::Size(171, 20);
			this->waist_equip->TabIndex = 31;
			// 
			// armour_equip
			// 
			this->armour_equip->AutoSize = true;
			this->armour_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->armour_equip->Location = System::Drawing::Point(112, 169);
			this->armour_equip->Name = L"armour_equip";
			this->armour_equip->Size = System::Drawing::Size(171, 20);
			this->armour_equip->TabIndex = 32;
			// 
			// feet_equip
			// 
			this->feet_equip->AutoSize = true;
			this->feet_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->feet_equip->Location = System::Drawing::Point(112, 190);
			this->feet_equip->Name = L"feet_equip";
			this->feet_equip->Size = System::Drawing::Size(171, 20);
			this->feet_equip->TabIndex = 33;
			// 
			// tattoo_equip
			// 
			this->tattoo_equip->AutoSize = true;
			this->tattoo_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tattoo_equip->Location = System::Drawing::Point(112, 211);
			this->tattoo_equip->Name = L"tattoo_equip";
			this->tattoo_equip->Size = System::Drawing::Size(171, 20);
			this->tattoo_equip->TabIndex = 34;
			// 
			// ki_focus_equip
			// 
			this->ki_focus_equip->AutoSize = true;
			this->ki_focus_equip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ki_focus_equip->Location = System::Drawing::Point(112, 232);
			this->ki_focus_equip->Name = L"ki_focus_equip";
			this->ki_focus_equip->Size = System::Drawing::Size(171, 29);
			this->ki_focus_equip->TabIndex = 35;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->notes_box);
			this->tabPage5->Controls->Add(this->Notes);
			this->tabPage5->Location = System::Drawing::Point(4, 27);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(595, 352);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Character/Notes";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// notes_box
			// 
			this->notes_box->Location = System::Drawing::Point(31, 99);
			this->notes_box->Name = L"notes_box";
			this->notes_box->Size = System::Drawing::Size(534, 227);
			this->notes_box->TabIndex = 2;
			this->notes_box->Text = L"";
			// 
			// Notes
			// 
			this->Notes->AutoSize = true;
			this->Notes->Location = System::Drawing::Point(27, 62);
			this->Notes->Name = L"Notes";
			this->Notes->Size = System::Drawing::Size(51, 20);
			this->Notes->TabIndex = 1;
			this->Notes->Text = L"Notes";
			// 
			// NewDayButton
			// 
			this->NewDayButton->Location = System::Drawing::Point(517, 397);
			this->NewDayButton->Name = L"NewDayButton";
			this->NewDayButton->Size = System::Drawing::Size(83, 26);
			this->NewDayButton->TabIndex = 1;
			this->NewDayButton->Text = L"New Day";
			this->NewDayButton->UseVisualStyleBackColor = true;
			this->NewDayButton->Click += gcnew System::EventHandler(this, &MyForm::NewDay_Click);
			// 
			// NewEncounterButton
			// 
			this->NewEncounterButton->Location = System::Drawing::Point(360, 380);
			this->NewEncounterButton->Name = L"NewEncounterButton";
			this->NewEncounterButton->Size = System::Drawing::Size(106, 38);
			this->NewEncounterButton->TabIndex = 2;
			this->NewEncounterButton->Text = L"New Encounter";
			this->NewEncounterButton->UseVisualStyleBackColor = true;
			// 
			// EndTurnButton
			// 
			this->EndTurnButton->Location = System::Drawing::Point(5, 380);
			this->EndTurnButton->Name = L"EndTurnButton";
			this->EndTurnButton->Size = System::Drawing::Size(106, 38);
			this->EndTurnButton->TabIndex = 3;
			this->EndTurnButton->Text = L"End Turn";
			this->EndTurnButton->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Roll ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"4", L"6", L"8", L"10", L"12", L"20", L"100" });
			this->comboBox1->Location = System::Drawing::Point(193, 390);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(69, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(268, 398);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"-Sided Dice";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Roll Dice";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// DiceSizeLabel
			// 
			this->DiceSizeLabel->AutoSize = true;
			this->DiceSizeLabel->Location = System::Drawing::Point(111, 405);
			this->DiceSizeLabel->Name = L"DiceSizeLabel";
			this->DiceSizeLabel->Size = System::Drawing::Size(52, 13);
			this->DiceSizeLabel->TabIndex = 22;
			this->DiceSizeLabel->Text = L"Dice Size";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"4");
			this->domainUpDown1->Items->Add(L"6");
			this->domainUpDown1->Items->Add(L"8");
			this->domainUpDown1->Items->Add(L"10");
			this->domainUpDown1->Items->Add(L"12");
			this->domainUpDown1->Items->Add(L"20");
			this->domainUpDown1->Items->Add(L"100");
			this->domainUpDown1->Location = System::Drawing::Point(164, 402);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(51, 20);
			this->domainUpDown1->TabIndex = 23;
			this->domainUpDown1->Text = L"4";
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &MyForm::domainUpDown1_SelectedItemChanged);
			// 
			// NumDiceLabel
			// 
			this->NumDiceLabel->AutoSize = true;
			this->NumDiceLabel->Location = System::Drawing::Point(6, 405);
			this->NumDiceLabel->Name = L"NumDiceLabel";
			this->NumDiceLabel->Size = System::Drawing::Size(66, 13);
			this->NumDiceLabel->TabIndex = 24;
			this->NumDiceLabel->Text = L"Num of Dice";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(72, 403);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(33, 20);
			this->numericUpDown1->TabIndex = 25;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// ShortRestButton
			// 
			this->ShortRestButton->Location = System::Drawing::Point(409, 399);
			this->ShortRestButton->Name = L"ShortRestButton";
			this->ShortRestButton->Size = System::Drawing::Size(102, 23);
			this->ShortRestButton->TabIndex = 26;
			this->ShortRestButton->Text = L"Short Rest";
			this->ShortRestButton->UseVisualStyleBackColor = true;
			this->ShortRestButton->Click += gcnew System::EventHandler(this, &MyForm::ShortRestButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"DnD Character Sheet XML (*.xml)|*.xml";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 441);
			this->Controls->Add(this->ShortRestButton);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->NumDiceLabel);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->DiceSizeLabel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tab_control);
			this->Controls->Add(this->NewDayButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Text = L"D&D Interactive Character Sheet";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tab_control->ResumeLayout(false);
			this->stats_tab->ResumeLayout(false);
			this->stats_tab->PerformLayout();
			this->AbilitiesScoreCheckTable->ResumeLayout(false);
			this->AbilitiesScoreCheckTable->PerformLayout();
			this->DefensesTable->ResumeLayout(false);
			this->DefensesTable->PerformLayout();
			this->InitiativeandSpeedTable->ResumeLayout(false);
			this->InitiativeandSpeedTable->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentHealth))->EndInit();
			this->skills_tab->ResumeLayout(false);
			this->skills_tab->PerformLayout();
			this->SkilsValueTable2->ResumeLayout(false);
			this->SkilsValueTable2->PerformLayout();
			this->SkillsValueTable->ResumeLayout(false);
			this->SkillsValueTable->PerformLayout();
			this->item_tab->ResumeLayout(false);
			this->item_tab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 XMLParser parser(fileName);
				 testChar = parser.makeCharacter();

				 // LOAD CHARACTER VALUES INTO GUI
				 // LOAD INTO STATS TAB

				 int totalHP = testChar.originalHP;
				 std::string s = std::to_string(totalHP);
				 String^ totalHealth = gcnew String(s.c_str());
				 // add total Health
				 this->TotalHealth->Text = totalHealth;
				 // add Current Health
				 this->CurrentHealth->Text = totalHealth;
				 // add Action Points
				 int currentActionPoints = testChar.currentActionPoints;
				 std::string s2 = std::to_string(currentActionPoints);
				 String^ totalActionPoints = gcnew String(s2.c_str());
				 this->CurrentActionPoints->Text = totalActionPoints;
				 // add Healing Surges
				 int healingSurges = testChar.currentSurges;
				 std::string s3 = std::to_string(healingSurges);
				 String^ totalHealingSurges = gcnew String(s3.c_str());
				 this->CurrentHealingSurges->Text = totalHealingSurges;
				 // add Healing Surge Value
				 int healingValue = testChar.surgeValue;
				 std::string s4 = std::to_string(healingValue);
				 String^ totalHealingVal = gcnew String(s4.c_str());
				 this->SurgeValueVal->Text = totalHealingVal;
				 // add SecondWind
				 bool SecondWindUsed = testChar.secondWindUsed;
				 if (SecondWindUsed == true){
					 this->CurrentSecondWind->Text = "0";
				 }
				 else{
					 this->CurrentSecondWind->Text = "1";
				 }

				 // add STR value
				 int STRval = testChar.abilityScoreArray[0];
				 s = std::to_string(STRval);
				 String^ newSTR = gcnew String(s.c_str());
				 this->STRScoreLabel->Text = newSTR;
				 // add DEX value
				 int DEXval = testChar.abilityScoreArray[1];
				 s = std::to_string(DEXval);
				 String^ newDEX = gcnew String(s.c_str());
				 this->DEXScoreLabel->Text = newDEX;
				 // add CON value
				 int CONval = testChar.abilityScoreArray[2];
				 s = std::to_string(CONval);
				 String^ newCON = gcnew String(s.c_str());
				 this->CONScoreLabel->Text = newCON;
				 // add INT value
				 int INTval = testChar.abilityScoreArray[3];
				 s = std::to_string(INTval);
				 String^ newINT = gcnew String(s.c_str());
				 this->INTScoreLabel->Text = newINT;
				 // add WIS value
				 int WISval = testChar.abilityScoreArray[4];
				 s = std::to_string(WISval);
				 String^ newWIS = gcnew String(s.c_str());
				 this->WISScoreLabel->Text = newWIS;
				 // add CHA value
				 int CHAval = testChar.abilityScoreArray[5];
				 s = std::to_string(CHAval);
				 String^ newCHA = gcnew String(s.c_str());
				 this->CHAScoreLabel->Text = newCHA;
				 // add STR check value
				 int STRvalC = testChar.abilityModArray[0];
				 s = std::to_string(STRvalC);
				 String^ newSTRC = gcnew String(s.c_str());
				 this->STRCheckLabel->Text = newSTRC;
				 // add DEX check value
				 int DEXvalC = testChar.abilityModArray[1];
				 s = std::to_string(DEXvalC);
				 String^ newDEXC = gcnew String(s.c_str());
				 this->DEXCheckLabel->Text = newDEXC;
				 // add CON check value
				 int CONvalC = testChar.abilityModArray[2];
				 s = std::to_string(CONvalC);
				 String^ newCONC = gcnew String(s.c_str());
				 this->CONCheckLabel->Text = newCONC;
				 // add INT check value
				 int INTvalC = testChar.abilityModArray[3];
				 s = std::to_string(INTvalC);
				 String^ newINTC = gcnew String(s.c_str());
				 this->INTCheckLabel->Text = newINTC;
				 // add WIS check value
				 int WISvalC = testChar.abilityModArray[4];
				 s = std::to_string(WISvalC);
				 String^ newWISC = gcnew String(s.c_str());
				 this->WISCheckLabel->Text = newWISC;
				 // add CHA check value
				 int CHAvalC = testChar.abilityModArray[5];
				 s = std::to_string(CHAvalC);
				 String^ newCHAC = gcnew String(s.c_str());
				 this->CHACheckLabel->Text = newCHAC;

				 // add AC value
				 int ACval = testChar.defensesArray[0];
				 s = std::to_string(ACval);
				 String^ newAC = gcnew String(s.c_str());
				 this->ACValue->Text = newAC;
				 // add FORT value
				 int FORTval = testChar.defensesArray[1];
				 s = std::to_string(FORTval);
				 String^ newFORT = gcnew String(s.c_str());
				 this->FORTValue->Text = newFORT;
				 // add REF value
				 int REFval = testChar.defensesArray[2];
				 s = std::to_string(REFval);
				 String^ newREF = gcnew String(s.c_str());
				 this->REFValue->Text = newREF;
				 // add WILL value
				 int WILLval = testChar.defensesArray[3];
				 s = std::to_string(WILLval);
				 String^ newWILL = gcnew String(s.c_str());
				 this->WILLValue->Text = newWILL;

				 // add Initiative value
				 int InitVal = testChar.initiative;
				 s = std::to_string(InitVal);
				 String^ newInit = gcnew String(s.c_str());
				 this->InitiativeScore->Text = newInit;
				 // add Speed value
				 int SpeedVal = testChar.speed;
				 s = std::to_string(SpeedVal);
				 String^ newSpeed = gcnew String(s.c_str());
				 this->SpeedScore->Text = newSpeed;
				 // add passive 
				 int PPVal = testChar.passives[0];
				 s = std::to_string(PPVal);
				 String^ newPP = gcnew String(s.c_str());
				 this->PassivePerceptionScore->Text = newPP;
				 // add passive insight
				 int PIVal = testChar.passives[1];
				 s = std::to_string(PIVal);
				 String^ newPI = gcnew String(s.c_str());
				 this->PassiveInsightScore->Text = newPI;

				 // add languages
				 vector<string> langs = testChar.languages;
				 int size = langs.size();
				 string lang;
				 for (int i = 0; i < size; i++){
					 lang.append(langs[i]);
					 lang.append(" ");
				 }
				 String^ newLangs = gcnew String(lang.c_str());
				 this->LanguagesTextBox->Text = newLangs;

				 //add resistances
				 vector<string> resist = testChar.resistances;
				 size = resist.size();
				 string resistances;
				 for (int i = 0; i < size; i++){
					 resistances.append(resist[i]);
				 }
				 String^ newResist = gcnew String(resistances.c_str());
				 this->ResistancesTextBox->Text = newResist;

				 // add vision
				 string vis = testChar.vision;
				 String^ newVis = gcnew String(vis.c_str());
				 this->SpecialSensesTextBox->Text = newVis;


				 // LOAD IN SKILLS TABLE
				 int acrobatics = testChar.skills[0];
				 int arcana = testChar.skills[1];
				 int athletics = testChar.skills[2];
				 int bluff = testChar.skills[3];
				 int diplomacy = testChar.skills[4];
				 int dungeneering = testChar.skills[5];
				 int endurance = testChar.skills[6];
				 int heal = testChar.skills[7];
				 int history = testChar.skills[8];
				 int insight = testChar.skills[9];
				 int intimidate = testChar.skills[10];
				 int nature = testChar.skills[11];
				 int perception = testChar.skills[12];
				 int religion = testChar.skills[13];
				 int stealth = testChar.skills[14];
				 int streetwise = testChar.skills[15];
				 int theivery = testChar.skills[16];

				 s = std::to_string(acrobatics);
				 String^ acrobatics_str = gcnew String(s.c_str());

				 s = std::to_string(arcana);
				 String^ arcana_str = gcnew String(s.c_str());

				 s = std::to_string(athletics);
				 String^ athletics_str = gcnew String(s.c_str());

				 s = std::to_string(bluff);
				 String^ bluff_str = gcnew String(s.c_str());

				 s = std::to_string(diplomacy);
				 String^ diplomacy_str = gcnew String(s.c_str());

				 s = std::to_string(dungeneering);
				 String^ dungeneering_str = gcnew String(s.c_str());

				 s = std::to_string(endurance);
				 String^ endurance_str = gcnew String(s.c_str());

				 s = std::to_string(heal);
				 String^ heal_str = gcnew String(s.c_str());

				 s = std::to_string(history);
				 String^ history_str = gcnew String(s.c_str());

				 s = std::to_string(insight);
				 String^ insight_str = gcnew String(s.c_str());

				 s = std::to_string(nature);
				 String^ nature_str = gcnew String(s.c_str());

				 s = std::to_string(perception);
				 String^ perception_str = gcnew String(s.c_str());

				 s = std::to_string(religion);
				 String^ religion_str = gcnew String(s.c_str());

				 s = std::to_string(stealth);
				 String^ stealth_str = gcnew String(s.c_str());

				 s = std::to_string(streetwise);
				 String^ streetwise_str = gcnew String(s.c_str());

				 s = std::to_string(theivery);
				 String^ theivery_str = gcnew String(s.c_str());

				 this->AcrobaticsValue->Text = acrobatics_str;
				 this->ArcanaValue->Text = arcana_str;
				 this->AthleticsValue->Text = athletics_str;
				 this->BluffValue->Text = bluff_str;
				 this->DiplomacyValue->Text = diplomacy_str;
				 this->DungeneeringValue->Text = dungeneering_str;
				 this->EnduranceValue->Text = endurance_str;
				 this->HealValue->Text = heal_str;
				 this->HistoryValue->Text = history_str;
				 this->InsightValue->Text = insight_str;
				 this->NatureValue->Text = nature_str;
				 this->PerceptionValue->Text = perception_str;
				 this->ReligionValue->Text = religion_str;
				 this->StealthValue->Text = stealth_str;
				 this->StreetwiseValue->Text = streetwise_str;
				 this->TheiveryValue->Text = theivery_str;

				 // LOAD IN EQUIPMENT
				 
				 string head = testChar.equipment[0];
				 string neck = testChar.equipment[1];
				 string arms = testChar.equipment[2];
				 string rings = testChar.equipment[3];
				 string hands = testChar.equipment[4];
				 string mainhand = testChar.equipment[5];
				 string offhand = testChar.equipment[6];
				 string waist = testChar.equipment[7];
				 string armour = testChar.equipment[8];
				 string feet = testChar.equipment[9];
				 string tattoo = testChar.equipment[10];
				 string kifocus = testChar.equipment[11];

				 String^ head_str = gcnew String(head.c_str());
				 String^ neck_str = gcnew String(neck.c_str());
				 String^ arms_str = gcnew String(arms.c_str());
				 String^ rings_str = gcnew String(rings.c_str());
				 String^ hands_str = gcnew String(hands.c_str());
				 String^ mainhand_str = gcnew String(mainhand.c_str());
				 String^ offhand_str = gcnew String(offhand.c_str());
				 String^ waist_str = gcnew String(waist.c_str());
				 String^ armour_str = gcnew String(armour.c_str());
				 String^ feet_str = gcnew String(feet.c_str());
				 String^ tattoo_str = gcnew String(tattoo.c_str());
				 String^ kifocus_str = gcnew String(kifocus.c_str());

				 this->head_equip->Text = head_str;
				 this->neck_equip->Text = neck_str;
				 this->ring_equip->Text = rings_str;
				 this->arm_equip->Text = arms_str;
				 this->hand_equip->Text = hands_str;
				 this->mainhand_equip->Text = mainhand_str;
				 this->offhand_equip->Text = offhand_str;
				 this->waist_equip->Text = waist_str;
				 this->armour_equip->Text = armour_str;
				 this->feet_equip->Text = feet_str;
				 this->tattoo_equip->Text = tattoo_str;
				 this->ki_focus_equip->Text = kifocus_str;

				 string items = testChar.items;
				 String^ items_str = gcnew String(items.c_str());
				 this->items_txt_box->Text = items_str;
				 
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void tableLayoutPanel1_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

private: System::Void UseActionPoints_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using an Action Point");
			 int currentActionPoints = testChar.currentActionPoints;
			 if (currentActionPoints <= 0){
				 MessageBox::Show("You have no more Action Points");
			 }
			 else{
				 testChar.useActionPoint();
				 int currentActionPoints = testChar.currentActionPoints;
				 std::string s = std::to_string(currentActionPoints);
				 String^ updatedVal = gcnew String(s.c_str());
				 this->CurrentActionPoints->Text = updatedVal;
			 }
}private: System::Void tableLayoutPanel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}


private: System::Void UseSurge_Click(System::Object^  sender, System::EventArgs^  e){
			 MessageBox::Show("You are using a Healing Surge");
			 int currentHealingSurges = testChar.currentSurges;
			 
			 if (currentHealingSurges <= 0){
				 MessageBox::Show("You have no more Healing Surges");
			 }
			 else{	 
				 testChar.useHealingSurge();
				 int currentHealingSurges = testChar.currentSurges;
				 std::string s = std::to_string(currentHealingSurges);
				 String^ updatedVal = gcnew String(s.c_str());
				 this->CurrentHealingSurges->Text = updatedVal;

				 int totalHP = testChar.currentHP;
				 std::string s2 = std::to_string(totalHP);
				 String^ totalHealth = gcnew String(s2.c_str());
				 this->CurrentHealth->Text = totalHealth;
			 }
}

private: System::Void SkillsValueTable_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void UseSecondWind_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using a Second Wind");
			 bool SecondWindUsed = testChar.secondWindUsed;
			 if (SecondWindUsed == true){
				 MessageBox::Show("You have no Second Wind");
			 }
			 else{
				 testChar.useSecondWind();
				 bool SecondWindUsed = testChar.secondWindUsed;
				 this->CurrentSecondWind->Text = "0";
				 }

}

private: System::Void NewDay_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are starting a New Day");
			 testChar.newDay();
			 // reset Health
			 int OriginalHp = testChar.currentHP;
			 std::string s = std::to_string(OriginalHp);
			 String^ totalHealth = gcnew String(s.c_str());
			 this->CurrentHealth->Text = totalHealth;
			 // reset ActionPoints
			 int OriginalActionPoints = testChar.currentActionPoints;
			 std::string s2 = std::to_string(OriginalActionPoints);
			 String^ totalActionPoints = gcnew String(s2.c_str());
			 this->CurrentActionPoints->Text = totalActionPoints;
			 // reset SecondWind
			 bool SecondWindUsed = testChar.secondWindUsed;
			 if (SecondWindUsed == true){
				 testChar.secondWindUsed = false;
			 }
			 this->CurrentSecondWind->Text = "1";
			 // reset Healing Surges
			 int OriginalHealingSurges = testChar.currentSurges;
			 std::string s3 = std::to_string(OriginalHealingSurges);
			 String^ totalHealingSurges = gcnew String(s3.c_str());
			 this->CurrentHealingSurges->Text = totalHealingSurges;

}
private: System::Void CurrentHealth_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->CurrentHealth->Maximum = testChar.originalHP;
			 String^ x = this->CurrentHealth->Text;
			 msclr::interop::marshal_context context;
			 std::string currentVal = context.marshal_as<std::string>(x);
			 int currentHealth = std::atoi(currentVal.c_str());

			 String^ y = this->TotalHealth->Text;
			 msclr::interop::marshal_context context2;
			 std::string totalVal = context2.marshal_as<std::string>(y);
			 int totalHealth = std::atoi(totalVal.c_str());

			 if (currentHealth <= (totalHealth / 2)){
				 this->Bloodied->Visible = TRUE;
			 }
			 else{
				 this->Bloodied->Visible = FALSE;
			 }

			 testChar.currentHP = currentHealth;


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ x = this->domainUpDown1->Text;
			 srand(time(NULL));
			 msclr::interop::marshal_context context;
			 std::string currentVal = context.marshal_as<std::string>(x);
			 int val = std::atoi(currentVal.c_str());
			 int numofDice = (int) this->numericUpDown1->Value;
			 int sum = 0;
			 while (numofDice > 0){
				 switch (val)
				 {
				 case 4:
					 sum += rand() % 4 + 1;
					 numofDice--;

					 break;
				 case 6:
					 sum += rand() % 6 + 1;
					 numofDice--;
					 break;
				 case 8:
					 sum += rand() % 8 + 1;
					 numofDice--;
					 break;
				 case 10:
					 sum += rand() % 10 + 1;
					 numofDice--;
					 break;
				 case 12:
					 sum += rand() % 12 + 1;
					 numofDice--;
					 break;
				 case 20:
					 sum += rand() % 20 + 1;
					 numofDice--;
					 break;
				 case 100:
					 sum += rand() % 100 + 1;
					 numofDice--;
					 break;
				 }
			 }
			 std::string s = std::to_string(sum);
			 String^ updatedVal = gcnew String(s.c_str());
			 MessageBox::Show("The sum of your roll is "+updatedVal);
			 
			 
}
private: System::Void DiceLabel(System::Object^  sender, System::EventArgs^  e) {
}



private: System::Void domainUpDown1_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 
msclr::interop::marshal_context context;
fileName = context.marshal_as<std::string>(this->openFileDialog1->FileName);


}
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ x = this->gold_label->Text;
			 msclr::interop::marshal_context context;
			 std::string currentVal = context.marshal_as<std::string>(x);
			 int currentGold = std::atoi(currentVal.c_str());

			 testChar.gold = currentGold;
}
private: System::Void AddActionPointButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are adding an Action Point");
			 int currentActionPoints = testChar.currentActionPoints;
			 testChar.addActionPoint();
			 currentActionPoints = testChar.currentActionPoints;
		     std::string s = std::to_string(currentActionPoints);
			 String^ updatedVal = gcnew String(s.c_str());
			 this->CurrentActionPoints->Text = updatedVal;
		
}
private: System::Void ShortRestButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are starting a Short Rest");
			 testChar.shortRest();
			 // reset SecondWind
			 bool SecondWindUsed = testChar.secondWindUsed;
			 if (SecondWindUsed == true){
				 testChar.secondWindUsed = false;
			 }
			 this->CurrentSecondWind->Text = "1";
}
};
}

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	XMLParser parser("helja.xml");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project5::MyForm myForm;        //NameOfProject::NameOfForm instanceOfForm;

	
	
	Abilities::AbilitiesForm^ abilities = gcnew Abilities::AbilitiesForm();
	abilities->TopLevel = false;
	abilities->Parent = myForm.abilities_tab;
	abilities->Visible = true;
	Ability^ ability1 = gcnew Ability;
	for (int i = 0; i < parser.abil.size(); i++){

		ability1->Name = gcnew String(parser.abil[i][0].c_str());
		if (parser.abil[i][1] == " At-Will "){
			ability1->Power_Usage = At_Will;
		}
		else if (parser.abil[i][1] == " Encounter "){
			ability1->Power_Usage = Encounter;
		}
		else if (parser.abil[i][1] == " Daily "){
			ability1->Power_Usage = Daily;
		}

		if (parser.abil[i][2] == " Free Action "){
			ability1->Action_Type = Free_Action;
		}
		else if (parser.abil[i][2] == " No Action "){
			ability1->Action_Type = No_Action;
		}
		else if (parser.abil[i][2] == " Minor Action "){
			ability1->Action_Type = Minor_Action;
		}
		else if (parser.abil[i][2] == " Standard Action "){
			ability1->Action_Type = Standard_Action;
		}
		else if (parser.abil[i][2] == " Move Action "){
			ability1->Action_Type = Move_Action;
		}
		else if (parser.abil[i][2] == " Immediate Interrupt "){
			ability1->Action_Type = Immediate_Interrupt;
		}
		else if (parser.abil[i][2] == " Immediate Reaction "){
			ability1->Action_Type = Immediate_Reaction;
		}

		ability1->Flavor = gcnew String(parser.abil[i][3].c_str());

		ability1->Attack_Type = gcnew String(parser.abil[i][4].c_str());
		ability1->Target = gcnew String(parser.abil[i][5].c_str());
		ability1->KeyWords = gcnew String(parser.abil[i][6].c_str());
		ability1->Attack = gcnew String(parser.abil[i][7].c_str());
		ability1->Hit = gcnew String(parser.abil[i][8].c_str());
		ability1->Effect = gcnew String(parser.abil[i][9].c_str());
		Dice f = Maker(parser.abil[i][10]);
		ability1->diceSize = f.diceNum;
		ability1->numOfDice = f.numofDice;
		ability1->addedToDice = f.addedToDice;
		ability1->attackRoll = atoi(parser.abil[i][11].c_str());
		addAbility(abilities, ability1);
		//myvector.push_back(ability1);
	}
		//dice roll
		// attackbonus
	

	myForm.openFileDialog1->ShowDialog();

    Application::Run(%myForm);
}
