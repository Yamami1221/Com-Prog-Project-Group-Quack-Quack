#pragma once

namespace RealProjectV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
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
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ MainPageTabControl;
	private: System::Windows::Forms::TabPage^ TableMenuTab;
	private: System::Windows::Forms::TabPage^ OrderMenuTab;
	private: System::Windows::Forms::TabPage^ BillingMenuTab;
	private: System::Windows::Forms::TabControl^ TableMenuTabControl;
	private: System::Windows::Forms::TabPage^ TableReservationTab;
	private: System::Windows::Forms::TabPage^ CancelTableTab;

	private: System::Windows::Forms::TabControl^ OrderMenuTabControl;
	private: System::Windows::Forms::TabPage^ AddOrderTab;
	private: System::Windows::Forms::TabPage^ RemoveOrderTab;

	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::TabPage^ EditTableTab;
	private: System::Windows::Forms::TabPage^ EditMenuTab;
	private: System::Windows::Forms::Splitter^ splitter2;


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
			this->MainPageTabControl = (gcnew System::Windows::Forms::TabControl());
			this->TableMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->TableMenuTabControl = (gcnew System::Windows::Forms::TabControl());
			this->TableReservationTab = (gcnew System::Windows::Forms::TabPage());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->CancelTableTab = (gcnew System::Windows::Forms::TabPage());
			this->OrderMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->OrderMenuTabControl = (gcnew System::Windows::Forms::TabControl());
			this->AddOrderTab = (gcnew System::Windows::Forms::TabPage());
			this->RemoveOrderTab = (gcnew System::Windows::Forms::TabPage());
			this->BillingMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->EditTableTab = (gcnew System::Windows::Forms::TabPage());
			this->EditMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->MainPageTabControl->SuspendLayout();
			this->TableMenuTab->SuspendLayout();
			this->TableMenuTabControl->SuspendLayout();
			this->TableReservationTab->SuspendLayout();
			this->OrderMenuTab->SuspendLayout();
			this->OrderMenuTabControl->SuspendLayout();
			this->BillingMenuTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// MainPageTabControl
			// 
			this->MainPageTabControl->Controls->Add(this->TableMenuTab);
			this->MainPageTabControl->Controls->Add(this->OrderMenuTab);
			this->MainPageTabControl->Controls->Add(this->BillingMenuTab);
			this->MainPageTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPageTabControl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainPageTabControl->Location = System::Drawing::Point(0, 0);
			this->MainPageTabControl->Name = L"MainPageTabControl";
			this->MainPageTabControl->SelectedIndex = 0;
			this->MainPageTabControl->Size = System::Drawing::Size(1280, 720);
			this->MainPageTabControl->TabIndex = 0;
			// 
			// TableMenuTab
			// 
			this->TableMenuTab->Controls->Add(this->TableMenuTabControl);
			this->TableMenuTab->Location = System::Drawing::Point(4, 37);
			this->TableMenuTab->Name = L"TableMenuTab";
			this->TableMenuTab->Padding = System::Windows::Forms::Padding(3);
			this->TableMenuTab->Size = System::Drawing::Size(1272, 679);
			this->TableMenuTab->TabIndex = 0;
			this->TableMenuTab->Text = L"Table Menu";
			this->TableMenuTab->UseVisualStyleBackColor = true;
			// 
			// TableMenuTabControl
			// 
			this->TableMenuTabControl->Controls->Add(this->TableReservationTab);
			this->TableMenuTabControl->Controls->Add(this->CancelTableTab);
			this->TableMenuTabControl->Controls->Add(this->EditTableTab);
			this->TableMenuTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TableMenuTabControl->Location = System::Drawing::Point(3, 3);
			this->TableMenuTabControl->Name = L"TableMenuTabControl";
			this->TableMenuTabControl->SelectedIndex = 0;
			this->TableMenuTabControl->Size = System::Drawing::Size(1266, 673);
			this->TableMenuTabControl->TabIndex = 0;
			// 
			// TableReservationTab
			// 
			this->TableReservationTab->Controls->Add(this->splitter1);
			this->TableReservationTab->Location = System::Drawing::Point(4, 37);
			this->TableReservationTab->Name = L"TableReservationTab";
			this->TableReservationTab->Padding = System::Windows::Forms::Padding(3);
			this->TableReservationTab->Size = System::Drawing::Size(1258, 632);
			this->TableReservationTab->TabIndex = 0;
			this->TableReservationTab->Text = L"Table Reservation";
			this->TableReservationTab->UseVisualStyleBackColor = true;
			// 
			// splitter1
			// 
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Right;
			this->splitter1->Location = System::Drawing::Point(626, 3);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(629, 626);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// CancelTableTab
			// 
			this->CancelTableTab->Location = System::Drawing::Point(4, 37);
			this->CancelTableTab->Name = L"CancelTableTab";
			this->CancelTableTab->Padding = System::Windows::Forms::Padding(3);
			this->CancelTableTab->Size = System::Drawing::Size(1258, 632);
			this->CancelTableTab->TabIndex = 1;
			this->CancelTableTab->Text = L"Cancel Table";
			this->CancelTableTab->UseVisualStyleBackColor = true;
			// 
			// OrderMenuTab
			// 
			this->OrderMenuTab->Controls->Add(this->OrderMenuTabControl);
			this->OrderMenuTab->Location = System::Drawing::Point(4, 37);
			this->OrderMenuTab->Name = L"OrderMenuTab";
			this->OrderMenuTab->Padding = System::Windows::Forms::Padding(3);
			this->OrderMenuTab->Size = System::Drawing::Size(1272, 679);
			this->OrderMenuTab->TabIndex = 1;
			this->OrderMenuTab->Text = L"Order Menu";
			this->OrderMenuTab->UseVisualStyleBackColor = true;
			// 
			// OrderMenuTabControl
			// 
			this->OrderMenuTabControl->Controls->Add(this->AddOrderTab);
			this->OrderMenuTabControl->Controls->Add(this->RemoveOrderTab);
			this->OrderMenuTabControl->Controls->Add(this->EditMenuTab);
			this->OrderMenuTabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OrderMenuTabControl->Location = System::Drawing::Point(3, 3);
			this->OrderMenuTabControl->Name = L"OrderMenuTabControl";
			this->OrderMenuTabControl->SelectedIndex = 0;
			this->OrderMenuTabControl->Size = System::Drawing::Size(1266, 673);
			this->OrderMenuTabControl->TabIndex = 0;
			// 
			// AddOrderTab
			// 
			this->AddOrderTab->Location = System::Drawing::Point(4, 37);
			this->AddOrderTab->Name = L"AddOrderTab";
			this->AddOrderTab->Padding = System::Windows::Forms::Padding(3);
			this->AddOrderTab->Size = System::Drawing::Size(1258, 632);
			this->AddOrderTab->TabIndex = 0;
			this->AddOrderTab->Text = L"Add Order";
			this->AddOrderTab->UseVisualStyleBackColor = true;
			// 
			// RemoveOrderTab
			// 
			this->RemoveOrderTab->Location = System::Drawing::Point(4, 37);
			this->RemoveOrderTab->Name = L"RemoveOrderTab";
			this->RemoveOrderTab->Padding = System::Windows::Forms::Padding(3);
			this->RemoveOrderTab->Size = System::Drawing::Size(1258, 632);
			this->RemoveOrderTab->TabIndex = 1;
			this->RemoveOrderTab->Text = L"Remove Order";
			this->RemoveOrderTab->UseVisualStyleBackColor = true;
			// 
			// BillingMenuTab
			// 
			this->BillingMenuTab->Controls->Add(this->splitter2);
			this->BillingMenuTab->Location = System::Drawing::Point(4, 37);
			this->BillingMenuTab->Name = L"BillingMenuTab";
			this->BillingMenuTab->Size = System::Drawing::Size(1272, 679);
			this->BillingMenuTab->TabIndex = 0;
			this->BillingMenuTab->Text = L"Billing Menu";
			this->BillingMenuTab->UseVisualStyleBackColor = true;
			// 
			// EditTableTab
			// 
			this->EditTableTab->Location = System::Drawing::Point(4, 37);
			this->EditTableTab->Name = L"EditTableTab";
			this->EditTableTab->Padding = System::Windows::Forms::Padding(3);
			this->EditTableTab->Size = System::Drawing::Size(1258, 632);
			this->EditTableTab->TabIndex = 2;
			this->EditTableTab->Text = L"Edit Table";
			this->EditTableTab->UseVisualStyleBackColor = true;
			// 
			// EditMenuTab
			// 
			this->EditMenuTab->Location = System::Drawing::Point(4, 37);
			this->EditMenuTab->Name = L"EditMenuTab";
			this->EditMenuTab->Padding = System::Windows::Forms::Padding(3);
			this->EditMenuTab->Size = System::Drawing::Size(1258, 632);
			this->EditMenuTab->TabIndex = 2;
			this->EditMenuTab->Text = L"Edit Menu";
			this->EditMenuTab->UseVisualStyleBackColor = true;
			// 
			// splitter2
			// 
			this->splitter2->Dock = System::Windows::Forms::DockStyle::Right;
			this->splitter2->Location = System::Drawing::Point(872, 0);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(400, 679);
			this->splitter2->TabIndex = 0;
			this->splitter2->TabStop = false;
			// 
			// MainPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->MainPageTabControl);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Click += gcnew System::EventHandler(this, &MainPage::MainPage_Click);
			this->MainPageTabControl->ResumeLayout(false);
			this->TableMenuTab->ResumeLayout(false);
			this->TableMenuTabControl->ResumeLayout(false);
			this->TableReservationTab->ResumeLayout(false);
			this->OrderMenuTab->ResumeLayout(false);
			this->OrderMenuTabControl->ResumeLayout(false);
			this->BillingMenuTab->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: int clickTemp = 0;
	private: System::Void MainPage_Click(System::Object^ sender, System::EventArgs^ e) {
		clickTemp++;
		if (clickTemp == 5) {
			clickTemp = 0;
			if (MessageBox::Show("Are you sure you want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				this->Close();
			}
		}
	}
};
}
