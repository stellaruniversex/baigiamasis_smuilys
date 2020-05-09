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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(System::Windows::Forms::Form ^ menui, Preke * val)
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
		Preke * prekes;
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
			this->dataGridView1->Size = System::Drawing::Size(460, 191);
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
			this->textBox4->Location = System::Drawing::Point(209, 211);
			this->textBox4->MaxLength = 2;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(34, 29);
			this->textBox4->TabIndex = 38;
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
			this->button1->Text = L"Spausdinti ataskaitą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->button2->Location = System::Drawing::Point(257, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 48);
			this->button2->TabIndex = 47;
			this->button2->Text = L"Grįžti į meniu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox9->Location = System::Drawing::Point(249, 210);
			this->textBox9->MaxLength = 2;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(34, 29);
			this->textBox9->TabIndex = 48;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox10->Location = System::Drawing::Point(289, 210);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(48, 29);
			this->textBox10->TabIndex = 49;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox6->Location = System::Drawing::Point(423, 210);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(48, 29);
			this->textBox6->TabIndex = 52;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox11->Location = System::Drawing::Point(383, 210);
			this->textBox11->MaxLength = 2;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(34, 29);
			this->textBox11->TabIndex = 51;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Consolas", 14));
			this->textBox12->Location = System::Drawing::Point(343, 211);
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
			this->ClientSize = System::Drawing::Size(484, 561);
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
			this->Text = L"Ataskaitos";
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
	ofstream fs("PrekesAtaskaita.txt");
	dataGridView1->Columns->Add("Column", "Pavadinimas");
	dataGridView1->Columns->Add("Column", "Gamintojas");
	dataGridView1->Columns->Add("Column", "Kaina");
	dataGridView1->Columns->Add("Column", "Metai");
	dataGridView1->Columns->Add("Column", "Menuo");
	dataGridView1->Columns->Add("Column", "Diena");
	dataGridView1->Columns->Add("Column", "Kiekis");
	std::ifstream fd("Prekes.txt");
	while (!fd.eof())
	{
		prekes->Skait(fd);
		String^ db_pavadinimas = gcnew String(prekes->getPavadinimas().c_str());
		String^ db_gamintojas = gcnew String(prekes->getGamintojas().c_str());
		dataGridView1->Rows->Add(db_pavadinimas, db_gamintojas, prekes->getKaina(),
			prekes->getMetai(), prekes->getMenuo(), prekes->getDiena(), prekes->getKiekis());
	}
	fd.close();
}
};
}
