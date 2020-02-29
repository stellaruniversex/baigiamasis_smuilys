#pragma once

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
	private: System::Windows::Forms::ToolStripMenuItem^  pirk�j�RedagavimasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nupPreki�RedagavimasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  preki�RedagavimasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pirk�j�RedagavimasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  nupPreki�RedagavimasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  parduotuvi�RedagavimasToolStripMenuItem;

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
			this->pirk�j�RedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nupPreki�RedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preki�RedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pirk�j�RedagavimasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nupPreki�RedagavimasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->parduotuvi�RedagavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pirk�j�RedagavimasToolStripMenuItem,
					this->pToolStripMenuItem, this->nupPreki�RedagavimasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Menui::menuStrip1_ItemClicked);
			// 
			// pirk�j�RedagavimasToolStripMenuItem
			// 
			this->pirk�j�RedagavimasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->preki�RedagavimasToolStripMenuItem,
					this->pirk�j�RedagavimasToolStripMenuItem1, this->nupPreki�RedagavimasToolStripMenuItem1, this->parduotuvi�RedagavimasToolStripMenuItem
			});
			this->pirk�j�RedagavimasToolStripMenuItem->Name = L"pirk�j�RedagavimasToolStripMenuItem";
			this->pirk�j�RedagavimasToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->pirk�j�RedagavimasToolStripMenuItem->Text = L"Redagavimas";
			// 
			// pToolStripMenuItem
			// 
			this->pToolStripMenuItem->Name = L"pToolStripMenuItem";
			this->pToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->pToolStripMenuItem->Text = L"Ataskaitos";
			this->pToolStripMenuItem->Click += gcnew System::EventHandler(this, &Menui::pToolStripMenuItem_Click);
			// 
			// nupPreki�RedagavimasToolStripMenuItem
			// 
			this->nupPreki�RedagavimasToolStripMenuItem->Name = L"nupPreki�RedagavimasToolStripMenuItem";
			this->nupPreki�RedagavimasToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->nupPreki�RedagavimasToolStripMenuItem->Text = L"Apie";
			// 
			// preki�RedagavimasToolStripMenuItem
			// 
			this->preki�RedagavimasToolStripMenuItem->Name = L"preki�RedagavimasToolStripMenuItem";
			this->preki�RedagavimasToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->preki�RedagavimasToolStripMenuItem->Text = L"Preki� redagavimas";
			// 
			// pirk�j�RedagavimasToolStripMenuItem1
			// 
			this->pirk�j�RedagavimasToolStripMenuItem1->Name = L"pirk�j�RedagavimasToolStripMenuItem1";
			this->pirk�j�RedagavimasToolStripMenuItem1->Size = System::Drawing::Size(209, 22);
			this->pirk�j�RedagavimasToolStripMenuItem1->Text = L"Pirk�j� redagavimas";
			// 
			// nupPreki�RedagavimasToolStripMenuItem1
			// 
			this->nupPreki�RedagavimasToolStripMenuItem1->Name = L"nupPreki�RedagavimasToolStripMenuItem1";
			this->nupPreki�RedagavimasToolStripMenuItem1->Size = System::Drawing::Size(209, 22);
			this->nupPreki�RedagavimasToolStripMenuItem1->Text = L"Nup. preki� redagavimas";
			// 
			// parduotuvi�RedagavimasToolStripMenuItem
			// 
			this->parduotuvi�RedagavimasToolStripMenuItem->Name = L"parduotuvi�RedagavimasToolStripMenuItem";
			this->parduotuvi�RedagavimasToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->parduotuvi�RedagavimasToolStripMenuItem->Text = L"Parduotuvi� redagavimas";
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
};
}
