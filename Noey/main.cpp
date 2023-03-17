#include "Login.h"
#include "MainPage.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RealProjectV1::Login form;
	RealProjectV1::MainPage form2;
	Application::Run(%form);

	if (form.LoginSuccess) {
		Application::Run(%form2);
	}

	Application::Exit();
}