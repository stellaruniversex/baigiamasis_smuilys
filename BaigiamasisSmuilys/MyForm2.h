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
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(System::Windows::Forms::Form ^ menui, NupirktaPrekes * np)
		{
			meniu = menui;
			nupirktos = np;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	public:
	private: System::Windows::Forms::Form ^ meniu;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
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
		NupirktaPrekes * nupirktos;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button2->Location = System::Drawing::Point(222, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 40);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Į pagr. langą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button1->Location = System::Drawing::Point(21, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 40);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Įterpti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox4->Location = System::Drawing::Point(233, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 30);
			this->textBox4->TabIndex = 36;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox3->Location = System::Drawing::Point(233, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 30);
			this->textBox3->TabIndex = 35;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox2->Location = System::Drawing::Point(233, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 30);
			this->textBox2->TabIndex = 34;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox1->Location = System::Drawing::Point(233, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 30);
			this->textBox1->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label6->Location = System::Drawing::Point(26, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 22);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Pirkėjo vardas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label4->Location = System::Drawing::Point(26, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 22);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Kaina";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label3->Location = System::Drawing::Point(26, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 22);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Kiekis";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label1->Location = System::Drawing::Point(26, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 22);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Prekės pavadinimas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16.25F));
			this->label2->Location = System::Drawing::Point(16, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(456, 26);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Nupirktų prekių įterpimas/redagavimas";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 294);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 224);
			this->dataGridView1->TabIndex = 39;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button3->Location = System::Drawing::Point(122, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 40);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Išsaugoti duomenis";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(93, 521);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(290, 22);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Laukiama įterpimo/redagavimo";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 611);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
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
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
		//skaitPrekes(prekes, "Prekes.txt", a);
		std::ifstream fd("NPrekes.txt");
		dataGridView1->Columns->Add("Column", "Pavadinimas");
		dataGridView1->Columns->Add("Column", "Vardas");
		dataGridView1->Columns->Add("Column", "Kaina");
		dataGridView1->Columns->Add("Column", "Kiekis");
		for (size_t i = 0; !fd.eof(); i++)
		{
			nupirktos->nupirktos[i].Skait(fd);
			String^ db_pavadinimas = gcnew String(nupirktos->nupirktos[i].getPavadinimas().c_str());
			String^ db_vardas = gcnew String(nupirktos->nupirktos[i].getVardas().c_str());
			dataGridView1->Rows->Add(db_pavadinimas, db_vardas, nupirktos->nupirktos[i].getKaina(), nupirktos->nupirktos[i].getKiekis());
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
		dataGridView1->Columns->Add("Column", "Pavadinimas");
		dataGridView1->Columns->Add("Column", "Vardas");
		dataGridView1->Columns->Add("Column", "Kaina");
		dataGridView1->Columns->Add("Column", "Kiekis");
		int a = 0;
		ifstream fd("NPrekes.txt");
		for (size_t i = 0; !fd.eof(); i++)
		{
			nupirktos->nupirktos[i].Skait(fd);
			String^ db_pavadinimas = gcnew String(nupirktos->nupirktos[i].getPavadinimas().c_str());
			String^ db_vardas = gcnew String(nupirktos->nupirktos[i].getVardas().c_str());
			dataGridView1->Rows->Add(db_pavadinimas, db_vardas, nupirktos->nupirktos[i].getKaina(), nupirktos->nupirktos[i].getKiekis());
			a++;
		}
		msclr::interop::marshal_context context;
		string vardas = "";
		string pavadinimas = "";
		int kiekis = 0;
		double kaina = 0;
		pavadinimas = context.marshal_as<std::string>(textBox1->Text);
		vardas = context.marshal_as<std::string>(textBox2->Text);
		kiekis = int::Parse(textBox3->Text);
		kaina = double::Parse(textBox4->Text);
		String^ db_pavadinimas = gcnew String(pavadinimas.c_str());
		String^ db_vardas = gcnew String(vardas.c_str());
		dataGridView1->Rows->Add(db_pavadinimas, db_vardas, kaina, kiekis);
		nupirktos->nupirktos[a].Iterpti(pavadinimas, vardas, kiekis, kaina);
		ofstream fs("NPrekes.txt");
		for (size_t j = 0; j <= a; j++)
		{
			fs << nupirktos->nupirktos[j].getPavadinimas() << ";" << nupirktos->nupirktos[j].getVardas() << ";" << nupirktos->nupirktos[j].getKaina() << " " 
			<< nupirktos->nupirktos[j].getKiekis();
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
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		meniu->Show();
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = 0;
	msclr::interop::marshal_context context;
	for (size_t i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
	{
		nupirktos->nupirktos[i].setPavadinimas(context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[0]->Value->ToString()));
		nupirktos->nupirktos[i].setVardas(context.marshal_as<std::string>(dataGridView1->Rows[i]->Cells[1]->Value->ToString()));
		nupirktos->nupirktos[i].setKaina(Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value));
		nupirktos->nupirktos[i].setKiekis(Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value));
		a++;
	}
	ofstream fs("NPrekes.txt");
	for (size_t j = 0; j < a; j++)
	{
		fs << nupirktos->nupirktos[j].getPavadinimas() << ";" << nupirktos->nupirktos[j].getVardas() << ";" << nupirktos->nupirktos[j].getKaina() << " " << nupirktos->nupirktos[j].getKiekis();
		if (j < a - 1) fs << endl;
	}
	label5->Text = "Duomenys issaugoti";
	Sleep(100);
	label5->Text = "Laukiama iterpimo/redagavimo";
}
};
}
