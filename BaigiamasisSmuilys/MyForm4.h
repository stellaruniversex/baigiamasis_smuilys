﻿#pragma once
#include "Funkcijos.h"

namespace BaigiamasisSmuilys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(System::Windows::Forms::Form ^ menui, Prekes * val)
		{
			meniu = menui;
			InitializeComponent();
			prekes = val;
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TextBox^  textBox9;
	public:
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label7;



	private: System::Windows::Forms::Form ^ meniu;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Prekes * prekes;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16.25F));
			this->label2->Location = System::Drawing::Point(133, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 26);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Prekių ataskaita";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 358);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 241);
			this->dataGridView1->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label1->Location = System::Drawing::Point(12, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 22);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Gamintojas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label3->Location = System::Drawing::Point(11, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 22);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Kaina, nuo/iki";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox1->Location = System::Drawing::Point(302, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 29);
			this->textBox1->TabIndex = 35;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox2->Location = System::Drawing::Point(302, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 29);
			this->textBox2->TabIndex = 36;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox4->Location = System::Drawing::Point(304, 210);
			this->textBox4->MaxLength = 2;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(34, 29);
			this->textBox4->TabIndex = 55;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label4->Location = System::Drawing::Point(12, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 22);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Pavadinimas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label5->Location = System::Drawing::Point(12, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 22);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Gal. data, nuo/iki";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label6->Location = System::Drawing::Point(12, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 22);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Kiekis, nuo/iki";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox3->Location = System::Drawing::Point(344, 245);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 29);
			this->textBox3->TabIndex = 45;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox5->Location = System::Drawing::Point(210, 245);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(128, 29);
			this->textBox5->TabIndex = 44;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox7->Location = System::Drawing::Point(209, 179);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(128, 29);
			this->textBox7->TabIndex = 44;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox8->Location = System::Drawing::Point(343, 179);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(128, 29);
			this->textBox8->TabIndex = 45;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12.5F));
			this->button1->Location = System::Drawing::Point(11, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 48);
			this->button1->TabIndex = 46;
			this->button1->Text = L"Generuoti ataskaitą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->button2->Location = System::Drawing::Point(249, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 48);
			this->button2->TabIndex = 47;
			this->button2->Text = L"Grįžti į pagr. langą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox9->Location = System::Drawing::Point(264, 210);
			this->textBox9->MaxLength = 2;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(34, 29);
			this->textBox9->TabIndex = 48;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox10->Location = System::Drawing::Point(210, 210);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(48, 29);
			this->textBox10->TabIndex = 49;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox6->Location = System::Drawing::Point(344, 211);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(48, 29);
			this->textBox6->TabIndex = 52;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox11->Location = System::Drawing::Point(396, 211);
			this->textBox11->MaxLength = 2;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(34, 29);
			this->textBox11->TabIndex = 51;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox12->Location = System::Drawing::Point(436, 211);
			this->textBox12->MaxLength = 2;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(34, 29);
			this->textBox12->TabIndex = 50;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 16.25F));
			this->label7->Location = System::Drawing::Point(133, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(228, 26);
			this->label7->TabIndex = 53;
			this->label7->Text = L"Filtruoti pagal...";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 611);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm4";
			this->Text = L"Prekiu ataskaita";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// dabartinis filtravimo planas
// surasti prekes pavadinima ir gamintoja pagal string ieskojima 
// filtruoti skaicius pagal paprasta "if" funkcija
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	meniu->Show();
}
private: System::Void MyForm4_Load(System::Object^  sender, System::EventArgs^  e) { // paruošia formą naudojimui ir įdeda visą prekių sąrašą
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	dataGridView1->Columns->Add("Column", "Pavadinimas");
	dataGridView1->Columns->Add("Column", "Gamintojas");
	dataGridView1->Columns->Add("Column", "Kaina");
	dataGridView1->Columns->Add("Column", "Metai");
	dataGridView1->Columns->Add("Column", "Menuo");
	dataGridView1->Columns->Add("Column", "Diena");
	dataGridView1->Columns->Add("Column", "Kiekis");
	std::ifstream fd("Prekes.txt");
	//msclr::interop::marshal_context context;
	//string a = context.marshal_as<std::string>(dataGridView1->Rows[0]->Cells[0]->Value);
	//prekes->prekes[0].setPavadinimas(a);
	for (size_t i = 0; !fd.eof(); i++)
	{
		prekes->prekes[i].Skait(fd);
		String^ db_pavadinimas = gcnew String(prekes->prekes[i].getPavadinimas().c_str());
		String^ db_gamintojas = gcnew String(prekes->prekes[i].getGamintojas().c_str());
		dataGridView1->Rows->Add(db_pavadinimas, db_gamintojas, prekes->prekes[i].getKaina(),
			prekes->prekes[i].getMetai(), prekes->prekes[i].getMenuo(), prekes->prekes[i].getDiena(), prekes->prekes[i].getKiekis());
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	ofstream fs("PrekesAtaskaita.txt");
	dataGridView1->Columns->Add("Column", "Pavadinimas");
	dataGridView1->Columns->Add("Column", "Gamintojas");
	dataGridView1->Columns->Add("Column", "Kaina");
	dataGridView1->Columns->Add("Column", "Metai");
	dataGridView1->Columns->Add("Column", "Menuo");
	dataGridView1->Columns->Add("Column", "Diena");
	dataGridView1->Columns->Add("Column", "Kiekis");
	msclr::interop::marshal_context context;
	// visi kintamieji reikalingi ieskojimui
	string pavadinimas = "";
	string gamintojas = "";
	double kainamin = 0;
	int metaimin = 0;
	int menuomin = 0;
	int dienamin = 0;
	int kiekismin = 0;
	double kainamax = 0;
	int metaimax = 0;
	int menuomax = 0;
	int dienamax = 0;
	int kiekismax = 0;
	bool foundgamintojas = false;
	bool foundpavadinimas = false;
	bool foundkaina = false;
	bool founddatamin = false;
	bool founddatamax = false;
	bool foundkiekis = false;
	pavadinimas = context.marshal_as<std::string>(textBox1->Text);
	gamintojas = context.marshal_as<std::string>(textBox2->Text);
	// reikalingi, kad nemetytu FormatException
	if (textBox3->Text == "") textBox3->Text = "9999";
	if (textBox4->Text == "") textBox4->Text = "1";
	if (textBox5->Text == "") textBox5->Text = "0";
	if (textBox6->Text == "") textBox6->Text = "9999";
	if (textBox7->Text == "") textBox7->Text = "0";
	if (textBox8->Text == "") textBox8->Text = "9999";
	if (textBox9->Text == "") textBox9->Text = "1";
	if (textBox10->Text == "") textBox10->Text = "0";
	if (textBox11->Text == "") textBox11->Text = "12";
	if (textBox12->Text == "") textBox12->Text = "31";
	kainamin = double::Parse(textBox7->Text);
	metaimin = int::Parse(textBox10->Text);
	menuomin = int::Parse(textBox9->Text);
	dienamin = int::Parse(textBox4->Text);
	kiekismin = int::Parse(textBox5->Text);
	kainamax = double::Parse(textBox8->Text);
	metaimax = int::Parse(textBox6->Text);
	menuomax = int::Parse(textBox11->Text);
	dienamax = int::Parse(textBox12->Text);
	kiekismax = int::Parse(textBox3->Text);
	String^ db_pavadinimas = gcnew String(pavadinimas.c_str());
	String^ db_gamintojas = gcnew String(gamintojas.c_str());
	std::ifstream fd("Prekes.txt");
	fs << "         Pavadinimas           |      Gamintojas      |  Kaina  | Gal. data | Kiekis" << endl;
	//msclr::interop::marshal_context context;
	//string a = context.marshal_as<std::string>(dataGridView1->Rows[0]->Cells[0]->Value);
	//prekes->prekes[0].setPavadinimas(a);
	for (size_t i = 0; !fd.eof(); i++)
	{
		prekes->prekes[i].Skait(fd); // skaito iš Prekes.txt
		// tikrina, ar įrašas visas sąlygas patenkina
		if (prekes->prekes[i].getPavadinimas().find(pavadinimas) != string::npos) foundpavadinimas = true;
		if (prekes->prekes[i].getGamintojas().find(gamintojas) != string::npos) foundgamintojas = true;
		if (prekes->prekes[i].getKaina() >= kainamin && prekes->prekes[i].getKaina() <= kainamax) foundkaina = true;
		if (prekes->prekes[i].getMetai() > metaimin || prekes->prekes[i].getMetai() == metaimin && prekes->prekes[i].getMenuo() > menuomin || prekes->prekes[i].getMetai() == metaimin && prekes->prekes[i].getMenuo() == menuomin && prekes->prekes[i].getDiena() >= dienamin) founddatamin = true;
		if (prekes->prekes[i].getMetai() < metaimax || prekes->prekes[i].getMetai() == metaimax && prekes->prekes[i].getMenuo() < menuomax || prekes->prekes[i].getMetai() == metaimax && prekes->prekes[i].getMenuo() == menuomax && prekes->prekes[i].getDiena() <= dienamax) founddatamax = true;
		if (prekes->prekes[i].getKiekis() >= kiekismin && prekes->prekes[i].getKiekis() <= kiekismax) foundkiekis = true;
		if (foundpavadinimas == true && foundgamintojas == true && foundkaina == true && founddatamin == true && founddatamax == true && foundkiekis == true)
		{
			String^ db_pavadinimas = gcnew String(prekes->prekes[i].getPavadinimas().c_str());
			String^ db_gamintojas = gcnew String(prekes->prekes[i].getGamintojas().c_str());
			dataGridView1->Rows->Add(db_pavadinimas, db_gamintojas, prekes->prekes[i].getKaina(),
				prekes->prekes[i].getMetai(), prekes->prekes[i].getMenuo(), prekes->prekes[i].getDiena(), prekes->prekes[i].getKiekis());
			fs << setw(30) << prekes->prekes[i].getPavadinimas() << " | " << setw(20) << prekes->prekes[i].getGamintojas() << " | " << setw(7)
				<< prekes->prekes[i].getKaina() << " | " << prekes->prekes[i].getMetai() << " " << prekes->prekes[i].getMenuo() << " " << setw(2) << prekes->prekes[i].getDiena() << " | "
				<< prekes->prekes[i].getKiekis() << endl; // generuoja ataskaitą PrekesAtaskaita.txt faile
		}
		// sugrazina bool i pradine padeti
		foundgamintojas = false;
		foundpavadinimas = false;
		foundkaina = false;
		founddatamin = false;
		founddatamax = false;
		foundkiekis = false;
	}
	// atstato visus textBox i tuscia lauka
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();
	textBox10->Clear();
	textBox11->Clear();
	textBox12->Clear();
	fd.close();
}
};
}
