#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ argv)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	menu::MyForm form;
	Application::Run(% form);
}

