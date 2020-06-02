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
	/// Summary for ataskaita4
	/// </summary>
	public ref class ataskaita4 : public System::Windows::Forms::Form
	{
	public:
		ataskaita4(System::Windows::Forms::Form ^ menui, Parduotuves * val)
		{
			meniu = menui;
			InitializeComponent();
			parduotuves = val;
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button2;
	public:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  name1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Form ^ meniu;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ataskaita4()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		Parduotuves * parduotuves;
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 16));
			this->label1->Location = System::Drawing::Point(108, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Parduotuvių ataskaita";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->button2->Location = System::Drawing::Point(254, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 48);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Grįžti į pagr. langą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ataskaita4::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 12.5F));
			this->button1->Location = System::Drawing::Point(12, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 48);
			this->button1->TabIndex = 64;
			this->button1->Text = L"Generuoti ataskaitą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ataskaita4::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox4->Location = System::Drawing::Point(277, 172);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(95, 29);
			this->textBox4->TabIndex = 63;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label5->Location = System::Drawing::Point(13, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 22);
			this->label5->TabIndex = 62;
			this->label5->Text = L"Įmokos";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox3->Location = System::Drawing::Point(277, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(95, 29);
			this->textBox3->TabIndex = 61;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label3->Location = System::Drawing::Point(13, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 22);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Dydis (m^2), nuo/iki";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label4->Location = System::Drawing::Point(13, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(180, 22);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Parduotuvės vieta";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox2->Location = System::Drawing::Point(277, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(95, 29);
			this->textBox2->TabIndex = 58;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox1->Location = System::Drawing::Point(302, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 29);
			this->textBox1->TabIndex = 57;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label2->Location = System::Drawing::Point(13, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(240, 22);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Lentynų kiekis, nuo/iki";
			// 
			// name1
			// 
			this->name1->AutoSize = true;
			this->name1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->name1->Location = System::Drawing::Point(152, 35);
			this->name1->Name = L"name1";
			this->name1->Size = System::Drawing::Size(170, 22);
			this->name1->TabIndex = 54;
			this->name1->Text = L"Filtruoti pagal:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 314);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(460, 245);
			this->dataGridView1->TabIndex = 53;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox5->Location = System::Drawing::Point(277, 207);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(95, 29);
			this->textBox5->TabIndex = 67;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label6->Location = System::Drawing::Point(13, 210);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 22);
			this->label6->TabIndex = 66;
			this->label6->Text = L"Išlaidos";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox6->Location = System::Drawing::Point(377, 102);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(95, 29);
			this->textBox6->TabIndex = 69;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox7->Location = System::Drawing::Point(377, 137);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(95, 29);
			this->textBox7->TabIndex = 70;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox8->Location = System::Drawing::Point(377, 172);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(95, 29);
			this->textBox8->TabIndex = 71;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox9->Location = System::Drawing::Point(377, 207);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(95, 29);
			this->textBox9->TabIndex = 72;
			// 
			// ataskaita4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 571);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
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
			this->Name = L"ataskaita4";
			this->Text = L"Parduotuviu ataskaita";
			this->Load += gcnew System::EventHandler(this, &ataskaita4::ataskaita4_Load);
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
	dataGridView1->Columns->Add("Column", "Vieta");
	dataGridView1->Columns->Add("Column", "Lentynos");
	dataGridView1->Columns->Add("Column", "Dydis");
	dataGridView1->Columns->Add("Column", "Imokos");
	dataGridView1->Columns->Add("Column", "Islaidos");
	//ofstream fs("NPrekesAtaskaita.txt");
	std::ifstream fd("Parduotuves.txt");
	std::ofstream fs("ParduotuvesAtaskaita.txt");
	msclr::interop::marshal_context context;
	string vieta = "";
	int lentynosmin = 0;
	int lentynosmax = 0;
	int dydismin = 0;
	int dydismax = 0;
	int imokosmin = 0;
	int imokosmax = 0;
	int ismokosmin = 0;
	int ismokosmax = 0;
	vieta = context.marshal_as<std::string>(textBox1->Text);
	// reikalingi, kad nemetytu FormatException
	if (textBox2->Text == "") textBox2->Text = "0";
	if (textBox3->Text == "") textBox3->Text = "0";
	if (textBox4->Text == "") textBox4->Text = "0";
	if (textBox5->Text == "") textBox5->Text = "0";
	if (textBox6->Text == "") textBox6->Text = "9999";
	if (textBox7->Text == "") textBox7->Text = "99999";
	if (textBox8->Text == "") textBox8->Text = "9999999";
	if (textBox9->Text == "") textBox9->Text = "9999999";
	lentynosmin = int::Parse(textBox2->Text);
	lentynosmax = int::Parse(textBox6->Text);
	dydismin = int::Parse(textBox3->Text);
	dydismax = int::Parse(textBox7->Text);
	imokosmin = int::Parse(textBox4->Text);
	imokosmax = int::Parse(textBox8->Text);
	ismokosmin = int::Parse(textBox5->Text);
	ismokosmax = int::Parse(textBox9->Text);
	bool foundvieta = false;
	bool foundlentynos = false;
	bool founddydis = false;
	bool foundimokos = false;
	bool foundismokos = false;
	fs << "            Vieta              | Lentynu sk.  | Dydis | Imokos  | Islaidos" << endl;
	for (size_t i = 0; !fd.eof(); i++)
	{
		parduotuves->parduotuves[i].Skait(fd); // skaito iš Parduotuves.txt failo
		// tikrina, ar įrašas visas sąlygas patenkina
		if (parduotuves->parduotuves[i].getVieta().find(vieta) != string::npos) foundvieta = true;
		if (parduotuves->parduotuves[i].getLentynos() >= lentynosmin && parduotuves->parduotuves[i].getLentynos() <= lentynosmax) foundlentynos = true;
		if (parduotuves->parduotuves[i].getDydis() >= dydismin && parduotuves->parduotuves[i].getDydis() <= dydismax) founddydis = true;
		if (parduotuves->parduotuves[i].getImokos() >= imokosmin && parduotuves->parduotuves[i].getImokos() <= imokosmax) foundimokos = true;
		if (parduotuves->parduotuves[i].getIsmokos() >= ismokosmin && parduotuves->parduotuves[i].getIsmokos() <= ismokosmax) foundismokos = true;
		String^ db_vieta = gcnew String(parduotuves->parduotuves[i].getVieta().c_str());
		if (foundvieta == true && foundlentynos == true && founddydis == true && foundimokos == true && foundismokos == true)
		{
			dataGridView1->Rows->Add(db_vieta, parduotuves->parduotuves[i].getLentynos(), parduotuves->parduotuves[i].getDydis(),
				parduotuves->parduotuves[i].getImokos(), parduotuves->parduotuves[i].getIsmokos());
			fs << setw(30) << parduotuves->parduotuves[i].getVieta() << " | " << setw(12) << parduotuves->parduotuves[i].getLentynos() << " | " << setw(5) 
				<< parduotuves->parduotuves[i].getDydis() << " | " << setw(7) << parduotuves->parduotuves[i].getImokos() << " | " << parduotuves->parduotuves[i].getIsmokos() << endl; // generuoja ataskaitą ParduotuvesAtaskaita.txt faile
		}
		foundvieta = false;
		foundlentynos = false;
		founddydis = false;
		foundimokos = false;
		foundismokos = false;
	}
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();
	fd.close();
}
private: System::Void ataskaita4_Load(System::Object^  sender, System::EventArgs^  e) { // paruošia formą naudojimui ir įdeda visą parduotuvių sąrašą
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();
	dataGridView1->Columns->Add("Column", "Vieta");
	dataGridView1->Columns->Add("Column", "Lentynos");
	dataGridView1->Columns->Add("Column", "Dydis");
	dataGridView1->Columns->Add("Column", "Imokos");
	dataGridView1->Columns->Add("Column", "Islaidos");
	std::ifstream fd("Parduotuves.txt");
	for (size_t i = 0; !fd.eof(); i++)
	{
		parduotuves->parduotuves[i].Skait(fd);
		String^ db_vieta = gcnew String(parduotuves->parduotuves[i].getVieta().c_str());
		dataGridView1->Rows->Add(db_vieta, parduotuves->parduotuves[i].getLentynos(), parduotuves->parduotuves[i].getDydis(),
		parduotuves->parduotuves[i].getImokos(), parduotuves->parduotuves[i].getIsmokos());
	}
}
};
}
