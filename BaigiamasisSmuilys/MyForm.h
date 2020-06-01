#pragma once
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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(System::Windows::Forms::Form ^ menui, Prekes * pk)
		{
			meniu = menui;
			prekes = pk;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label7;
	public:
	private: System::Windows::Forms::Form ^ meniu;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pavadinimas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F));
			this->label2->Location = System::Drawing::Point(26, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(435, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prekės įterpimas/redagavimas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label3->Location = System::Drawing::Point(12, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Kaina";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label4->Location = System::Drawing::Point(12, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Galiojimo data";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label5->Location = System::Drawing::Point(12, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Kiekis";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label6->Location = System::Drawing::Point(12, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Gamintojas";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox1->Location = System::Drawing::Point(231, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 30);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox2->Location = System::Drawing::Point(231, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 30);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox3->Location = System::Drawing::Point(231, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 30);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox4->Location = System::Drawing::Point(232, 158);
			this->textBox4->MaxLength = 4;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 30);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox5->Location = System::Drawing::Point(230, 197);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(203, 30);
			this->textBox5->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button1->Location = System::Drawing::Point(32, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Įterpti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox6->Location = System::Drawing::Point(324, 158);
			this->textBox6->MaxLength = 2;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(52, 30);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox7->Location = System::Drawing::Point(381, 158);
			this->textBox7->MaxLength = 2;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(52, 30);
			this->textBox7->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button2->Location = System::Drawing::Point(230, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 40);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Į pagr. langą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button3->Location = System::Drawing::Point(129, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 40);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Išsaugoti duomenis";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 334);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 224);
			this->dataGridView1->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(86, 561);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(290, 22);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Laukiama įterpimo/redagavimo";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 611);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Prekes iterpimas/redagavimas";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	meniu->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
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
	int a = 0;
	ifstream fd("Prekes.txt");
	for (size_t i = 0; !fd.eof(); i++)
	{
		prekes->prekes[i].Skait(fd);
		String^ db_pavadinimas = gcnew String(prekes->prekes[i].getPavadinimas().c_str());
		String^ db_gamintojas = gcnew String(prekes->prekes[i].getGamintojas().c_str());
		dataGridView1->Rows->Add(db_pavadinimas, db_gamintojas, prekes->prekes[i].getKaina(),
		prekes->prekes[i].getMetai(), prekes->prekes[i].getMenuo(), prekes->prekes[i].getDiena(), prekes->prekes[i].getKiekis());
		a++;
	}
	msclr::interop::marshal_context context;
	string pavadinimas = "";
	string gamintojas = "";
	double kaina = 0;
	int metai = 0;
	int menuo = 0;
	int diena = 0;
	int kiekis = 0;
	pavadinimas = context.marshal_as<std::string>(textBox1->Text);
	gamintojas = context.marshal_as<std::string>(textBox2->Text);
	kaina = double::Parse(textBox3->Text);
	metai = int::Parse(textBox4->Text);
	menuo = int::Parse(textBox6->Text);
	diena = int::Parse(textBox7->Text);
	kiekis = int::Parse(textBox5->Text);
	String^ db_pavadinimas = gcnew String(pavadinimas.c_str());
	String^ db_gamintojas = gcnew String(gamintojas.c_str());
	dataGridView1->Rows->Add(db_pavadinimas, db_gamintojas, kaina, metai, menuo, diena, kiekis);
	prekes->prekes[a].Iterpti(pavadinimas, gamintojas, kaina, 
		metai, menuo, diena, kiekis);
	ofstream fs("Prekes.txt");
	for (size_t j = 0; j <= a; j++)
	{
		fs << prekes->prekes[j].getPavadinimas() << ";" << prekes->prekes[j].getGamintojas() << ";" << prekes->prekes[j].getKaina() << " " << prekes->prekes[j].getMetai()
			<< " " << prekes->prekes[j].getMenuo() << " " << prekes->prekes[j].getDiena() << " " << prekes->prekes[j].getKiekis();
		if (j < a) fs << endl;
	}
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = 0;
	msclr::interop::marshal_context context;
	for (size_t i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
	{
		prekes->prekes[i].setPavadinimas(context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[0]->Value->ToString()));
		prekes->prekes[i].setGamintojas(context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[1]->Value->ToString()));
		prekes->prekes[i].setKaina(Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value));
		prekes->prekes[i].setData(Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value), Convert::ToInt32(dataGridView1->Rows[i]->Cells[4]->Value), Convert::ToInt32(dataGridView1->Rows[i]->Cells[5]->Value));
		prekes->prekes[i].setKiekis(Convert::ToInt32(dataGridView1->Rows[i]->Cells[6]->Value));
		a++;
	}
	ofstream fs("Prekes.txt");
	for (size_t j = 0; j < a; j++)
	{
		fs << prekes->prekes[j].getPavadinimas() << ";" << prekes->prekes[j].getGamintojas() << ";" << prekes->prekes[j].getKaina() << " " << prekes->prekes[j].getMetai()
			<< " " << prekes->prekes[j].getMenuo() << " " << prekes->prekes[j].getDiena() << " " << prekes->prekes[j].getKiekis();
		if (j < a - 1) fs << endl;
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
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
};
}
