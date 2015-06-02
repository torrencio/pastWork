#pragma once
#include "AbilitiesTable.h"
#include <cliext/vector>

using namespace System;
using namespace std;

enum powerUsage{
	defaultc,
	At_Will,
	Daily,
	Encounter
};

enum actionType{
	No_Action,
	Free_Action,
	Immediate_Interrupt,
	Immediate_Reaction,
	Minor_Action,
	Move_Action,
	Standard_Action
};

enum attackType{
	Melee,
	Ranged,
	Close_Blast,
	Close_Burst,
	Area_Burst,
	Area_Wall,
	Personal
};

public value struct Ability{
	String^ Name;
	String^ Flavor;
	powerUsage Power_Usage;
	String^ KeyWords;
	actionType Action_Type;
	attackType Attack_Type;
	String^ Range;
	String^ Target;
	String^ Attack;
	String^ Hit;
	String^ Effect;
	String^ Additional_Effects;
};


namespace Abilities {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AbilitiesForm
	/// </summary>
	public ref class AbilitiesForm : public System::Windows::Forms::Form
	{
	public:
		AbilitiesForm(void)
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
		~AbilitiesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:

	public: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;

	public:	cliext::vector<AbilitiesTable::AbilitiesTableForm^> abilitytables;
	public: int abilitycount = 0;
	public: int prev = 0;

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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->flowLayoutPanel1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AbilitiesForm::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(595, 352);
			this->splitContainer1->SplitterDistance = 191;
			this->splitContainer1->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(191, 352);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// AbilitiesForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(595, 352);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AbilitiesForm";
			this->Text = L"AbilitiesForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	public: System::Void AbilityButton_Click(System::Object^  sender, System::EventArgs^  e) {
				System::Windows::Forms::Button^  temp = (System::Windows::Forms::Button^) sender;
				String^ x = temp->Name;
				int y = System::Int32::Parse(x);

				this->abilitytables.at(this->prev)->Visible = false;
				this->prev = y;
				this->abilitytables.at(y)->Visible = true;

	}


	};
}


void addTable(Abilities::AbilitiesForm^ abilities);
AbilitiesTable::AbilitiesTableForm^ addButton(Abilities::AbilitiesForm^ abilities, String^ x);
void addButton(Abilities::AbilitiesForm^ abilities, Ability^ ability);
void addAbility(Abilities::AbilitiesForm^ abilities, Ability^ ability);