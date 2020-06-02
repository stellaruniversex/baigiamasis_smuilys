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
	/// Summary for ataskaita2
	/// </summary>
	public ref class ataskaita2 : public System::Windows::Forms::Form
	{
	public:
		ataskaita2(System::Windows::Forms::Form ^ menui, Pirkejai * pk)
		{
			meniu = menui;
			InitializeComponent();
			pirkejai = pk;
			//
			//TODO: Add the constructor code here
			//
		}

	public:
	private: System::Windows::Forms::Form ^ meniu;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ataskaita2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 16));
			this->label1->Location = System::Drawing::Point(134, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pirkėjų ataskaita";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 291);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(460, 218);
			this->dataGridView1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label2->Location = System::Drawing::Point(135, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Filtruoti pagal...";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox1->Location = System::Drawing::Point(269, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 30);
			this->textBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label3->Location = System::Drawing::Point(28, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Vardas";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox2->Location = System::Drawing::Point(269, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 30);
			this->textBox2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label4->Location = System::Drawing::Point(28, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Pavardė";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox3->Location = System::Drawing::Point(269, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 30);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox4->Location = System::Drawing::Point(269, 201);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 30);
			this->textBox4->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label5->Location = System::Drawing::Point(28, 168);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 22);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Telefonas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label6->Location = System::Drawing::Point(28, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 22);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Gyv. vieta";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->button2->Location = System::Drawing::Point(245, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(223, 48);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Grįžti į pagr. langą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ataskaita2::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12.5F));
			this->button1->Location = System::Drawing::Point(8, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 48);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Generuoti ataskaitą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ataskaita2::button1_Click);
			// 
			// ataskaita2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 521);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"ataskaita2";
			this->Text = L"Pirkeju ataskaita";
			this->Load += gcnew System::EventHandler(this, &ataskaita2::ataskaita2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ataskaita2_Load(System::Object^  sender, System::EventArgs^  e) { // paruošia formą naudojimui ir įdeda visą pirkėjų sąrašą
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { // visas funkcionalumas čia
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	dataGridView1->Columns->Add("Column", "Vardas");
	dataGridView1->Columns->Add("Column", "Pavarde");
	dataGridView1->Columns->Add("Column", "Telefonas");
	dataGridView1->Columns->Add("Column", "Gyv. vieta");
	ofstream fs("PirkejaiAtaskaita.txt");
	ifstream fd("Pirkejai.txt");
	msclr::interop::marshal_context context;
	// kintamieji
	string vardas = "";
	string pavarde = "";
	// reikia long long, kad visą numerį būtų galima įtalpinti
	long long int telefonas = 0;
	long long int telefonasmax = 0;
	string gyvvieta = "";
	vardas = context.marshal_as<std::string>(textBox1->Text);
	pavarde = context.marshal_as<std::string>(textBox2->Text);
	// reikalingi, kad nemetytu FormatException
	if (textBox3->Text == "") textBox3->Text = "0";
	telefonas = Int64::Parse(textBox3->Text);
	telefonasmax = Int64::Parse(textBox3->Text);
	if (textBox3->Text == "0")
	{
		telefonasmax = 999999999999;
	};
	gyvvieta = context.marshal_as<std::string>(textBox4->Text);
	bool foundvardas = false;
	bool foundpavarde = false;
	bool foundtelefonas = false;
	bool foundgyvvieta = false;
	fs << "    Vardas      |    Pavarde   | Telefonas  | Gyv. vieta" << endl;
	for (size_t i = 0; !fd.eof(); i++)
	{
		pirkejai->pirkejai[i].Skait(fd); // skaito iš Pirkejai.txt failo
		// tikrina, ar įrašas visas sąlygas patenkina
		if (pirkejai->pirkejai[i].getVardas().find(vardas) != string::npos) foundvardas = true;
		if (pirkejai->pirkejai[i].getPavarde().find(pavarde) != string::npos) foundpavarde = true;
		if (pirkejai->pirkejai[i].getTelefonas() >= telefonas && pirkejai->pirkejai[i].getTelefonas() <= telefonasmax) foundtelefonas = true;
		if (pirkejai->pirkejai[i].getGyvVieta().find(gyvvieta) != string::npos) foundgyvvieta = true;
		if (foundvardas == true && foundpavarde == true && foundtelefonas == true && foundgyvvieta == true)
		{
			String^ db_vardas = gcnew String(pirkejai->pirkejai[i].getVardas().c_str());
			String^ db_pavarde = gcnew String(pirkejai->pirkejai[i].getPavarde().c_str());
			String^ db_gyvvieta = gcnew String(pirkejai->pirkejai[i].getGyvVieta().c_str());
			dataGridView1->Rows->Add(db_vardas, db_pavarde, pirkejai->pirkejai[i].getTelefonas(), db_gyvvieta);
			fs << setw(15) << pirkejai->pirkejai[i].getVardas() << " | " << setw(12) << pirkejai->pirkejai[i].getPavarde()
				<< " | " << setw(10) << pirkejai->pirkejai[i].getTelefonas() << " | " << pirkejai->pirkejai[i].getGyvVieta() << endl; // generuoja ataskaitą PirkejaiAtaskaita.txt faile
		}
		// sugrazina bool i pradine padeti
		foundvardas = false;
		foundpavarde = false;
		foundtelefonas = false;
		foundgyvvieta = false;
	}
	// atstato visus textBox i tuscia lauka
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	fd.close();
}
};
}
