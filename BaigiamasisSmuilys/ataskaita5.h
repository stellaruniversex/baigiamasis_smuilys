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
	/// Summary for ataskaita5
	/// </summary>
	public ref class ataskaita5 : public System::Windows::Forms::Form
	{
	public:
		ataskaita5(System::Windows::Forms::Form ^ menui)
		{
			meniu = menui;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label7;
	public:
	private: System::Windows::Forms::Form ^ meniu;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ataskaita5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 213);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 184);
			this->dataGridView1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 16));
			this->label1->Location = System::Drawing::Point(140, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Kvitų išrašymas";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox2->Location = System::Drawing::Point(237, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 30);
			this->textBox2->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox1->Location = System::Drawing::Point(237, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 30);
			this->textBox1->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label6->Location = System::Drawing::Point(30, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 22);
			this->label6->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label2->Location = System::Drawing::Point(30, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 22);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Prekės pavadinimas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label3->Location = System::Drawing::Point(30, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 22);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Kaina";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox3->Location = System::Drawing::Point(237, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 30);
			this->textBox3->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label4->Location = System::Drawing::Point(30, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 22);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Kiekis";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox4->Location = System::Drawing::Point(99, 403);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 30);
			this->textBox4->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label5->Location = System::Drawing::Point(12, 406);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 22);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Vardas";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button1->Location = System::Drawing::Point(308, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 31);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Išrašyti kvitą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ataskaita5::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button2->Location = System::Drawing::Point(16, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 40);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Įterpti prekę";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ataskaita5::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button3->Location = System::Drawing::Point(253, 167);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(204, 40);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Į pagr. langą";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ataskaita5::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 16));
			this->label7->Location = System::Drawing::Point(140, 448);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(216, 26);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Laukiama išrašymo";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ataskaita5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 511);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"ataskaita5";
			this->Text = L"Kvitu israsymas";
			this->Load += gcnew System::EventHandler(this, &ataskaita5::ataskaita5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ataskaita5_Load(System::Object^  sender, System::EventArgs^  e) { // paruošia formą naudojimui
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	dataGridView1->Columns->Add("Column", "Pavadinimas");
	dataGridView1->Columns->Add("Column", "Kaina");
	dataGridView1->Columns->Add("Column", "Kiekis");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { // uždaro langą
	this->Hide();
	meniu->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // įterpia naują prekę į sąrašą
	// kintamieji
	string pavadinimas = "";
	double kaina = 0;
	int kiekis = 0;
	msclr::interop::marshal_context context;
	// nuskaito kintamuosius iš textBox
	pavadinimas = context.marshal_as<std::string>(textBox1->Text);
	kaina = double::Parse(textBox2->Text);
	kiekis = int::Parse(textBox3->Text);
	// išvalo TextBox
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	// reikalingas, kad veiktų string įterpimas į dataGridView
	String^ db_pavadinimas = gcnew String(pavadinimas.c_str());
	dataGridView1->Rows->Add(db_pavadinimas, kaina, kiekis);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // išspausdina kvitą
	ofstream fs("Kvitas.txt");
	string vardas = "";
	double value = 0;
	msclr::interop::marshal_context context;
	vardas = context.marshal_as<std::string>(textBox4->Text);
	textBox4->Text = "";
	fs << "Vardas: " << vardas << endl;
	fs << "      Prekes pavadinimas        |  Kaina  | Kiekis" << endl;
	for (size_t i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
	{
		value += Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value) * Convert::ToInt32(dataGridView1->Rows[i]->Cells[2]->Value);
		fs << setw(31) << context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[0]->Value->ToString()) << " | " << setw(7) << Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value) << " | " << Convert::ToInt32(dataGridView1->Rows[i]->Cells[2]->Value) << endl;
	}
	fs << "Galutine prekiu suma: " << value;
	label7->Text = "Kvitas išspausdintas";
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	dataGridView1->Columns->Add("Column", "Pavadinimas");
	dataGridView1->Columns->Add("Column", "Kaina");
	dataGridView1->Columns->Add("Column", "Kiekis");
}
};
}
