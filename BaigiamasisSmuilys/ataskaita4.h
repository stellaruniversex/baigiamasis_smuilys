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
		ataskaita4(System::Windows::Forms::Form ^ menui, Preke * val)
		{
			meniu = menui;
			InitializeComponent();
			prekes = val;
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  name1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
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
		Preke * prekes;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->name1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->button2->Location = System::Drawing::Point(258, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 48);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Grįžti į meniu";
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
			this->button1->Text = L"Spausdinti ataskaitą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ataskaita4::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox4->Location = System::Drawing::Point(302, 172);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(170, 29);
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
			this->textBox3->Location = System::Drawing::Point(302, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 29);
			this->textBox3->TabIndex = 61;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->label3->Location = System::Drawing::Point(13, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 22);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Dydis (m^2)";
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
			this->textBox2->Location = System::Drawing::Point(302, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 29);
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
			this->label2->Size = System::Drawing::Size(150, 22);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Lentynų kiekis";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Parduotuvės v.", L"Lentynų kiek.", L"Dydį", L"Įmokas",
					L"Išlaidas"
			});
			this->comboBox1->Location = System::Drawing::Point(302, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 30);
			this->comboBox1->TabIndex = 55;
			// 
			// name1
			// 
			this->name1->AutoSize = true;
			this->name1->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->name1->Location = System::Drawing::Point(13, 39);
			this->name1->Name = L"name1";
			this->name1->Size = System::Drawing::Size(160, 22);
			this->name1->TabIndex = 54;
			this->name1->Text = L"Rikiuoti pagal:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 314);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 195);
			this->dataGridView1->TabIndex = 53;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox5->Location = System::Drawing::Point(302, 207);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(170, 29);
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
			// ataskaita4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 521);
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
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->name1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"ataskaita4";
			this->Text = L"ataskaita4";
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
	dataGridView1->Columns->Add("Column", "Islaidos");
	dataGridView1->Columns->Add("Column", "Islaidos");
	//ofstream fs("NPrekesAtaskaita.txt");
	std::ifstream fd("Prekes.txt");
	while (!fd.eof())
	{
		prekes->Skait(fd);
		String^ db_pavadinimas = gcnew String(prekes->getPavadinimas().c_str());
		String^ db_gamintojas = gcnew String(prekes->getGamintojas().c_str());
		dataGridView1->Rows->Add(db_pavadinimas, db_gamintojas, prekes->getKaina(), prekes->getKaina(), 
			prekes->getMetai(), prekes->getMenuo(), prekes->getDiena(), prekes->getKiekis());
	}
	fd.close();
}
};
}
