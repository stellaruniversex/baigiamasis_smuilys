#pragma once

namespace BaigiamasisSmuilys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for about
	/// </summary>
	public ref class about : public System::Windows::Forms::Form
	{
	public:
		about(System::Windows::Forms::Form ^ abouttt)
		{
			aboutt = abouttt;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Form ^ aboutt;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~about()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Parduotuvės valdymo sistema";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(56, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"\"Prekių automatas\"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->Location = System::Drawing::Point(57, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Sukūrė Žilvinas Šmuilys";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label4->Location = System::Drawing::Point(105, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"© 2020";
			// 
			// about
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 127);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(300, 166);
			this->MinimumSize = System::Drawing::Size(300, 166);
			this->Name = L"about";
			this->Text = L"about";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
