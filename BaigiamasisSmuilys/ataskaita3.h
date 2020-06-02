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
	/// Summary for ataskaita3
	/// </summary>
	public ref class ataskaita3 : public System::Windows::Forms::Form
	{
	public:
		ataskaita3(System::Windows::Forms::Form ^ menui, NupirktaPrekes * np)
		{
			meniu = menui;
			InitializeComponent();
			nupirktos = np;
			//
			//TODO: Add the constructor code here
			//
		}

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	public:
	private: System::Windows::Forms::Form ^ meniu;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ataskaita3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  name1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 272);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(460, 238);
			this->dataGridView1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 16));
			this->label1->Location = System::Drawing::Point(111, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nup. prekių ataskaita";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label4->Location = System::Drawing::Point(13, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 22);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Prekės pavadinimas";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox2->Location = System::Drawing::Point(302, 109);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 29);
			this->textBox2->TabIndex = 45;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox1->Location = System::Drawing::Point(302, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 29);
			this->textBox1->TabIndex = 44;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label2->Location = System::Drawing::Point(13, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 22);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Pirkėjo vardas";
			// 
			// name1
			// 
			this->name1->AutoSize = true;
			this->name1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->name1->Location = System::Drawing::Point(148, 49);
			this->name1->Name = L"name1";
			this->name1->Size = System::Drawing::Size(170, 22);
			this->name1->TabIndex = 41;
			this->name1->Text = L"Filtruoti pagal:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox3->Location = System::Drawing::Point(302, 144);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(87, 29);
			this->textBox3->TabIndex = 48;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label3->Location = System::Drawing::Point(8, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 22);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Kiekis, nuo/iki";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox4->Location = System::Drawing::Point(302, 179);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(87, 29);
			this->textBox4->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label5->Location = System::Drawing::Point(12, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 22);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Kaina, nuo/iki";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->button2->Location = System::Drawing::Point(253, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 48);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Grįžti į pagr. langą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ataskaita3::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12.5F));
			this->button1->Location = System::Drawing::Point(12, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 48);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Generuoti ataskaitą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ataskaita3::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox5->Location = System::Drawing::Point(395, 144);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(77, 29);
			this->textBox5->TabIndex = 54;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox6->Location = System::Drawing::Point(395, 179);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(77, 29);
			this->textBox6->TabIndex = 55;
			// 
			// ataskaita3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 521);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->name1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"ataskaita3";
			this->Text = L"Nupirktu prekiu ataskaita";
			this->Load += gcnew System::EventHandler(this, &ataskaita3::ataskaita3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		meniu->Show();
	}
	private: System::Void ataskaita3_Load(System::Object^  sender, System::EventArgs^  e) { // paruošia formą naudojimui ir įdeda visą nup. prekių sąrašą
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // visas funkcionalumas čia
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	ofstream fs("NPrekesAtaskaita.txt");
	ifstream fd("NPrekes.txt");
	msclr::interop::marshal_context context;
	string pavadinimas = "";
	string vardas = "";
	double kainamin = 0;
	double kainamax = 0;
	int kiekismin = 0;
	int kiekismax = 0;
	pavadinimas = context.marshal_as<std::string>(textBox1->Text);
	vardas = context.marshal_as<std::string>(textBox2->Text);
	// reikalingi, kad nemetytu FormatException
	if (textBox3->Text == "") textBox3->Text = "0";
	if (textBox4->Text == "") textBox4->Text = "0";
	if (textBox5->Text == "") textBox5->Text = "9999";
	if (textBox6->Text == "") textBox6->Text = "9999";
	dataGridView1->Columns->Add("Column", "Pavadinimas");
	dataGridView1->Columns->Add("Column", "Vardas");
	dataGridView1->Columns->Add("Column", "Kaina");
	dataGridView1->Columns->Add("Column", "Kiekis");
	kainamin = double::Parse(textBox3->Text);
	kainamax = double::Parse(textBox5->Text);
	kiekismin = int::Parse(textBox4->Text);
	kiekismax = int::Parse(textBox6->Text);
	bool foundpavadinimas = false;
	bool foundvardas = false;
	bool foundkaina = false;
	bool foundkiekis = false;
	fs << "          Pavadinimas          |        Vardas        | Kaina  | Kiekis" << endl;
	for (size_t i = 0; !fd.eof(); i++)
	{
		nupirktos->nupirktos[i].Skait(fd); // skaito iš NPrekes.txt failo
		// tikrina, ar įrašas visas sąlygas patenkina
		if (nupirktos->nupirktos[i].getPavadinimas().find(pavadinimas) != string::npos) foundpavadinimas = true;
		if (nupirktos->nupirktos[i].getVardas().find(vardas) != string::npos) foundvardas = true;
		if (nupirktos->nupirktos[i].getKaina() >= kainamin && nupirktos->nupirktos[i].getKaina() <= kainamax) foundkaina = true;
		if (nupirktos->nupirktos[i].getKiekis() >= kiekismin && nupirktos->nupirktos[i].getKiekis() <= kiekismax) foundkiekis = true;
		if (foundpavadinimas == true && foundvardas == true && foundkaina == true && foundkiekis == true)
		{
			String^ db_pavadinimas = gcnew String(nupirktos->nupirktos[i].getPavadinimas().c_str());
			String^ db_vardas = gcnew String(nupirktos->nupirktos[i].getVardas().c_str());
			dataGridView1->Rows->Add(db_pavadinimas, db_vardas, nupirktos->nupirktos[i].getKaina(), nupirktos->nupirktos[i].getKiekis());
			fs << setw(30) << nupirktos->nupirktos[i].getPavadinimas() << " | " << setw(20) << nupirktos->nupirktos[i].getVardas() << " | " << setw(6) << nupirktos->nupirktos[i].getKaina() << " | " << nupirktos->nupirktos[i].getKiekis() << endl; // generuoja ataskaitą NPrekesAtaskaita.txt faile
		}
		// sugrazina bool i pradine padeti
		foundpavadinimas = false;
		foundvardas = false;
		foundkaina = false;
		foundkiekis = false;
	}
	// atstato visus textBox i tuscia lauka
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	fd.close();
}
};
}
