#pragma once
#include "Abilities.h"

#include <string>


namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
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

	protected:
	private: System::Windows::Forms::Button^  NewDay;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage4;
	public: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabControl^  tabControl1;

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
			this->NewDay = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// NewDay
			// 
			this->NewDay->Location = System::Drawing::Point(486, 391);
			this->NewDay->Name = L"NewDay";
			this->NewDay->Size = System::Drawing::Size(106, 38);
			this->NewDay->TabIndex = 1;
			this->NewDay->Text = L"New Day";
			this->NewDay->UseVisualStyleBackColor = true;
			
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(374, 391);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 38);
			this->button5->TabIndex = 2;
			this->button5->Text = L"New Encounter";
			this->button5->UseVisualStyleBackColor = true;

			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(13, 391);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 38);
			this->button6->TabIndex = 3;
			this->button6->Text = L"End Turn";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 27);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(595, 352);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Character/Notes";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 27);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(595, 352);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Items/Gold";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(595, 352);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Abilities";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(595, 352);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Skills";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(595, 352);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Stats";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 441);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->NewDay);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

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

};
}

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project5::MyForm myForm;        
	
	Abilities::AbilitiesForm^ abilities = gcnew Abilities::AbilitiesForm();
	abilities->TopLevel = false;
	abilities->Parent = myForm.tabPage3;
	abilities->Visible = true;


	Ability^ ability1 = gcnew Ability;
	ability1->Name = "Viper's Strike";
	ability1->Power_Usage = At_Will;
	ability1->Action_Type = Standard_Action;
	ability1->Flavor = "Hello my name is Mushy Shah how are you doing today I hope you are all fine and dandy! HEYHII";
	ability1->Attack_Type = Melee;
	ability1->Range = "Weapon";
	ability1->Target = "One Creature";
	ability1->KeyWords = "Martial, Weapon";
	ability1->Attack = "Strength vs. AC";
	ability1->Hit = "1[W] + Str modifier damage";
	ability1->Effect = "If the target shifts before the start of your next turn, it provokes an opportunity attack from an ally of your choice.";
	ability1->Additional_Effects = "Additional Effects: +2 to damage rolls when charging";

	Ability^ ability2 = gcnew Ability;
	ability2->Name = "Encounter Ability";
	ability2->Power_Usage = Encounter;
	ability2->Additional_Effects = "Additional Effects: +2 to damage rolls when charging";

	Ability^ ability3 = gcnew Ability;
	ability3->Name = "Daily Ability";
	ability3->Power_Usage = Daily;


	addAbility(abilities, ability1);
	addAbility(abilities, ability2);
	addAbility(abilities, ability3);

	Ability^ abilityrand = gcnew Ability;
	/*
	for (int i = 0; i < 15; i++){
		abilityrand->Name = i.ToString();
		addAbility(abilities, abilityrand);
	}*/

    Application::Run(%myForm);
}