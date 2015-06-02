#include "fraction8tjv.h"
#include <msclr/marshal_cppstd.h>
#pragma once

namespace Project2 {

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
	private: System::Windows::Forms::TextBox^  num1;
	private: System::Windows::Forms::TextBox^  denum1;
	private: System::Windows::Forms::TextBox^  num2;
	private: System::Windows::Forms::TextBox^  denum2;
	private: System::Windows::Forms::TextBox^  numAns;
	private: System::Windows::Forms::TextBox^  denumAns;
	protected: 

	protected: 





	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape3;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::Button^  equalsbutton;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::DomainUpDown^  domainUpDown1;

	private: System::ComponentModel::IContainer^  components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->denum1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->denum2 = (gcnew System::Windows::Forms::TextBox());
			this->numAns = (gcnew System::Windows::Forms::TextBox());
			this->denumAns = (gcnew System::Windows::Forms::TextBox());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->equalsbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->SuspendLayout();
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(13, 67);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(49, 20);
			this->num1->TabIndex = 0;
			// 
			// denum1
			// 
			this->denum1->Location = System::Drawing::Point(13, 114);
			this->denum1->Name = L"denum1";
			this->denum1->Size = System::Drawing::Size(49, 20);
			this->denum1->TabIndex = 1;
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(135, 67);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(49, 20);
			this->num2->TabIndex = 2;
			// 
			// denum2
			// 
			this->denum2->Location = System::Drawing::Point(136, 114);
			this->denum2->Name = L"denum2";
			this->denum2->Size = System::Drawing::Size(49, 20);
			this->denum2->TabIndex = 3;
			// 
			// numAns
			// 
			this->numAns->Location = System::Drawing::Point(263, 67);
			this->numAns->Name = L"numAns";
			this->numAns->ReadOnly = true;
			this->numAns->Size = System::Drawing::Size(49, 20);
			this->numAns->TabIndex = 4;
			// 
			// denumAns
			// 
			this->denumAns->Location = System::Drawing::Point(263, 114);
			this->denumAns->Name = L"denumAns";
			this->denumAns->ReadOnly = true;
			this->denumAns->Size = System::Drawing::Size(49, 20);
			this->denumAns->TabIndex = 5;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(3) {this->lineShape3, 
				this->lineShape2, this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(340, 181);
			this->shapeContainer1->TabIndex = 6;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape3
			// 
			this->lineShape3->Name = L"lineShape3";
			this->lineShape3->X1 = 261;
			this->lineShape3->X2 = 312;
			this->lineShape3->Y1 = 98;
			this->lineShape3->Y2 = 98;
			// 
			// lineShape2
			// 
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 131;
			this->lineShape2->X2 = 184;
			this->lineShape2->Y1 = 100;
			this->lineShape2->Y2 = 100;
			// 
			// lineShape1
			// 
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 13;
			this->lineShape1->X2 = 64;
			this->lineShape1->Y1 = 99;
			this->lineShape1->Y2 = 99;
			// 
			// equalsbutton
			// 
			this->equalsbutton->Location = System::Drawing::Point(209, 88);
			this->equalsbutton->Name = L"equalsbutton";
			this->equalsbutton->Size = System::Drawing::Size(33, 23);
			this->equalsbutton->TabIndex = 7;
			this->equalsbutton->Text = L"=";
			this->equalsbutton->UseVisualStyleBackColor = true;
			this->equalsbutton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Enter Numbers for both left and right fractions, select the desired";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"operation and click on the equal button:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"+");
			this->domainUpDown1->Items->Add(L"-");
			this->domainUpDown1->Items->Add(L"/");
			this->domainUpDown1->Items->Add(L"*");
			this->domainUpDown1->Location = System::Drawing::Point(78, 88);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->ReadOnly = true;
			this->domainUpDown1->Size = System::Drawing::Size(40, 20);
			this->domainUpDown1->TabIndex = 13;
			this->domainUpDown1->Text = L"+";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 181);
			this->Controls->Add(this->domainUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->equalsbutton);
			this->Controls->Add(this->denumAns);
			this->Controls->Add(this->numAns);
			this->Controls->Add(this->denum2);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->denum1);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->shapeContainer1);
			this->Name = L"MyForm";
			this->Text = L"Fraction Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {// ONLY BUTTON THAT REALLY MATTERS
			 String^ num1Temp = this->num1->Text;
			 String^ deNum1Temp = this->denum1->Text;	//take in text value
			 String^ num2Temp = this->num2->Text;
			 String^ deNum2Temp = this->denum2->Text;
			 string num1temp=msclr::interop::marshal_as< std::string >( num1Temp);//convert to a strin from string^
			 string denum1temp=msclr::interop::marshal_as< std::string >( deNum1Temp);
			 string num2temp=msclr::interop::marshal_as< std::string >( num2Temp);
			 string denum2temp=msclr::interop::marshal_as< std::string >( deNum2Temp);
			 bool negativeFlag=0;
			
			 if(num1temp.empty()||denum1temp.empty()||num2temp.empty()||denum2temp.empty()){
			  MessageBox::Show("You Done Goofed, re enter the data in all boxes!");//vaidate data
			 
			 }
			 else
			 {
				 Fraction number1;//initial fraction declaration
				 Fraction number2;
			try{

				Fraction number1(atoi(num1temp.c_str()),atoi(denum1temp.c_str()));//set values in a try, catch if illegal, i.e divide by zero
				Fraction number2(atoi(num2temp.c_str()),atoi(denum2temp.c_str()));
			

				Fraction number3;
					
				if(this->domainUpDown1->Text=="+")//check the operator and adjust 3 accordingly
				{
					number3=number1+number2;
				}
				else if(this->domainUpDown1->Text=="*")
				{
					 number3=number1*number2;
				}
				else if(this->domainUpDown1->Text=="/")
				{
					 number3=number1/number2;
				}
			
				else if(this->domainUpDown1->Text=="-")
				{
					if (number2==number1){
						number3=0;
						 }
					else{ number3=number1-number2;
					
					if (number2>number1){
						negativeFlag=1;
					 }
					}
					
				}
				string num;
				string denum;
				if(number3.numerator()==0||number3.denominator()==1)
				{
				num=to_string(number3.numerator());
				this->numAns->Text=gcnew String(num.c_str());//make single didigt if denum=1 or num =0
				}
				
				else
				{
				 num=to_string(number3.numerator());		//otherwise its  a normal function
				 denum=to_string(number3.denominator());
				if(negativeFlag)//make negative if it needs to be, wasnt properly normalizing
					num="-"+num;
				this->numAns->Text=gcnew String(num.c_str());
				this->denumAns->Text=gcnew String(denum.c_str());
				}
			 }
			 catch (FractionException &e) {
				MessageBox::Show("You Done Goofed, no zero's in the denum!");//error message if u done goofed.

				
			 }
			 }

		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

};
}
