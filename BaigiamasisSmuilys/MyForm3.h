﻿#pragma once

namespace BaigiamasisSmuilys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(System::Windows::Forms::Form ^ menui)
		{
			meniu = menui;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Form ^ meniu;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
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
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 18.25F));
			this->button2->Location = System::Drawing::Point(129, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 54);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Į meniu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 24.25F));
			this->button1->Location = System::Drawing::Point(149, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 54);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Įterpti";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox4->Location = System::Drawing::Point(229, 166);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(203, 30);
			this->textBox4->TabIndex = 47;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox3->Location = System::Drawing::Point(229, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 30);
			this->textBox3->TabIndex = 46;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox2->Location = System::Drawing::Point(229, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(203, 30);
			this->textBox2->TabIndex = 45;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox1->Location = System::Drawing::Point(229, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 30);
			this->textBox1->TabIndex = 44;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label6->Location = System::Drawing::Point(22, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 22);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Lentynų kiekis";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label4->Location = System::Drawing::Point(22, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 22);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Įmokos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label3->Location = System::Drawing::Point(22, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 22);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Dydis (m^2)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label1->Location = System::Drawing::Point(22, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 22);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Parduotuvės vieta";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16.25F));
			this->label2->Location = System::Drawing::Point(24, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(408, 26);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Parduotuvių įterpimas/redagavimas";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->textBox5->Location = System::Drawing::Point(229, 202);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(203, 30);
			this->textBox5->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->label5->Location = System::Drawing::Point(25, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 22);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Išlaidos";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
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
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		meniu->Show();
	}
};
}
