#pragma once
#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "ataskaita2.h"
#include "ataskaita3.h"
#include "ataskaita4.h"
#include "ataskaita5.h"
#include "about.h"
#include "Funkcijos.h"

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
			prekes = new Prekes();
			pirkejai = new Pirkejai();
			nupirktos = new NupirktaPrekes();
			parduotuves = new Parduotuves();
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
			if (prekes)
				delete prekes;
			if (pirkejai)
				delete pirkejai;
			if (nupirktos)
				delete nupirktos;
			if (parduotuves)
				delete parduotuves;
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
	private: System::Windows::Forms::ToolStripMenuItem^  prekėsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pirkėjaiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nupPrekėsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  parduotuvėsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kvitoIšrašymasToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Prekes * prekes;
		Pirkejai * pirkejai;
		NupirktaPrekes * nupirktos;
		Parduotuves * parduotuves;
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
			this->prekėsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pirkėjaiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nupPrekėsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parduotuvėsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kvitoIšrašymasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nupPrekiøRedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->parduotuviøRedagavimasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::parduotuviøRedagavimasToolStripMenuItem_Click);
			// 
			// pToolStripMenuItem
			// 
			this->pToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->prekėsToolStripMenuItem,
					this->pirkėjaiToolStripMenuItem, this->nupPrekėsToolStripMenuItem, this->parduotuvėsToolStripMenuItem, this->kvitoIšrašymasToolStripMenuItem
			});
			this->pToolStripMenuItem->Name = L"pToolStripMenuItem";
			this->pToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->pToolStripMenuItem->Text = L"Ataskaitos";
			this->pToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::pToolStripMenuItem_Click);
			// 
			// prekėsToolStripMenuItem
			// 
			this->prekėsToolStripMenuItem->Name = L"prekėsToolStripMenuItem";
			this->prekėsToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->prekėsToolStripMenuItem->Text = L"Prekės";
			this->prekėsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::prekėsToolStripMenuItem_Click);
			// 
			// pirkėjaiToolStripMenuItem
			// 
			this->pirkėjaiToolStripMenuItem->Name = L"pirkėjaiToolStripMenuItem";
			this->pirkėjaiToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->pirkėjaiToolStripMenuItem->Text = L"Pirkėjai";
			this->pirkėjaiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::pirkėjaiToolStripMenuItem_Click);
			// 
			// nupPrekėsToolStripMenuItem
			// 
			this->nupPrekėsToolStripMenuItem->Name = L"nupPrekėsToolStripMenuItem";
			this->nupPrekėsToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->nupPrekėsToolStripMenuItem->Text = L"Nup. prekės";
			this->nupPrekėsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::nupPrekėsToolStripMenuItem_Click);
			// 
			// parduotuvėsToolStripMenuItem
			// 
			this->parduotuvėsToolStripMenuItem->Name = L"parduotuvėsToolStripMenuItem";
			this->parduotuvėsToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->parduotuvėsToolStripMenuItem->Text = L"Parduotuvės";
			this->parduotuvėsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::parduotuvėsToolStripMenuItem_Click);
			// 
			// kvitoIšrašymasToolStripMenuItem
			// 
			this->kvitoIšrašymasToolStripMenuItem->Name = L"kvitoIšrašymasToolStripMenuItem";
			this->kvitoIšrašymasToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->kvitoIšrašymasToolStripMenuItem->Text = L"Kvito išrašymas";
			this->kvitoIšrašymasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::kvitoIšrašymasToolStripMenuItem_Click);
			// 
			// nupPrekiøRedagavimasToolStripMenuItem
			// 
			this->nupPrekiøRedagavimasToolStripMenuItem->Name = L"nupPrekiøRedagavimasToolStripMenuItem";
			this->nupPrekiøRedagavimasToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->nupPrekiøRedagavimasToolStripMenuItem->Text = L"Apie";
			this->nupPrekiøRedagavimasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::nupPrekiøRedagavimasToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F));
			this->label1->Location = System::Drawing::Point(111, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sveiki atvykę į";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F));
			this->label2->Location = System::Drawing::Point(30, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(420, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"parduotuvės valdymo sistemą";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(83, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(285, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"\"Prekių automatas\"";
			// 
			// Menui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
private: System::Void parduotuviøRedagavimasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm3 ^ form_parduotuves = gcnew MyForm3(this);
	form_parduotuves->Show();
	this->Hide();
}
private: System::Void prekėsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm4 ^ form_ataskaitos1 = gcnew MyForm4(this, prekes);
	form_ataskaitos1->Show();
	this->Hide();
}
private: System::Void pirkėjaiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ataskaita2 ^ form_ataskaitos2 = gcnew ataskaita2(this, pirkejai);
	form_ataskaitos2->Show();
	this->Hide();
}
private: System::Void nupPrekėsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ataskaita3 ^ form_ataskaitos3 = gcnew ataskaita3(this, nupirktos);
	form_ataskaitos3->Show();
	this->Hide();
}
private: System::Void parduotuvėsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ataskaita4 ^ form_ataskaitos4 = gcnew ataskaita4(this, parduotuves);
	form_ataskaitos4->Show();
	this->Hide();
}
private: System::Void kvitoIšrašymasToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ataskaita5 ^ form_ataskaitos5 = gcnew ataskaita5(this);
	form_ataskaitos5->Show();
	this->Hide();
}
};
}
