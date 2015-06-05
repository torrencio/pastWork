#pragma once
#include <string.h>
#include <msclr\marshal_cppstd.h>

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  NewDayButton;

	
	//Catherine Start
	private: System::Windows::Forms::NumericUpDown^  CurrentHealth;
	private: System::Windows::Forms::Label^  HealthLabel;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
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
private: System::Windows::Forms::Label^  CurrentHealingSurges;
private: System::Windows::Forms::TableLayoutPanel^  InitiativeandSpeedTable;
private: System::Windows::Forms::TableLayoutPanel^  DefensesTable;
private: System::Windows::Forms::TableLayoutPanel^  AbilitiesScoreCheckTable;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  AthleticsLabel;
private: System::Windows::Forms::Label^  AthleticsValue;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TableLayoutPanel^  SkilsValueTable2;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->NewDayButton = (gcnew System::Windows::Forms::Button());
			this->NewEncounterButton = (gcnew System::Windows::Forms::Button());
			this->EndTurnButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->AbilitiesScoreCheckTable->SuspendLayout();
			this->DefensesTable->SuspendLayout();
			this->InitiativeandSpeedTable->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentHealth))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SkilsValueTable2->SuspendLayout();
			this->SkillsValueTable->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Padding = System::Drawing::Point(26, 0);
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(603, 383);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->AbilitiesScoreCheckTable);
			this->tabPage1->Controls->Add(this->DefensesTable);
			this->tabPage1->Controls->Add(this->InitiativeandSpeedTable);
			this->tabPage1->Controls->Add(this->CurrentHealingSurges);
			this->tabPage1->Controls->Add(this->TotalHealth);
			this->tabPage1->Controls->Add(this->UseSecondWind);
			this->tabPage1->Controls->Add(this->CurrentSecondWind);
			this->tabPage1->Controls->Add(this->CurrentActionPoints);
			this->tabPage1->Controls->Add(this->HealthSlashLabel);
			this->tabPage1->Controls->Add(this->Bloodied);
			this->tabPage1->Controls->Add(this->ResistancesTextBox);
			this->tabPage1->Controls->Add(this->LanguagesTextBox);
			this->tabPage1->Controls->Add(this->SpecialSensesTextBox);
			this->tabPage1->Controls->Add(this->LanguagesLabel);
			this->tabPage1->Controls->Add(this->SpecialSensesLabel);
			this->tabPage1->Controls->Add(this->UseActionPoints);
			this->tabPage1->Controls->Add(this->SecondWindLabel);
			this->tabPage1->Controls->Add(this->ActionPointsLabel);
			this->tabPage1->Controls->Add(this->ResistancesLabel);
			this->tabPage1->Controls->Add(this->DefensesLabel);
			this->tabPage1->Controls->Add(this->UseSurge);
			this->tabPage1->Controls->Add(this->HealingSurgesLabel);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->CurrentHealth);
			this->tabPage1->Controls->Add(this->HealthLabel);
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(595, 352);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Stats";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			// 
			// StatCheckLabel
			// 
			this->StatCheckLabel->AutoSize = true;
			this->StatCheckLabel->Location = System::Drawing::Point(127, 0);
			this->StatCheckLabel->Name = L"StatCheckLabel";
			this->StatCheckLabel->Size = System::Drawing::Size(54, 20);
			this->StatCheckLabel->TabIndex = 5;
			this->StatCheckLabel->Text = L"Check";
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
			this->DEXLabel->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
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
			this->FORTLabel->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
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
			this->CurrentHealingSurges->Location = System::Drawing::Point(114, 189);
			this->CurrentHealingSurges->Name = L"CurrentHealingSurges";
			this->CurrentHealingSurges->Size = System::Drawing::Size(15, 16);
			this->CurrentHealingSurges->TabIndex = 63;
			this->CurrentHealingSurges->Text = L"8";

			// 
			// TotalHealth
			// 
			this->TotalHealth->AutoSize = true;
			this->TotalHealth->Location = System::Drawing::Point(161, 159);
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
			this->CurrentSecondWind->Location = System::Drawing::Point(401, 51);
			this->CurrentSecondWind->Name = L"CurrentSecondWind";
			this->CurrentSecondWind->Size = System::Drawing::Size(18, 20);
			this->CurrentSecondWind->TabIndex = 60;
			this->CurrentSecondWind->Text = L"1";
			// 
			// CurrentActionPoints
			// 
			this->CurrentActionPoints->AutoSize = true;
			this->CurrentActionPoints->Location = System::Drawing::Point(401, 9);
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
			this->HealthSlashLabel->Location = System::Drawing::Point(140, 159);
			this->HealthSlashLabel->Name = L"HealthSlashLabel";
			this->HealthSlashLabel->Size = System::Drawing::Size(15, 24);
			this->HealthSlashLabel->TabIndex = 37;
			this->HealthSlashLabel->Text = L"/";
			// 
			// Bloodied
			// 
			this->Bloodied->AutoSize = true;
			this->Bloodied->ForeColor = System::Drawing::Color::Red;
			this->Bloodied->Location = System::Drawing::Point(194, 159);
			this->Bloodied->Name = L"Bloodied";
			this->Bloodied->Size = System::Drawing::Size(71, 20);
			this->Bloodied->TabIndex = 36;
			this->Bloodied->Text = L"Bloodied";
			this->Bloodied->Visible = false;
			// 
			// ResistancesTextBox
			// 
			this->ResistancesTextBox->Location = System::Drawing::Point(222, 313);
			this->ResistancesTextBox->Name = L"ResistancesTextBox";
			this->ResistancesTextBox->Size = System::Drawing::Size(357, 19);
			this->ResistancesTextBox->TabIndex = 35;
			this->ResistancesTextBox->Text = L"";
			// 
			// LanguagesTextBox
			// 
			this->LanguagesTextBox->Location = System::Drawing::Point(355, 272);
			this->LanguagesTextBox->Name = L"LanguagesTextBox";
			this->LanguagesTextBox->Size = System::Drawing::Size(216, 20);
			this->LanguagesTextBox->TabIndex = 34;
			this->LanguagesTextBox->Text = L"";
			// SpecialSensesTextBox
			// 
			this->SpecialSensesTextBox->Location = System::Drawing::Point(381, 236);
			this->SpecialSensesTextBox->Name = L"SpecialSensesTextBox";
			this->SpecialSensesTextBox->Size = System::Drawing::Size(192, 20);
			this->SpecialSensesTextBox->TabIndex = 33;
			this->SpecialSensesTextBox->Text = L"";
			// 
			// LanguagesLabel
			// 
			this->LanguagesLabel->AutoSize = true;
			this->LanguagesLabel->Location = System::Drawing::Point(256, 272);
			this->LanguagesLabel->Name = L"LanguagesLabel";
			this->LanguagesLabel->Size = System::Drawing::Size(93, 20);
			this->LanguagesLabel->TabIndex = 32;
			this->LanguagesLabel->Text = L"Languages:";
			// 
			// SpecialSensesLabel
			// 
			this->SpecialSensesLabel->AutoSize = true;
			this->SpecialSensesLabel->Location = System::Drawing::Point(251, 232);
			this->SpecialSensesLabel->Name = L"SpecialSensesLabel";
			this->SpecialSensesLabel->Size = System::Drawing::Size(123, 20);
			this->SpecialSensesLabel->TabIndex = 31;
			this->SpecialSensesLabel->Text = L"Special Senses:";
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
			this->SecondWindLabel->Location = System::Drawing::Point(289, 48);
			this->SecondWindLabel->Name = L"SecondWindLabel";
			this->SecondWindLabel->Size = System::Drawing::Size(108, 20);
			this->SecondWindLabel->TabIndex = 22;
			this->SecondWindLabel->Text = L"Second Wind:";
			this->SecondWindLabel->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// ActionPointsLabel
			// 
			this->ActionPointsLabel->AutoSize = true;
			this->ActionPointsLabel->Location = System::Drawing::Point(282, 9);
			this->ActionPointsLabel->Name = L"ActionPointsLabel";
			this->ActionPointsLabel->Size = System::Drawing::Size(106, 20);
			this->ActionPointsLabel->TabIndex = 21;
			this->ActionPointsLabel->Text = L"Action Points:";
			this->ActionPointsLabel->Click += gcnew System::EventHandler(this, &MyForm::ActionPointsLabel_Click);
			// 
			// ResistancesLabel
			// 
			this->ResistancesLabel->AutoSize = true;
			this->ResistancesLabel->Location = System::Drawing::Point(13, 312);
			this->ResistancesLabel->Name = L"ResistancesLabel";
			this->ResistancesLabel->Size = System::Drawing::Size(203, 20);
			this->ResistancesLabel->TabIndex = 20;
			this->ResistancesLabel->Text = L"Resistances/Vulnerabilities:";
			// 
			// DefensesLabel
			// 
			this->DefensesLabel->AutoSize = true;
			this->DefensesLabel->Location = System::Drawing::Point(19, 213);
			this->DefensesLabel->Name = L"DefensesLabel";
			this->DefensesLabel->Size = System::Drawing::Size(78, 20);
			this->DefensesLabel->TabIndex = 15;
			this->DefensesLabel->Text = L"Defenses";
			// 
			// UseSurge
			// 
			this->UseSurge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UseSurge->Location = System::Drawing::Point(134, 185);
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
			this->HealingSurgesLabel->Location = System::Drawing::Point(22, 190);
			this->HealingSurgesLabel->Name = L"HealingSurgesLabel";
			this->HealingSurgesLabel->Size = System::Drawing::Size(75, 16);
			this->HealingSurgesLabel->TabIndex = 12;
			this->HealingSurgesLabel->Text = L"Surges Left";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 21);
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
			// 
			// HealthLabel
			// 
			this->HealthLabel->AutoSize = true;
			this->HealthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HealthLabel->Location = System::Drawing::Point(21, 162);
			this->HealthLabel->Name = L"HealthLabel";
			this->HealthLabel->Size = System::Drawing::Size(56, 20);
			this->HealthLabel->TabIndex = 0;
			this->HealthLabel->Text = L"Health\r\n";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->SkilsValueTable2);
			this->tabPage2->Controls->Add(this->SkillsValueTable);
			this->tabPage2->Controls->Add(this->SkillsScoreLabel);
			this->tabPage2->Controls->Add(this->SkillsSkillLabel);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(592, 341);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Skills";
			this->tabPage2->UseVisualStyleBackColor = true;
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
			this->SkillsScoreLabel->Location = System::Drawing::Point(166, 49);
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
			this->SkillsSkillLabel->Location = System::Drawing::Point(46, 49);
			this->SkillsSkillLabel->Name = L"SkillsSkillLabel";
			this->SkillsSkillLabel->Size = System::Drawing::Size(42, 20);
			this->SkillsSkillLabel->TabIndex = 0;
			this->SkillsSkillLabel->Text = L"Skill";
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(592, 341);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Abilities";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 27);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(592, 341);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Items/Gold";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 27);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(592, 341);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Character/Notes";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// NewDayButton
			// 
			this->NewDayButton->Location = System::Drawing::Point(478, 391);
			this->NewDayButton->Name = L"NewDayButton";
			this->NewDayButton->Size = System::Drawing::Size(106, 38);
			this->NewDayButton->TabIndex = 1;
			this->NewDayButton->Text = L"New Day";
			this->NewDayButton->UseVisualStyleBackColor = true;
			this->NewDayButton->Click += gcnew System::EventHandler(this, &MyForm::NewDay_Click);
			// 
			// NewEncounterButton
			// 
			this->NewEncounterButton->Location = System::Drawing::Point(360, 391);
			this->NewEncounterButton->Name = L"NewEncounterButton";
			this->NewEncounterButton->Size = System::Drawing::Size(106, 38);
			this->NewEncounterButton->TabIndex = 2;
			this->NewEncounterButton->Text = L"New Encounter";
			this->NewEncounterButton->UseVisualStyleBackColor = true;
			// 
			// EndTurnButton
			// 
			this->EndTurnButton->Location = System::Drawing::Point(5, 391);
			this->EndTurnButton->Name = L"EndTurnButton";
			this->EndTurnButton->Size = System::Drawing::Size(106, 38);
			this->EndTurnButton->TabIndex = 3;
			this->EndTurnButton->Text = L"End Turn";
			this->EndTurnButton->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 391);
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
			this->comboBox1->Location = System::Drawing::Point(193, 401);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(69, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(268, 404);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"-Sided Dice";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 442);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->EndTurnButton);
			this->Controls->Add(this->NewEncounterButton);
			this->Controls->Add(this->NewDayButton);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->AbilitiesScoreCheckTable->ResumeLayout(false);
			this->AbilitiesScoreCheckTable->PerformLayout();
			this->DefensesTable->ResumeLayout(false);
			this->DefensesTable->PerformLayout();
			this->InitiativeandSpeedTable->ResumeLayout(false);
			this->InitiativeandSpeedTable->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentHealth))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->SkilsValueTable2->ResumeLayout(false);
			this->SkilsValueTable2->PerformLayout();
			this->SkillsValueTable->ResumeLayout(false);
			this->SkillsValueTable->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ActionPointsLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void UseActionPoints_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using an Action Point");
			 String^ x = this->CurrentActionPoints->Text;

			 msclr::interop::marshal_context context;
			 std::string currentVal = context.marshal_as<std::string>(x);

			 int val = std::atoi(currentVal.c_str());
			 if (val <= 0){
				 MessageBox::Show("You have no more Action Points");
			 }
			 else{
				 int newVal = val - 1;

				 std::string s = std::to_string(newVal);

				 String^ updatedVal = gcnew String(s.c_str());
				 this->CurrentActionPoints->Text = updatedVal;
			 }
}

private: System::Void UseSurge_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using a Healing Surge");
			 String^ x = this->CurrentHealingSurges->Text;
			 msclr::interop::marshal_context context;
			 std::string currentVal = context.marshal_as<std::string>(x);
			 int val = std::atoi(currentVal.c_str());
			 if (val <= 0){
				 MessageBox::Show("You have no more Healing Surges");
			 }
			 else{
				 int newVal = val - 1;
				 std::string s = std::to_string(newVal);
				 String^ updatedVal = gcnew String(s.c_str());
				 this->CurrentHealingSurges->Text = updatedVal;
			 }

}
private: System::Void UseSecondWind_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using a Second Wind");
			 String^ x = this->CurrentSecondWind->Text;
			 msclr::interop::marshal_context context;
			 std::string currentVal = context.marshal_as<std::string>(x);
			 int val = std::atoi(currentVal.c_str());
			 if (val <= 0){
				 MessageBox::Show("YOu have no Second Wind");
			 }
			 else{
				 int newVal = val - 1;
				 std::string s = std::to_string(newVal);
				 String^ updatedVal = gcnew String(s.c_str());
				 this->CurrentSecondWind->Text = updatedVal;
			 }

}

private: System::Void NewDay_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are starting a New Day");
}

};
}
//Catherine End
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project5::MyForm myForm;        //NameOfProject::NameOfForm instanceOfForm;
    Application::Run(%myForm);
}