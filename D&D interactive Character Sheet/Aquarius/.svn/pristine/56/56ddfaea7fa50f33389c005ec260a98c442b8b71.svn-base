#include "MyForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Diagnostics;

namespace Project5{
	void MyForm::head_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ head_details = gcnew String(details.at(0).c_str());
		MessageBox::Show(head_details);
	}
	void MyForm::neck_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ neck_details = gcnew String(details.at(1).c_str());
		MessageBox::Show(neck_details);
	}
	void MyForm::arms_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ arm_details = gcnew String(details.at(2).c_str());
		MessageBox::Show(arm_details);
	}
	void MyForm::rings_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(3).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::hands_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(4).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::main_hand_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(5).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::off_hand_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(6).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::waist_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(7).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::armour_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(8).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::feet_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(9).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::tattoo_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(10).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::ki_focus_details_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Character charact = Character();
		vector<string> details = charact.getDetails();
		String^ show_details = gcnew String(details.at(11).c_str());
		MessageBox::Show(show_details);
	}
	void MyForm::Fill_values_Click(System::Object^  sender, System::EventArgs^  e) {
		Character player = Character();
		vector<string> equipment = player.getEquipment();
		for (int i = 0; i < equipment.size(); i++){
			string equip = equipment.at(i);
			String^ equipment = gcnew String(equip.c_str());
			switch (i){
			case 0:
				this->head_equip->Text = equipment;
			case 1:
				this->neck_equip->Text = equipment;
			case 2:
				this->arm_equip->Text = equipment;
			case 3:
				this->ring_equip->Text = equipment;
			case 4:
				this->hand_equip->Text = equipment;
			case 5:
				this->mainhand_equip->Text = equipment;
			case 6:
				this->offhand_equip->Text = equipment;
			case 7:
				this->waist_equip->Text = equipment;
			case 8:
				this->armour_equip->Text = equipment;
			case 9:
				this->feet_equip->Text = equipment;
			case 10:
				this->tattoo_equip->Text = equipment;
			case 11:
				this->ki_focus_equip->Text = equipment;
			}
		}

	}
}

