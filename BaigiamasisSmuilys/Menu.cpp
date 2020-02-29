#include "Menu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BaigiamasisSmuilys::MyForm1 form;
	Application::Run(%form);
}
