#pragma once

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
	private: System::Windows::Forms::Button^  NewDay;
	private: System::Windows::Forms::NumericUpDown^  CurrentHealth;
	private: System::Windows::Forms::Label^  HealthLabel;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  AbilityLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  UseSurge;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  SecondWindLabel;
	private: System::Windows::Forms::Label^  ActionPointsLabel;

	private: System::Windows::Forms::Button^  UseActionPoints;


	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Label^  Bloodied;
	private: System::Windows::Forms::Label^  label27;



	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;


	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Button^  UseSecondWind;
private: System::Windows::Forms::Label^  CurrentSecondWind;
private: System::Windows::Forms::Label^  CurrentActionPoints;
private: System::Windows::Forms::Label^  TotalHealth;
private: System::Windows::Forms::Label^  label1;







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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TotalHealth = (gcnew System::Windows::Forms::Label());
			this->UseSecondWind = (gcnew System::Windows::Forms::Button());
			this->CurrentSecondWind = (gcnew System::Windows::Forms::Label());
			this->CurrentActionPoints = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->Bloodied = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->UseActionPoints = (gcnew System::Windows::Forms::Button());
			this->SecondWindLabel = (gcnew System::Windows::Forms::Label());
			this->ActionPointsLabel = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->UseSurge = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AbilityLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CurrentHealth = (gcnew System::Windows::Forms::NumericUpDown());
			this->HealthLabel = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->NewDay = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentHealth))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
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
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->TotalHealth);
			this->tabPage1->Controls->Add(this->UseSecondWind);
			this->tabPage1->Controls->Add(this->CurrentSecondWind);
			this->tabPage1->Controls->Add(this->CurrentActionPoints);
			this->tabPage1->Controls->Add(this->label47);
			this->tabPage1->Controls->Add(this->label46);
			this->tabPage1->Controls->Add(this->label45);
			this->tabPage1->Controls->Add(this->label44);
			this->tabPage1->Controls->Add(this->label43);
			this->tabPage1->Controls->Add(this->label42);
			this->tabPage1->Controls->Add(this->label41);
			this->tabPage1->Controls->Add(this->label40);
			this->tabPage1->Controls->Add(this->label39);
			this->tabPage1->Controls->Add(this->label38);
			this->tabPage1->Controls->Add(this->label37);
			this->tabPage1->Controls->Add(this->label36);
			this->tabPage1->Controls->Add(this->label35);
			this->tabPage1->Controls->Add(this->label34);
			this->tabPage1->Controls->Add(this->label33);
			this->tabPage1->Controls->Add(this->label32);
			this->tabPage1->Controls->Add(this->label31);
			this->tabPage1->Controls->Add(this->label30);
			this->tabPage1->Controls->Add(this->label29);
			this->tabPage1->Controls->Add(this->label28);
			this->tabPage1->Controls->Add(this->label27);
			this->tabPage1->Controls->Add(this->Bloodied);
			this->tabPage1->Controls->Add(this->richTextBox3);
			this->tabPage1->Controls->Add(this->richTextBox2);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->label26);
			this->tabPage1->Controls->Add(this->label25);
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->UseActionPoints);
			this->tabPage1->Controls->Add(this->SecondWindLabel);
			this->tabPage1->Controls->Add(this->ActionPointsLabel);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->UseSurge);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->AbilityLabel);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(103, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 16);
			this->label1->TabIndex = 63;
			this->label1->Text = L"8";
			// 
			// TotalHealth
			// 
			this->TotalHealth->AutoSize = true;
			this->TotalHealth->Location = System::Drawing::Point(159, 157);
			this->TotalHealth->Name = L"TotalHealth";
			this->TotalHealth->Size = System::Drawing::Size(27, 20);
			this->TotalHealth->TabIndex = 62;
			this->TotalHealth->Text = L"25";
			this->TotalHealth->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// UseSecondWind
			// 
			this->UseSecondWind->Location = System::Drawing::Point(414, 57);
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
			this->CurrentSecondWind->Location = System::Drawing::Point(391, 63);
			this->CurrentSecondWind->Name = L"CurrentSecondWind";
			this->CurrentSecondWind->Size = System::Drawing::Size(18, 20);
			this->CurrentSecondWind->TabIndex = 60;
			this->CurrentSecondWind->Text = L"2";
			this->CurrentSecondWind->Click += gcnew System::EventHandler(this, &MyForm::label83_Click);
			// 
			// CurrentActionPoints
			// 
			this->CurrentActionPoints->AutoSize = true;
			this->CurrentActionPoints->Location = System::Drawing::Point(391, 27);
			this->CurrentActionPoints->Name = L"CurrentActionPoints";
			this->CurrentActionPoints->Size = System::Drawing::Size(18, 20);
			this->CurrentActionPoints->TabIndex = 59;
			this->CurrentActionPoints->Text = L"2";
			this->CurrentActionPoints->Click += gcnew System::EventHandler(this, &MyForm::CurrentActionPoints_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(437, 181);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(22, 16);
			this->label47->TabIndex = 58;
			this->label47->Text = L"10";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(437, 162);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(22, 16);
			this->label46->TabIndex = 57;
			this->label46->Text = L"10";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(437, 139);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(22, 16);
			this->label45->TabIndex = 56;
			this->label45->Text = L"10";
			this->label45->Click += gcnew System::EventHandler(this, &MyForm::label45_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(437, 118);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(22, 16);
			this->label44->TabIndex = 55;
			this->label44->Text = L"10";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(92, 295);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(22, 16);
			this->label43->TabIndex = 54;
			this->label43->Text = L"10";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(92, 279);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(22, 16);
			this->label42->TabIndex = 53;
			this->label42->Text = L"10";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(92, 263);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(22, 16);
			this->label41->TabIndex = 52;
			this->label41->Text = L"10";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(92, 247);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(22, 16);
			this->label40->TabIndex = 51;
			this->label40->Text = L"10";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(148, 130);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(22, 16);
			this->label39->TabIndex = 50;
			this->label39->Text = L"10";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(92, 132);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(22, 16);
			this->label38->TabIndex = 49;
			this->label38->Text = L"10";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(148, 114);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(22, 16);
			this->label37->TabIndex = 48;
			this->label37->Text = L"10";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(92, 115);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(22, 16);
			this->label36->TabIndex = 47;
			this->label36->Text = L"10";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(148, 98);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(22, 16);
			this->label35->TabIndex = 46;
			this->label35->Text = L"10";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(92, 99);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(22, 16);
			this->label34->TabIndex = 45;
			this->label34->Text = L"10";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(148, 82);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(22, 16);
			this->label33->TabIndex = 44;
			this->label33->Text = L"10";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(92, 83);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(22, 16);
			this->label32->TabIndex = 43;
			this->label32->Text = L"10";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(148, 66);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(22, 16);
			this->label31->TabIndex = 42;
			this->label31->Text = L"10";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(92, 66);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 16);
			this->label30->TabIndex = 41;
			this->label30->Text = L"10";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(148, 51);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(22, 16);
			this->label29->TabIndex = 40;
			this->label29->Text = L"10";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(92, 51);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(22, 16);
			this->label28->TabIndex = 39;
			this->label28->Text = L"10";
			this->label28->Click += gcnew System::EventHandler(this, &MyForm::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(137, 157);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(15, 24);
			this->label27->TabIndex = 37;
			this->label27->Text = L"/";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm::label27_Click);
			// 
			// Bloodied
			// 
			this->Bloodied->AutoSize = true;
			this->Bloodied->ForeColor = System::Drawing::Color::Red;
			this->Bloodied->Location = System::Drawing::Point(188, 160);
			this->Bloodied->Name = L"Bloodied";
			this->Bloodied->Size = System::Drawing::Size(71, 20);
			this->Bloodied->TabIndex = 36;
			this->Bloodied->Text = L"Bloodied";
			this->Bloodied->Visible = false;
			this->Bloodied->Click += gcnew System::EventHandler(this, &MyForm::Bloodied_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(219, 318);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(338, 19);
			this->richTextBox3->TabIndex = 35;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(386, 276);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(171, 16);
			this->richTextBox2->TabIndex = 34;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(414, 245);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(143, 19);
			this->richTextBox1->TabIndex = 33;
			this->richTextBox1->Text = L"";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(286, 272);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(93, 20);
			this->label26->TabIndex = 32;
			this->label26->Text = L"Languages:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(286, 244);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(123, 20);
			this->label25->TabIndex = 31;
			this->label25->Text = L"Special Senses:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(286, 177);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(143, 20);
			this->label24->TabIndex = 30;
			this->label24->Text = L"Passive Perception";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(286, 157);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(115, 20);
			this->label23->TabIndex = 29;
			this->label23->Text = L"Passive Insight";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(286, 135);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(56, 20);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Speed";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(286, 115);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(67, 20);
			this->label21->TabIndex = 27;
			this->label21->Text = L"Initiative";
			// 
			// UseActionPoints
			// 
			this->UseActionPoints->Location = System::Drawing::Point(414, 21);
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
			this->SecondWindLabel->Location = System::Drawing::Point(282, 63);
			this->SecondWindLabel->Name = L"SecondWindLabel";
			this->SecondWindLabel->Size = System::Drawing::Size(108, 20);
			this->SecondWindLabel->TabIndex = 22;
			this->SecondWindLabel->Text = L"Second Wind:";
			this->SecondWindLabel->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// ActionPointsLabel
			// 
			this->ActionPointsLabel->AutoSize = true;
			this->ActionPointsLabel->Location = System::Drawing::Point(282, 27);
			this->ActionPointsLabel->Name = L"ActionPointsLabel";
			this->ActionPointsLabel->Size = System::Drawing::Size(106, 20);
			this->ActionPointsLabel->TabIndex = 21;
			this->ActionPointsLabel->Text = L"Action Points:";
			this->ActionPointsLabel->Click += gcnew System::EventHandler(this, &MyForm::ActionPointsLabel_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(20, 317);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(203, 20);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Resistances/Vulnerabilities:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(27, 292);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 16);
			this->label17->TabIndex = 19;
			this->label17->Text = L"WILL";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(28, 276);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 16);
			this->label16->TabIndex = 18;
			this->label16->Text = L"REF";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(29, 260);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 16);
			this->label15->TabIndex = 17;
			this->label15->Text = L"FORT";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(29, 244);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 16);
			this->label14->TabIndex = 16;
			this->label14->Text = L"AC";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(20, 224);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 20);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Defenses";
			// 
			// UseSurge
			// 
			this->UseSurge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UseSurge->Location = System::Drawing::Point(124, 187);
			this->UseSurge->Name = L"UseSurge";
			this->UseSurge->Size = System::Drawing::Size(82, 27);
			this->UseSurge->TabIndex = 14;
			this->UseSurge->Text = L"Use Surge";
			this->UseSurge->UseVisualStyleBackColor = true;
			this->UseSurge->Click += gcnew System::EventHandler(this, &MyForm::UseSurge_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(21, 192);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 16);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Surges Left";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(29, 132);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"CHA";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(28, 115);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 16);
			this->label10->TabIndex = 10;
			this->label10->Text = L"WIS";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(28, 99);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 16);
			this->label9->TabIndex = 9;
			this->label9->Text = L"INT";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(28, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 16);
			this->label8->TabIndex = 8;
			this->label8->Text = L"DEX";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"CON";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"STR";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(137, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Check";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(80, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Score";
			// 
			// AbilityLabel
			// 
			this->AbilityLabel->AutoSize = true;
			this->AbilityLabel->Location = System::Drawing::Point(20, 27);
			this->AbilityLabel->Name = L"AbilityLabel";
			this->AbilityLabel->Size = System::Drawing::Size(50, 20);
			this->AbilityLabel->TabIndex = 3;
			this->AbilityLabel->Text = L"Ability";
			this->AbilityLabel->Click += gcnew System::EventHandler(this, &MyForm::AbilityLabel_Click);
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
			this->CurrentHealth->Location = System::Drawing::Point(85, 157);
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
			this->HealthLabel->Location = System::Drawing::Point(20, 163);
			this->HealthLabel->Name = L"HealthLabel";
			this->HealthLabel->Size = System::Drawing::Size(56, 20);
			this->HealthLabel->TabIndex = 0;
			this->HealthLabel->Text = L"Health\r\n";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel1);
			this->tabPage2->Controls->Add(this->label49);
			this->tabPage2->Controls->Add(this->label48);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(595, 352);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Skills";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label81, 1, 15);
			this->tableLayoutPanel1->Controls->Add(this->label80, 1, 14);
			this->tableLayoutPanel1->Controls->Add(this->label79, 1, 13);
			this->tableLayoutPanel1->Controls->Add(this->label78, 1, 12);
			this->tableLayoutPanel1->Controls->Add(this->label77, 1, 11);
			this->tableLayoutPanel1->Controls->Add(this->label76, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->label75, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->label74, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->label73, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->label72, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->label71, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label70, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label51, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label52, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label53, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label54, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label55, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label56, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label57, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label58, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label59, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label60, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->label61, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->label62, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->label63, 0, 11);
			this->tableLayoutPanel1->Controls->Add(this->label64, 0, 12);
			this->tableLayoutPanel1->Controls->Add(this->label65, 0, 13);
			this->tableLayoutPanel1->Controls->Add(this->label66, 0, 14);
			this->tableLayoutPanel1->Controls->Add(this->label67, 0, 15);
			this->tableLayoutPanel1->Controls->Add(this->label50, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label68, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label69, 1, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(188, 21);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 16;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
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
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(196, 331);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(101, 310);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(22, 16);
			this->label81->TabIndex = 30;
			this->label81->Text = L"10";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(101, 289);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(22, 16);
			this->label80->TabIndex = 29;
			this->label80->Text = L"11";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(101, 268);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(22, 16);
			this->label79->TabIndex = 28;
			this->label79->Text = L"10";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(101, 247);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(15, 16);
			this->label78->TabIndex = 27;
			this->label78->Text = L"6";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(101, 226);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(15, 16);
			this->label77->TabIndex = 26;
			this->label77->Text = L"4";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(101, 205);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(22, 16);
			this->label76->TabIndex = 25;
			this->label76->Text = L"11";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(101, 184);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(15, 16);
			this->label75->TabIndex = 24;
			this->label75->Text = L"9";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(101, 163);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(22, 16);
			this->label74->TabIndex = 23;
			this->label74->Text = L"10";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(101, 142);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(15, 16);
			this->label73->TabIndex = 22;
			this->label73->Text = L"5";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(101, 121);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(22, 16);
			this->label72->TabIndex = 21;
			this->label72->Text = L"12";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(101, 100);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(15, 16);
			this->label71->TabIndex = 20;
			this->label71->Text = L"8";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(101, 79);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(15, 16);
			this->label70->TabIndex = 19;
			this->label70->Text = L"3";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(101, 19);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(22, 16);
			this->label51->TabIndex = 17;
			this->label51->Text = L"13";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(4, 1);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(63, 15);
			this->label52->TabIndex = 0;
			this->label52->Text = L"Acrobatics";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(4, 19);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(45, 15);
			this->label53->TabIndex = 1;
			this->label53->Text = L"Arcana";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(4, 37);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(31, 15);
			this->label54->TabIndex = 2;
			this->label54->Text = L"Bluff";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(4, 58);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(65, 15);
			this->label55->TabIndex = 3;
			this->label55->Text = L"Diplomacy";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(4, 79);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(86, 15);
			this->label56->TabIndex = 4;
			this->label56->Text = L"Dungeneering";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(4, 100);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(67, 15);
			this->label57->TabIndex = 5;
			this->label57->Text = L"Endurance";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(4, 121);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(33, 15);
			this->label58->TabIndex = 6;
			this->label58->Text = L"Heal";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(4, 142);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(44, 15);
			this->label59->TabIndex = 7;
			this->label59->Text = L"History";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(4, 163);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(43, 15);
			this->label60->TabIndex = 8;
			this->label60->Text = L"Insight";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(4, 184);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(61, 15);
			this->label61->TabIndex = 9;
			this->label61->Text = L"Intimidate";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(4, 205);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(44, 15);
			this->label62->TabIndex = 10;
			this->label62->Text = L"Nature";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(4, 226);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(66, 15);
			this->label63->TabIndex = 11;
			this->label63->Text = L"Perception";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(4, 247);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(53, 15);
			this->label64->TabIndex = 12;
			this->label64->Text = L"Religion";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(4, 268);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(45, 15);
			this->label65->TabIndex = 13;
			this->label65->Text = L"Stealth";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(4, 289);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(64, 15);
			this->label66->TabIndex = 14;
			this->label66->Text = L"Streetwise";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(4, 310);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(52, 15);
			this->label67->TabIndex = 15;
			this->label67->Text = L"Theivery";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(101, 1);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(22, 16);
			this->label50->TabIndex = 16;
			this->label50->Text = L"10";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(101, 37);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(15, 16);
			this->label68->TabIndex = 17;
			this->label68->Text = L"7";
			this->label68->Click += gcnew System::EventHandler(this, &MyForm::label68_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(101, 58);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(22, 16);
			this->label69->TabIndex = 18;
			this->label69->Text = L"10";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(288, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(56, 20);
			this->label49->TabIndex = 1;
			this->label49->Text = L"Score";
			this->label49->Click += gcnew System::EventHandler(this, &MyForm::label49_Click);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(184, 3);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(42, 20);
			this->label48->TabIndex = 0;
			this->label48->Text = L"Skill";
			this->label48->Click += gcnew System::EventHandler(this, &MyForm::label48_Click);
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
			// NewDay
			// 
			this->NewDay->Location = System::Drawing::Point(486, 391);
			this->NewDay->Name = L"NewDay";
			this->NewDay->Size = System::Drawing::Size(106, 38);
			this->NewDay->TabIndex = 1;
			this->NewDay->Text = L"New Day";
			this->NewDay->UseVisualStyleBackColor = true;
			this->NewDay->Click += gcnew System::EventHandler(this, &MyForm::NewDay_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(374, 391);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 38);
			this->button5->TabIndex = 2;
			this->button5->Text = L"New Encounter";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 442);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->NewDay);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(620, 480);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(620, 480);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Text = L"D&D Interactive Character Sheet";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentHealth))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
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
private: System::Void UseActionPoints_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using an Action Point");
			 this->CurrentActionPoints->Text = "1";
}
private: System::Void Bloodied_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label45_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void tableLayoutPanel1_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label48_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label49_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label53_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label51_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label68_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void AbilityLabel_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void UseSurge_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using a Healing Surge");
}
private: System::Void UseSecondWind_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are using a Second Wind");
}
private: System::Void CurrentHealth_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void NewDay_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("You are starting a New Day");
}
private: System::Void CurrentActionPoints_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label83_Click(System::Object^  sender, System::EventArgs^  e) {
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
    Project5::MyForm myForm;        //NameOfProject::NameOfForm instanceOfForm;
    Application::Run(%myForm);
}