#include "stdafx.h"
#include "Form1.h"
#include "Password.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
// int main(array<String^>^ args) { // Kann Fehler nach 'using namespace std;' verursachen
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt::Form1());// "CppCLR_WinformsProjekt" noch anpassen

	return 0;
}
