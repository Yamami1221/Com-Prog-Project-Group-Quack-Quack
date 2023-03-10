#pragma once

#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace RealProjectV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LoginLabel;
	protected:
	private: System::Windows::Forms::Label^ UsernameInputLabel;
	private: System::Windows::Forms::TextBox^ UsernameInputBox;
	private: System::Windows::Forms::Label^ PasswordInputLabel;
	private: System::Windows::Forms::TextBox^ PasswordInputBox;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ ExitButton;

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
			this->LoginLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameInputLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameInputBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordInputLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordInputBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LoginLabel
			// 
			this->LoginLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginLabel->Location = System::Drawing::Point(12, 9);
			this->LoginLabel->Name = L"LoginLabel";
			this->LoginLabel->Size = System::Drawing::Size(576, 85);
			this->LoginLabel->TabIndex = 0;
			this->LoginLabel->Text = L"Login";
			this->LoginLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LoginLabel->Click += gcnew System::EventHandler(this, &Login::LoginLabel_Click);
			// 
			// UsernameInputLabel
			// 
			this->UsernameInputLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->UsernameInputLabel->Location = System::Drawing::Point(12, 94);
			this->UsernameInputLabel->Name = L"UsernameInputLabel";
			this->UsernameInputLabel->Size = System::Drawing::Size(576, 50);
			this->UsernameInputLabel->TabIndex = 1;
			this->UsernameInputLabel->Text = L"Username";
			this->UsernameInputLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->UsernameInputLabel->Click += gcnew System::EventHandler(this, &Login::UsernameInputLabel_Click);
			// 
			// UsernameInputBox
			// 
			this->UsernameInputBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->UsernameInputBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UsernameInputBox->Location = System::Drawing::Point(12, 147);
			this->UsernameInputBox->Name = L"UsernameInputBox";
			this->UsernameInputBox->Size = System::Drawing::Size(576, 43);
			this->UsernameInputBox->TabIndex = 2;
			this->UsernameInputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->UsernameInputBox->TextChanged += gcnew System::EventHandler(this, &Login::UsernameInputBox_TextChanged);
			this->UsernameInputBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::UsernameInputBox_KeyDown);
			// 
			// PasswordInputLabel
			// 
			this->PasswordInputLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PasswordInputLabel->Location = System::Drawing::Point(12, 193);
			this->PasswordInputLabel->Name = L"PasswordInputLabel";
			this->PasswordInputLabel->Size = System::Drawing::Size(576, 50);
			this->PasswordInputLabel->TabIndex = 3;
			this->PasswordInputLabel->Text = L"Password";
			this->PasswordInputLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PasswordInputLabel->Click += gcnew System::EventHandler(this, &Login::PasswordInputLabel_Click);
			// 
			// PasswordInputBox
			// 
			this->PasswordInputBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PasswordInputBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PasswordInputBox->Location = System::Drawing::Point(12, 246);
			this->PasswordInputBox->Name = L"PasswordInputBox";
			this->PasswordInputBox->Size = System::Drawing::Size(576, 43);
			this->PasswordInputBox->TabIndex = 4;
			this->PasswordInputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PasswordInputBox->UseSystemPasswordChar = true;
			this->PasswordInputBox->TextChanged += gcnew System::EventHandler(this, &Login::PasswordInputBox_TextChanged);
			this->PasswordInputBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::PasswordInputBox_KeyDown);
			// 
			// LoginButton
			// 
			this->LoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LoginButton->Enabled = false;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(12, 295);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(285, 143);
			this->LoginButton->TabIndex = 5;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &Login::LoginButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(303, 295);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(285, 143);
			this->ExitButton->TabIndex = 6;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Login::ExitButton_Click);
			// 
			// Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(600, 450);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(this->PasswordInputBox);
			this->Controls->Add(this->PasswordInputLabel);
			this->Controls->Add(this->UsernameInputBox);
			this->Controls->Add(this->UsernameInputLabel);
			this->Controls->Add(this->LoginLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool LoginSuccess = false;
	private: bool DataLoaded = false;
	private: int temp = 0;
	private: ref class account {
		public:
			String^ Username;
			String^ Password;
	};
	private: array<account^>^ Accounts = gcnew array<account^>(0);
	private: std::string encryptMessage(std::string plaintext, std::string key) {
		std::string ciphertext;
		int keyIndex = 0;
		for (int i = 0; i < plaintext.length(); i++) {
			ciphertext += plaintext[i] ^ key[keyIndex];
			keyIndex = (static_cast<unsigned long long>(keyIndex) + 1) % key.length();
		}
		return ciphertext;
	}
	private: std::string decryptMessage(std::string ciphertext, std::string key) {
		std::string plaintext;
		int keyIndex = 0;
		for (int i = 0; i < ciphertext.length(); i++) {
			plaintext += ciphertext[i] ^ key[keyIndex];
			keyIndex = (static_cast<unsigned long long>(keyIndex) + 1) % key.length();
		}
		return plaintext;
	}
	private: void loadAccounts() {
		std::string key = "y/B?E(G+KbPeShVmYq3t6w9z$C&F)J@McQfTjWnZr4u7x!A%D*G-KaPdRgUkXp2s5v8y/B?E(H+MbQeThVmYq3t6w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-KaPdSgVkY";
		if (!DataLoaded) {
			std::ifstream dataSource("data.dat");
			if (dataSource.is_open()) {
				std::string line;
				while (std::getline(dataSource, line)) {
					std::string decryptedLine = decryptMessage(line, key);
					account^ tempAccount = gcnew account;
					for (int i = 0; i < decryptedLine.length(); i++) {
						if (decryptedLine[i] == ':') {
							tempAccount->Username = gcnew String(decryptedLine.substr(0, i).c_str());
							tempAccount->Password = gcnew String(decryptedLine.substr(i + 1, decryptedLine.length() - i - 1).c_str());
							break;
						}
					}
					Array::Resize(Accounts, Accounts->Length + 1);
					Accounts[Accounts->Length - 1] = tempAccount;
				}
				dataSource.close();
			}
			else {
				std::ofstream dataSource("data.dat");
				dataSource.close();
			}
			DataLoaded = true;
		}
	}
	private: void saveAccounts() {
		std::string key = "y/B?E(G+KbPeShVmYq3t6w9z$C&F)J@McQfTjWnZr4u7x!A%D*G-KaPdRgUkXp2s5v8y/B?E(H+MbQeThVmYq3t6w9z$C&F)J@NcRfUjXnZr4u7x!A%D*G-KaPdSgVkY";
		std::ofstream dataSource("data.dat");
		if (dataSource.is_open()) {
			for (int i = 0; i < Accounts->Length; i++) {
				String^ tempString = Accounts[i]->Username + ":" + Accounts[i]->Password;
				std::string tempString2 = msclr::interop::marshal_as<std::string>(tempString);
				std::string encryptedLine = encryptMessage(tempString2, key);
				dataSource << encryptedLine << std::endl;
			}
			dataSource.close();
		}
		else {
			std::ofstream dataSource("data.dat");
			dataSource.close();
		}
	}
	private: System::Void LoginLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		temp++;
		if (temp == 5) {
			temp = 0;
			if (UsernameInputBox->Text->Length > 0 && PasswordInputBox->Text->Length > 0) {
				if (MessageBox::Show("Are you sure you want to create a new account?", "Create Account", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					loadAccounts();
					account^ tempAccount = gcnew account;
					tempAccount->Username = UsernameInputBox->Text;
					tempAccount->Password = PasswordInputBox->Text;
					for (int i = 0; i < Accounts->Length; i++) {
						if (Accounts[i]->Username == tempAccount->Username) {
							MessageBox::Show("An account with that username already exists.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
					}
					Array::Resize(Accounts, Accounts->Length + 1);
					Accounts[Accounts->Length - 1] = tempAccount;
					saveAccounts();
					MessageBox::Show("Account created successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
		}
	}
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loadAccounts();
		for (int i = 0; i < Accounts->Length; i++) {
			if (Accounts[i]->Username == UsernameInputBox->Text && Accounts[i]->Password == PasswordInputBox->Text) {
				MessageBox::Show("Login successful.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				LoginSuccess = true;
				this->Close();
				return;
			}
		}
		MessageBox::Show("Incorrect username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void UsernameInputBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (UsernameInputBox->Text->Length > 0 && PasswordInputBox->Text->Length > 0) {
			LoginButton->Enabled = true;
		}
		else {
			LoginButton->Enabled = false;
		}
	}
	private: System::Void PasswordInputBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (UsernameInputBox->Text->Length > 0 && PasswordInputBox->Text->Length > 0) {
			LoginButton->Enabled = true;
		}
		else {
			LoginButton->Enabled = false;
		}
	}
	private: System::Void UsernameInputLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		UsernameInputBox->Focus();
	}
	private: System::Void PasswordInputLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		PasswordInputBox->Focus();
	}
	private: System::Void UsernameInputBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			PasswordInputBox->Focus();
		}
	}
	private: System::Void PasswordInputBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			LoginButton->PerformClick();
		}
	}
};
}
