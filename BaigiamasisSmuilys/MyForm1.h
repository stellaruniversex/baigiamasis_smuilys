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
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(System::Windows::Forms::Form ^ menui, Pirkejai * pr)
		{
			meniu = menui;
			pirkejai = pr;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label5;
	public:
	private: System::Windows::Forms::Form ^ meniu;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Pirkejai * pirkejai;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button2->Location = System::Drawing::Point(229, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 40);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Į pagr. langą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button1->Location = System::Drawing::Point(29, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 40);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Įterpti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox4->Location = System::Drawing::Point(240, 166);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 30);
			this->textBox4->TabIndex = 25;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox3->Location = System::Drawing::Point(240, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 30);
			this->textBox3->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox2->Location = System::Drawing::Point(240, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 30);
			this->textBox2->TabIndex = 23;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox1->Location = System::Drawing::Point(240, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 30);
			this->textBox1->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label6->Location = System::Drawing::Point(33, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 22);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Pavardė";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label4->Location = System::Drawing::Point(33, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 22);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Gyvenamoji vieta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label3->Location = System::Drawing::Point(33, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 22);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Telefonas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label1->Location = System::Drawing::Point(33, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 22);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Vardas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16.25F));
			this->label2->Location = System::Drawing::Point(63, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(360, 26);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Pirkėjų įterpimas/redagavimas";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button3->Location = System::Drawing::Point(121, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 40);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Išsaugoti duomenis";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 305);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 224);
			this->dataGridView1->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(104, 532);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(290, 22);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Laukiama įterpimo/redagavimo";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 561);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm1";
			this->Text = L"Pirkeju iterpimas/redagavimas";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
		dataGridView1->Columns->Add("Column", "ID");
		dataGridView1->Columns->Add("Column", "Vardas");
		dataGridView1->Columns->Add("Column", "Pavarde");
		dataGridView1->Columns->Add("Column", "Telefonas");
		dataGridView1->Columns->Add("Column", "Gyv. vieta");
		std::ifstream fd("Pirkejai.txt");
		for (size_t i = 0; !fd.eof(); i++)
		{
			pirkejai->pirkejai[i].Skait(fd);
			String^ db_vardas = gcnew String(pirkejai->pirkejai[i].getVardas().c_str());
			String^ db_pavarde = gcnew String(pirkejai->pirkejai[i].getPavarde().c_str());
			String^ db_gyvvieta = gcnew String(pirkejai->pirkejai[i].getGyvVieta().c_str());
			dataGridView1->Rows->Add(db_vardas, db_pavarde, pirkejai->pirkejai[i].getTelefonas(), db_gyvvieta);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		meniu->Show();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	dataGridView1->Columns->Add("Column", "Vardas");
	dataGridView1->Columns->Add("Column", "Pavarde");
	dataGridView1->Columns->Add("Column", "Telefonas");
	dataGridView1->Columns->Add("Column", "Gyv. vieta");
	int a = 0;
	ifstream fd("Pirkejai.txt");
	// įterpia viska iš sąrašo į dataGridView
	for (size_t i = 0; !fd.eof(); i++)
	{
		pirkejai->pirkejai[i].Skait(fd);
		String^ db_vardas = gcnew String(pirkejai->pirkejai[i].getVardas().c_str());
		String^ db_pavarde = gcnew String(pirkejai->pirkejai[i].getPavarde().c_str());
		String^ db_gyvvieta = gcnew String(pirkejai->pirkejai[i].getGyvVieta().c_str());
		dataGridView1->Rows->Add(db_vardas, db_pavarde, pirkejai->pirkejai[i].getTelefonas(), db_gyvvieta);
		a++;
	}
	msclr::interop::marshal_context context;
	// kintamieji
	string vardas = "";
	string pavarde = "";
	string gyvenamoji = "";
	int telefonas = 0;
	vardas = context.marshal_as<std::string>(textBox1->Text);
	pavarde = context.marshal_as<std::string>(textBox2->Text);
	gyvenamoji = context.marshal_as<std::string>(textBox4->Text);
	telefonas = int::Parse(textBox3->Text);
	String^ db_vardas = gcnew String(vardas.c_str());
	String^ db_pavarde = gcnew String(pavarde.c_str());
	String^ db_gyvvieta = gcnew String(gyvenamoji.c_str());
	dataGridView1->Rows->Add(db_vardas, db_pavarde, telefonas, db_gyvvieta);
	pirkejai->pirkejai[a].Iterpti(vardas, pavarde, telefonas, gyvenamoji);
	ofstream fs("Pirkejai.txt");
	for (size_t j = 0; j <= a; j++)
	{
		fs << pirkejai->pirkejai[j].getVardas() << ";" << pirkejai->pirkejai[j].getPavarde() << ";" << pirkejai->pirkejai[j].getGyvVieta() << ";" << pirkejai->pirkejai[j].getTelefonas();
		if (j < a) fs << endl;
	}
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	label5->Text = "Duomenys issaugoti";
	Sleep(100);
	label5->Text = "Laukiama iterpimo/redagavimo";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = 0;
	msclr::interop::marshal_context context;
	// įterpia viską į dataGridView
	for (size_t i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
	{
		pirkejai->pirkejai[i].setVardas(context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[0]->Value->ToString()));
		pirkejai->pirkejai[i].setPavarde(context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[1]->Value->ToString()));
		pirkejai->pirkejai[i].setTelefonas(Convert::ToInt64(dataGridView1->Rows[i]->Cells[2]->Value));
		pirkejai->pirkejai[i].setGyvVieta(context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[3]->Value->ToString()));
		a++;
	}
	ofstream fs("Pirkejai.txt");
	for (size_t j = 0; j < a; j++)
	{
		fs << pirkejai->pirkejai[j].getVardas() << ";" << pirkejai->pirkejai[j].getPavarde() << ";" << pirkejai->pirkejai[j].getGyvVieta() << ";" << pirkejai->pirkejai[j].getTelefonas();
		if (j < a - 1) fs << endl;
	}
	label5->Text = "Duomenys issaugoti";
	Sleep(100);
	label5->Text = "Laukiama iterpimo/redagavimo";
}
};
}
