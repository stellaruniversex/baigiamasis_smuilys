#pragma once

namespace BaigiamasisSmuilys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16.25F));
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(468, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Informacin� sistema \"Preki� automatas\"";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button2->Location = System::Drawing::Point(55, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(391, 54);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Preki� �terpimas/redagavimas";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button1->Location = System::Drawing::Point(55, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(391, 54);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Pirk�j� �terpimas/redagavimas";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button3->Location = System::Drawing::Point(55, 192);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(391, 54);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Nupirkt� preki� �terpimas/redagavimas";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button4->Location = System::Drawing::Point(55, 252);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(391, 54);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Parduotuvi� �terpimas/redagavimas";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->button5->Location = System::Drawing::Point(55, 312);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(391, 54);
			this->button5->TabIndex = 19;
			this->button5->Text = L"S�ra�� spausdinimas";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
