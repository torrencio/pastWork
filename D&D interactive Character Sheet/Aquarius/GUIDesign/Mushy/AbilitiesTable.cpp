#include "AbilitiesTable.h"
#define FONTSIZE 9

void addAbilityProp(AbilitiesTable::AbilitiesTableForm^ card, String^ text , bool italic){
	

	System::Windows::Forms::Label^  text_label = textLabel(text, italic);
	text_label->MaximumSize = System::Drawing::Size(379, 999999);
	System::Windows::Forms::FlowLayoutPanel^  propLayout = createPropLayout(card);

	propLayout->Controls->Add(text_label);
	card->flowLayoutPanel1->Controls->Add(propLayout);

	propLayout->ResumeLayout(false);
	propLayout->PerformLayout();

}

void addAbilityProp(AbilitiesTable::AbilitiesTableForm^ card,String^ title,String^ text){
	

	System::Windows::Forms::Label^  text_label = textLabel(text, false);
	text_label->MaximumSize = System::Drawing::Size(289, 999999);

	System::Windows::Forms::Label^  title_label = titleLabel(title);
	System::Windows::Forms::FlowLayoutPanel^  propLayout = createPropLayout(card);

	propLayout->Controls->Add(title_label);
	propLayout->Controls->Add(text_label);

	card->flowLayoutPanel1->Controls->Add(propLayout);

	propLayout->ResumeLayout(false);
	propLayout->PerformLayout();

}

System::Windows::Forms::Label^ textLabel(String^ text, bool italic){
	System::Drawing::FontStyle style;
	int size;
	if (italic){
		style = System::Drawing::FontStyle::Italic;
		size = FONTSIZE+1;
	}
	else{
		style = System::Drawing::FontStyle::Regular;
		size = FONTSIZE;
	}
	// 
	// text_label
	// 
	System::Windows::Forms::Label^  text_label = gcnew System::Windows::Forms::Label();

	text_label->AutoSize = true;
	text_label->Dock = System::Windows::Forms::DockStyle::Left;

	text_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", size, style, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	text_label->Location = System::Drawing::Point(55, 0);
	text_label->Margin = System::Windows::Forms::Padding(0);
	text_label->Name = L"random";
	text_label->Size = System::Drawing::Size(46, 17);
	text_label->TabIndex = 1;
	text_label->Text = text;
	text_label->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
	//
	return text_label;
}

System::Windows::Forms::Label^ titleLabel(String^ title){

	// 
	// title_label
	// 
	System::Windows::Forms::Label^  title_label = gcnew System::Windows::Forms::Label();

	title_label->AutoSize = true;
	title_label->Dock = System::Windows::Forms::DockStyle::Left;
	title_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", FONTSIZE, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	title_label->Location = System::Drawing::Point(3, 0);
	title_label->Margin = System::Windows::Forms::Padding(3, 0, 0, 0);
	title_label->MaximumSize = System::Drawing::Size(90, 999999);
	title_label->Name = L"title";
	title_label->Size = System::Drawing::Size(52, 17);
	title_label->TabIndex = 0;
	title_label->Text = title;

	return title_label;
}

System::Windows::Forms::FlowLayoutPanel^ createPropLayout(AbilitiesTable::AbilitiesTableForm^ card){

	// 
	// propLayout
	// 
	System::Windows::Forms::FlowLayoutPanel^  propLayout = gcnew System::Windows::Forms::FlowLayoutPanel();
	propLayout->SuspendLayout();

	propLayout->AutoSize = true;
	propLayout->BackColor = card->propColor1;
	propLayout->Dock = System::Windows::Forms::DockStyle::Top;
	propLayout->Location = System::Drawing::Point(0, 3);
	propLayout->Margin = System::Windows::Forms::Padding(0, 3, 0, 0);
	propLayout->MinimumSize = System::Drawing::Size(380, 20);
	propLayout->Name = L"propLayout";
	propLayout->Size = System::Drawing::Size(380, 20);
	propLayout->TabIndex = 0;
	//

	card->propColor1 = card->propcolor2;
	card->propcolor2 = propLayout->BackColor;

	return propLayout;
}