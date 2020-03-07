#pragma once
#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "about.h"

namespace BaigiamasisSmuilys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Menui
	/// </summary>
	public ref class Menui : public System::Windows::Forms::Form
	{
	public:
		Menui(void)
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
		~Menui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  pirkëjøRedagavimasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nupPrekiøRedagavimasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  prekiøRedagavimasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pirkëjøRedagavimasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  nupPrekiøRedagavimasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  parduotuviøRedagavimasToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pirkëjøRedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prekiøRedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pirkëjøRedagavimasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nupPrekiøRedagavimasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parduotuviøRedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nupPrekiøRedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pirkëjøRedagavimasToolStripMenuItem,
					this->pToolStripMenuItem, this->nupPrekiøRedagavimasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Menui::menuStrip1_ItemClicked);
			// 
			// pirkëjøRedagavimasToolStripMenuItem
			// 
			this->pirkëjøRedagavimasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->prekiøRedagavimasToolStripMenuItem,
					this->pirkëjøRedagavimasToolStripMenuItem1, this->nupPrekiøRedagavimasToolStripMenuItem1, this->parduotuviøRedagavimasToolStripMenuItem
			});
			this->pirkëjøRedagavimasToolStripMenuItem->Name = L"pirkëjøRedagavimasToolStripMenuItem";
			this->pirkëjøRedagavimasToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->pirkëjøRedagavimasToolStripMenuItem->Text = L"Redagavimas";
			// 
			// prekiøRedagavimasToolStripMenuItem
			// 
			this->prekiøRedagavimasToolStripMenuItem->Name = L"prekiøRedagavimasToolStripMenuItem";
			this->prekiøRedagavimasToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->prekiøRedagavimasToolStripMenuItem->Text = L"Prekių redagavimas";
			this->prekiøRedagavimasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::prekiøRedagavimasToolStripMenuItem_Click);
			// 
			// pirkëjøRedagavimasToolStripMenuItem1
			// 
			this->pirkëjøRedagavimasToolStripMenuItem1->Name = L"pirkëjøRedagavimasToolStripMenuItem1";
			this->pirkëjøRedagavimasToolStripMenuItem1->Size = System::Drawing::Size(209, 22);
			this->pirkëjøRedagavimasToolStripMenuItem1->Text = L"Pirkėjų redagavimas";
			this->pirkëjøRedagavimasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Menui::pirkëjøRedagavimasToolStripMenuItem1_Click);
			// 
			// nupPrekiøRedagavimasToolStripMenuItem1
			// 
			this->nupPrekiøRedagavimasToolStripMenuItem1->Name = L"nupPrekiøRedagavimasToolStripMenuItem1";
			this->nupPrekiøRedagavimasToolStripMenuItem1->Size = System::Drawing::Size(209, 22);
			this->nupPrekiøRedagavimasToolStripMenuItem1->Text = L"Nup. prekių redagavimas";
			this->nupPrekiøRedagavimasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Menui::nupPrekiøRedagavimasToolStripMenuItem1_Click);
			// 
			// parduotuviøRedagavimasToolStripMenuItem
			// 
			this->parduotuviøRedagavimasToolStripMenuItem->Name = L"parduotuviøRedagavimasToolStripMenuItem";
			this->parduotuviøRedagavimasToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->parduotuviøRedagavimasToolStripMenuItem->Text = L"Parduotuvių redagavimas";
			// 
			// pToolStripMenuItem
			// 
			this->pToolStripMenuItem->Name = L"pToolStripMenuItem";
			this->pToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->pToolStripMenuItem->Text = L"Ataskaitos";
			this->pToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::pToolStripMenuItem_Click);
			// 
			// nupPrekiøRedagavimasToolStripMenuItem
			// 
			this->nupPrekiøRedagavimasToolStripMenuItem->Name = L"nupPrekiøRedagavimasToolStripMenuItem";
			this->nupPrekiøRedagavimasToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->nupPrekiøRedagavimasToolStripMenuItem->Text = L"Apie";
			this->nupPrekiøRedagavimasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::nupPrekiøRedagavimasToolStripMenuItem_Click);
			// 
			// Menui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Menui";
			this->Text = L"Meniu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
	private: System::Void pToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void prekiøRedagavimasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm ^ form1 = gcnew MyForm(this);
	form1->Show();
	this->Hide();
}
private: System::Void nupPrekiøRedagavimasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	about ^ form_about = gcnew about(this);
	form_about->Show();
}
private: System::Void pirkëjøRedagavimasToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^ form_pirkejai = gcnew MyForm1(this);
	form_pirkejai->Show();
	this->Hide();
}
private: System::Void nupPrekiøRedagavimasToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^ form_nupirktos = gcnew MyForm2(this);
	form_nupirktos->Show();
	this->Hide();
}
};
}
