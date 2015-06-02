#pragma once

using namespace System;
using namespace std;

namespace  AbilitiesTable{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AbilitiesTableForm
	/// </summary>
	public ref class AbilitiesTableForm : public System::Windows::Forms::Form
	{
	public:
		AbilitiesTableForm(void)
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
		~AbilitiesTableForm()
		{
			if (components)
			{
				delete components;
			}
		}

		//public: System::Drawing::Color currentPropColor = System::Drawing::SystemColors::MenuBar;
	public: System::Drawing::Color propColor1, propcolor2;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	public: System::Windows::Forms::Label^  AbilityName;
	public: System::Windows::Forms::Button^  button1;

	public: System::Windows::Forms::Label^  action_type;

	public: System::Windows::Forms::Label^  power_usage;

	public: System::Windows::Forms::Panel^  panel2;
	public: System::Windows::Forms::Panel^  panel3;
	public: System::Windows::Forms::CheckBox^  Used;
	public: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;

	protected:

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AbilityName = (gcnew System::Windows::Forms::Label());
			this->Used = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->action_type = (gcnew System::Windows::Forms::Label());
			this->power_usage = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.78947F)));
			this->tableLayoutPanel1->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 8);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.83333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 16)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 264)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(380, 307);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AbilitiesTableForm::tableLayoutPanel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::InfoText;
			this->panel2->Controls->Add(this->AbilityName);
			this->panel2->Controls->Add(this->Used);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(380, 27);
			this->panel2->TabIndex = 3;
			// 
			// AbilityName
			// 
			this->AbilityName->Dock = System::Windows::Forms::DockStyle::Left;
			this->AbilityName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AbilityName->ForeColor = System::Drawing::Color::White;
			this->AbilityName->Location = System::Drawing::Point(0, 0);
			this->AbilityName->Name = L"AbilityName";
			this->AbilityName->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->AbilityName->Size = System::Drawing::Size(192, 27);
			this->AbilityName->TabIndex = 0;
			this->AbilityName->Text = L"Ability Name";
			this->AbilityName->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Used
			// 
			this->Used->AutoSize = true;
			this->Used->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Used->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Used->Dock = System::Windows::Forms::DockStyle::Right;
			this->Used->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Used->ForeColor = System::Drawing::Color::White;
			this->Used->Location = System::Drawing::Point(320, 0);
			this->Used->Name = L"Used";
			this->Used->Padding = System::Windows::Forms::Padding(0, 0, 5, 0);
			this->Used->Size = System::Drawing::Size(60, 27);
			this->Used->TabIndex = 1;
			this->Used->Text = L"Used";
			this->Used->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Used->UseVisualStyleBackColor = true;
			this->Used->CheckedChanged += gcnew System::EventHandler(this, &AbilitiesTableForm::Used_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuText;
			this->panel3->Controls->Add(this->action_type);
			this->panel3->Controls->Add(this->power_usage);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 27);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(380, 16);
			this->panel3->TabIndex = 4;
			// 
			// action_type
			// 
			this->action_type->Dock = System::Windows::Forms::DockStyle::Left;
			this->action_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->action_type->ForeColor = System::Drawing::Color::White;
			this->action_type->Location = System::Drawing::Point(94, 0);
			this->action_type->Name = L"action_type";
			this->action_type->Size = System::Drawing::Size(99, 16);
			this->action_type->TabIndex = 3;
			this->action_type->Text = L"Action Type";
			// 
			// power_usage
			// 
			this->power_usage->Dock = System::Windows::Forms::DockStyle::Left;
			this->power_usage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power_usage->ForeColor = System::Drawing::Color::White;
			this->power_usage->Location = System::Drawing::Point(0, 0);
			this->power_usage->Name = L"power_usage";
			this->power_usage->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->power_usage->Size = System::Drawing::Size(94, 16);
			this->power_usage->TabIndex = 2;
			this->power_usage->Text = L"Power Usage";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::Window;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 43);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(380, 264);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(156, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Use Ability!";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AbilitiesTableForm::button1_Click);
			// 
			// AbilitiesTableForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(404, 352);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AbilitiesTableForm";
			this->Text = L"AbilitiesTableForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 AbilitiesTable::AbilitiesTableForm::Used->Checked = true;
	}


	private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}



	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void Used_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Used->Checked == false){
					 this->Used->Checked = true;
					
				 }
				 if (this->power_usage->Text != "At Will"){
					 this->button1->Visible = false;
					 MessageBox::Show("Boom");
				 }
				 else
				 MessageBox::Show("Boom");
				 
	}
};
}

void addAbilityProp(AbilitiesTable::AbilitiesTableForm^ card, String^ title, String^ text);
void addAbilityProp(AbilitiesTable::AbilitiesTableForm^ card, String^ text, bool italic);

System::Windows::Forms::FlowLayoutPanel^ createPropLayout(AbilitiesTable::AbilitiesTableForm^ card);
System::Windows::Forms::Label^ textLabel(String^ text, bool italic);
System::Windows::Forms::Label^ titleLabel(String^ title);