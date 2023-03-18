#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

namespace RealProjectV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;

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


	private: System::Windows::Forms::TabPage^ EditTableTab;
	private: System::Windows::Forms::TabPage^ EditMenuTab;

	private: System::Windows::Forms::TextBox^ TableStatusTextBox;
	private: System::Windows::Forms::ComboBox^ SelectTableComboBox;
	private: System::Windows::Forms::TextBox^ SelTableInfoTextBox;
	private: System::Windows::Forms::Button^ ReserveTableButton;
	private: System::Windows::Forms::TextBox^ ResNameTextBox;
	private: System::Windows::Forms::TextBox^ CancelTableStatusTextBox;
	private: System::Windows::Forms::ComboBox^ CancelTableComboBox;
	private: System::Windows::Forms::TextBox^ CancelTableInfoTextBox;
	private: System::Windows::Forms::Button^ CancelTableButton;

	private: System::Windows::Forms::GroupBox^ RemoveTableGroupBox;

	private: System::Windows::Forms::Button^ RemoveTableButton;
	private: System::Windows::Forms::ComboBox^ RemoveTableComboBox;

	private: System::Windows::Forms::SplitContainer^ EditTableContainer;


	private: System::Windows::Forms::GroupBox^ AddTableGroupBox;
	private: System::Windows::Forms::Button^ AddTableButton;
	private: System::Windows::Forms::TextBox^ AddTableMaxSeatTextBox;
	private: System::Windows::Forms::TextBox^ AddTableNameTextBox;
	private: System::Windows::Forms::GroupBox^ AddTableMaxSeatGroupBox;
	private: System::Windows::Forms::GroupBox^ AddTableNameGroupBox;
	private: System::Windows::Forms::TextBox^ AddOrdersInTableTextBox;
	private: System::Windows::Forms::ComboBox^ AddOrdersSelectTableComboBox;


	private: System::Windows::Forms::TextBox^ AddOrdersTableInfoTextBox;
	private: System::Windows::Forms::ComboBox^ AddOrdersSelectMenusComboBox;
	private: System::Windows::Forms::TextBox^ AddOrdersMenusQuantityTextBox;
	private: System::Windows::Forms::TextBox^ AddOrdersMenusInfoTextBox;



	private: System::Windows::Forms::Button^ AddOrdersButton;
	private: System::Windows::Forms::GroupBox^ ReservetionNameGroupBox;






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
			this->ResNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ReserveTableButton = (gcnew System::Windows::Forms::Button());
			this->SelTableInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SelectTableComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->TableStatusTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CancelTableTab = (gcnew System::Windows::Forms::TabPage());
			this->CancelTableButton = (gcnew System::Windows::Forms::Button());
			this->CancelTableInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CancelTableComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CancelTableStatusTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EditTableTab = (gcnew System::Windows::Forms::TabPage());
			this->EditTableContainer = (gcnew System::Windows::Forms::SplitContainer());
			this->AddTableGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddTableMaxSeatGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddTableMaxSeatTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTableNameGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddTableNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTableButton = (gcnew System::Windows::Forms::Button());
			this->RemoveTableGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->RemoveTableButton = (gcnew System::Windows::Forms::Button());
			this->RemoveTableComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->OrderMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->OrderMenuTabControl = (gcnew System::Windows::Forms::TabControl());
			this->AddOrderTab = (gcnew System::Windows::Forms::TabPage());
			this->AddOrdersButton = (gcnew System::Windows::Forms::Button());
			this->AddOrdersMenusInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddOrdersMenusQuantityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddOrdersSelectMenusComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddOrdersTableInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddOrdersSelectTableComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddOrdersInTableTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemoveOrderTab = (gcnew System::Windows::Forms::TabPage());
			this->EditMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->BillingMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->ReservetionNameGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->MainPageTabControl->SuspendLayout();
			this->TableMenuTab->SuspendLayout();
			this->TableMenuTabControl->SuspendLayout();
			this->TableReservationTab->SuspendLayout();
			this->CancelTableTab->SuspendLayout();
			this->EditTableTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditTableContainer))->BeginInit();
			this->EditTableContainer->Panel1->SuspendLayout();
			this->EditTableContainer->Panel2->SuspendLayout();
			this->EditTableContainer->SuspendLayout();
			this->AddTableGroupBox->SuspendLayout();
			this->AddTableMaxSeatGroupBox->SuspendLayout();
			this->AddTableNameGroupBox->SuspendLayout();
			this->RemoveTableGroupBox->SuspendLayout();
			this->OrderMenuTab->SuspendLayout();
			this->OrderMenuTabControl->SuspendLayout();
			this->AddOrderTab->SuspendLayout();
			this->ReservetionNameGroupBox->SuspendLayout();
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
			this->MainPageTabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::MainPageTabControl_SelectedIndexChanged);
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
			this->TableMenuTabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::TableMenuTabControl_SelectedIndexChanged);
			// 
			// TableReservationTab
			// 
			this->TableReservationTab->Controls->Add(this->ReservetionNameGroupBox);
			this->TableReservationTab->Controls->Add(this->ReserveTableButton);
			this->TableReservationTab->Controls->Add(this->SelTableInfoTextBox);
			this->TableReservationTab->Controls->Add(this->SelectTableComboBox);
			this->TableReservationTab->Controls->Add(this->TableStatusTextBox);
			this->TableReservationTab->Location = System::Drawing::Point(4, 37);
			this->TableReservationTab->Name = L"TableReservationTab";
			this->TableReservationTab->Padding = System::Windows::Forms::Padding(3);
			this->TableReservationTab->Size = System::Drawing::Size(1258, 632);
			this->TableReservationTab->TabIndex = 0;
			this->TableReservationTab->Text = L"Table Reservation";
			this->TableReservationTab->UseVisualStyleBackColor = true;
			// 
			// ResNameTextBox
			// 
			this->ResNameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResNameTextBox->Location = System::Drawing::Point(6, 33);
			this->ResNameTextBox->Name = L"ResNameTextBox";
			this->ResNameTextBox->Size = System::Drawing::Size(818, 51);
			this->ResNameTextBox->TabIndex = 4;
			this->ResNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ResNameTextBox->TextChanged += gcnew System::EventHandler(this, &MainPage::ResNameTextBox_TextChanged);
			// 
			// ReserveTableButton
			// 
			this->ReserveTableButton->Enabled = false;
			this->ReserveTableButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReserveTableButton->Location = System::Drawing::Point(294, 409);
			this->ReserveTableButton->Name = L"ReserveTableButton";
			this->ReserveTableButton->Size = System::Drawing::Size(260, 80);
			this->ReserveTableButton->TabIndex = 3;
			this->ReserveTableButton->Text = L"Reserve";
			this->ReserveTableButton->UseVisualStyleBackColor = true;
			this->ReserveTableButton->Click += gcnew System::EventHandler(this, &MainPage::ReserveTableButton_Click);
			// 
			// SelTableInfoTextBox
			// 
			this->SelTableInfoTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SelTableInfoTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->SelTableInfoTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelTableInfoTextBox->Location = System::Drawing::Point(3, 62);
			this->SelTableInfoTextBox->Multiline = true;
			this->SelTableInfoTextBox->Name = L"SelTableInfoTextBox";
			this->SelTableInfoTextBox->ReadOnly = true;
			this->SelTableInfoTextBox->Size = System::Drawing::Size(830, 240);
			this->SelTableInfoTextBox->TabIndex = 2;
			this->SelTableInfoTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SelectTableComboBox
			// 
			this->SelectTableComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->SelectTableComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->SelectTableComboBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->SelectTableComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SelectTableComboBox->FormattingEnabled = true;
			this->SelectTableComboBox->Location = System::Drawing::Point(3, 3);
			this->SelectTableComboBox->Name = L"SelectTableComboBox";
			this->SelectTableComboBox->Size = System::Drawing::Size(830, 53);
			this->SelectTableComboBox->TabIndex = 1;
			this->SelectTableComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::SelectTableComboBox_SelectedIndexChanged);
			// 
			// TableStatusTextBox
			// 
			this->TableStatusTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TableStatusTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TableStatusTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->TableStatusTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TableStatusTextBox->Location = System::Drawing::Point(852, 6);
			this->TableStatusTextBox->Multiline = true;
			this->TableStatusTextBox->Name = L"TableStatusTextBox";
			this->TableStatusTextBox->ReadOnly = true;
			this->TableStatusTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TableStatusTextBox->Size = System::Drawing::Size(400, 620);
			this->TableStatusTextBox->TabIndex = 0;
			this->TableStatusTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CancelTableTab
			// 
			this->CancelTableTab->Controls->Add(this->CancelTableButton);
			this->CancelTableTab->Controls->Add(this->CancelTableInfoTextBox);
			this->CancelTableTab->Controls->Add(this->CancelTableComboBox);
			this->CancelTableTab->Controls->Add(this->CancelTableStatusTextBox);
			this->CancelTableTab->Location = System::Drawing::Point(4, 25);
			this->CancelTableTab->Name = L"CancelTableTab";
			this->CancelTableTab->Padding = System::Windows::Forms::Padding(3);
			this->CancelTableTab->Size = System::Drawing::Size(1258, 644);
			this->CancelTableTab->TabIndex = 1;
			this->CancelTableTab->Text = L"Cancel Table";
			this->CancelTableTab->UseVisualStyleBackColor = true;
			// 
			// CancelTableButton
			// 
			this->CancelTableButton->Enabled = false;
			this->CancelTableButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelTableButton->Location = System::Drawing::Point(281, 308);
			this->CancelTableButton->Name = L"CancelTableButton";
			this->CancelTableButton->Size = System::Drawing::Size(260, 80);
			this->CancelTableButton->TabIndex = 3;
			this->CancelTableButton->Text = L"Cancel Table";
			this->CancelTableButton->UseVisualStyleBackColor = true;
			this->CancelTableButton->Click += gcnew System::EventHandler(this, &MainPage::CancelTableButton_Click);
			// 
			// CancelTableInfoTextBox
			// 
			this->CancelTableInfoTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CancelTableInfoTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->CancelTableInfoTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelTableInfoTextBox->Location = System::Drawing::Point(3, 62);
			this->CancelTableInfoTextBox->Multiline = true;
			this->CancelTableInfoTextBox->Name = L"CancelTableInfoTextBox";
			this->CancelTableInfoTextBox->ReadOnly = true;
			this->CancelTableInfoTextBox->Size = System::Drawing::Size(830, 240);
			this->CancelTableInfoTextBox->TabIndex = 2;
			this->CancelTableInfoTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CancelTableComboBox
			// 
			this->CancelTableComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->CancelTableComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->CancelTableComboBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->CancelTableComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelTableComboBox->FormattingEnabled = true;
			this->CancelTableComboBox->Location = System::Drawing::Point(3, 3);
			this->CancelTableComboBox->Name = L"CancelTableComboBox";
			this->CancelTableComboBox->Size = System::Drawing::Size(830, 53);
			this->CancelTableComboBox->TabIndex = 1;
			this->CancelTableComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::CancelTableComboBox_SelectedIndexChanged);
			// 
			// CancelTableStatusTextBox
			// 
			this->CancelTableStatusTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CancelTableStatusTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CancelTableStatusTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->CancelTableStatusTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelTableStatusTextBox->Location = System::Drawing::Point(852, 6);
			this->CancelTableStatusTextBox->Multiline = true;
			this->CancelTableStatusTextBox->Name = L"CancelTableStatusTextBox";
			this->CancelTableStatusTextBox->ReadOnly = true;
			this->CancelTableStatusTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->CancelTableStatusTextBox->Size = System::Drawing::Size(400, 632);
			this->CancelTableStatusTextBox->TabIndex = 0;
			this->CancelTableStatusTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EditTableTab
			// 
			this->EditTableTab->Controls->Add(this->EditTableContainer);
			this->EditTableTab->Location = System::Drawing::Point(4, 25);
			this->EditTableTab->Name = L"EditTableTab";
			this->EditTableTab->Padding = System::Windows::Forms::Padding(3);
			this->EditTableTab->Size = System::Drawing::Size(1258, 644);
			this->EditTableTab->TabIndex = 2;
			this->EditTableTab->Text = L"Edit Table";
			this->EditTableTab->UseVisualStyleBackColor = true;
			// 
			// EditTableContainer
			// 
			this->EditTableContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EditTableContainer->Location = System::Drawing::Point(3, 3);
			this->EditTableContainer->Name = L"EditTableContainer";
			this->EditTableContainer->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// EditTableContainer.Panel1
			// 
			this->EditTableContainer->Panel1->Controls->Add(this->AddTableGroupBox);
			// 
			// EditTableContainer.Panel2
			// 
			this->EditTableContainer->Panel2->Controls->Add(this->RemoveTableGroupBox);
			this->EditTableContainer->Size = System::Drawing::Size(1252, 638);
			this->EditTableContainer->SplitterDistance = 319;
			this->EditTableContainer->TabIndex = 1;
			// 
			// AddTableGroupBox
			// 
			this->AddTableGroupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->AddTableGroupBox->Controls->Add(this->AddTableMaxSeatGroupBox);
			this->AddTableGroupBox->Controls->Add(this->AddTableNameGroupBox);
			this->AddTableGroupBox->Controls->Add(this->AddTableButton);
			this->AddTableGroupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTableGroupBox->Location = System::Drawing::Point(3, 3);
			this->AddTableGroupBox->Name = L"AddTableGroupBox";
			this->AddTableGroupBox->Size = System::Drawing::Size(1246, 313);
			this->AddTableGroupBox->TabIndex = 0;
			this->AddTableGroupBox->TabStop = false;
			this->AddTableGroupBox->Text = L"Add Table";
			// 
			// AddTableMaxSeatGroupBox
			// 
			this->AddTableMaxSeatGroupBox->Controls->Add(this->AddTableMaxSeatTextBox);
			this->AddTableMaxSeatGroupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTableMaxSeatGroupBox->Location = System::Drawing::Point(689, 112);
			this->AddTableMaxSeatGroupBox->Name = L"AddTableMaxSeatGroupBox";
			this->AddTableMaxSeatGroupBox->Size = System::Drawing::Size(182, 100);
			this->AddTableMaxSeatGroupBox->TabIndex = 6;
			this->AddTableMaxSeatGroupBox->TabStop = false;
			this->AddTableMaxSeatGroupBox->Text = L"Max Seat";
			// 
			// AddTableMaxSeatTextBox
			// 
			this->AddTableMaxSeatTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddTableMaxSeatTextBox->Location = System::Drawing::Point(3, 39);
			this->AddTableMaxSeatTextBox->Name = L"AddTableMaxSeatTextBox";
			this->AddTableMaxSeatTextBox->Size = System::Drawing::Size(176, 43);
			this->AddTableMaxSeatTextBox->TabIndex = 3;
			this->AddTableMaxSeatTextBox->TextChanged += gcnew System::EventHandler(this, &MainPage::AddTableMaxSeatTextBox_TextChanged);
			// 
			// AddTableNameGroupBox
			// 
			this->AddTableNameGroupBox->Controls->Add(this->AddTableNameTextBox);
			this->AddTableNameGroupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTableNameGroupBox->Location = System::Drawing::Point(25, 112);
			this->AddTableNameGroupBox->Name = L"AddTableNameGroupBox";
			this->AddTableNameGroupBox->Size = System::Drawing::Size(640, 100);
			this->AddTableNameGroupBox->TabIndex = 5;
			this->AddTableNameGroupBox->TabStop = false;
			this->AddTableNameGroupBox->Text = L"Table Name";
			// 
			// AddTableNameTextBox
			// 
			this->AddTableNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddTableNameTextBox->Location = System::Drawing::Point(3, 39);
			this->AddTableNameTextBox->Name = L"AddTableNameTextBox";
			this->AddTableNameTextBox->Size = System::Drawing::Size(634, 43);
			this->AddTableNameTextBox->TabIndex = 2;
			this->AddTableNameTextBox->TextChanged += gcnew System::EventHandler(this, &MainPage::AddTableNameTextBox_TextChanged);
			// 
			// AddTableButton
			// 
			this->AddTableButton->Enabled = false;
			this->AddTableButton->Location = System::Drawing::Point(937, 146);
			this->AddTableButton->Name = L"AddTableButton";
			this->AddTableButton->Size = System::Drawing::Size(250, 51);
			this->AddTableButton->TabIndex = 4;
			this->AddTableButton->Text = L"Add Table";
			this->AddTableButton->UseVisualStyleBackColor = true;
			this->AddTableButton->Click += gcnew System::EventHandler(this, &MainPage::AddTableButton_Click);
			// 
			// RemoveTableGroupBox
			// 
			this->RemoveTableGroupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RemoveTableGroupBox->Controls->Add(this->RemoveTableButton);
			this->RemoveTableGroupBox->Controls->Add(this->RemoveTableComboBox);
			this->RemoveTableGroupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveTableGroupBox->Location = System::Drawing::Point(3, 3);
			this->RemoveTableGroupBox->Name = L"RemoveTableGroupBox";
			this->RemoveTableGroupBox->Size = System::Drawing::Size(1246, 309);
			this->RemoveTableGroupBox->TabIndex = 1;
			this->RemoveTableGroupBox->TabStop = false;
			this->RemoveTableGroupBox->Text = L"Remove Table";
			// 
			// RemoveTableButton
			// 
			this->RemoveTableButton->Enabled = false;
			this->RemoveTableButton->Location = System::Drawing::Point(937, 137);
			this->RemoveTableButton->Name = L"RemoveTableButton";
			this->RemoveTableButton->Size = System::Drawing::Size(250, 53);
			this->RemoveTableButton->TabIndex = 1;
			this->RemoveTableButton->Text = L"Remove Table";
			this->RemoveTableButton->UseVisualStyleBackColor = true;
			this->RemoveTableButton->Click += gcnew System::EventHandler(this, &MainPage::RemoveTableButton_Click);
			// 
			// RemoveTableComboBox
			// 
			this->RemoveTableComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->RemoveTableComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->RemoveTableComboBox->FormattingEnabled = true;
			this->RemoveTableComboBox->Location = System::Drawing::Point(25, 138);
			this->RemoveTableComboBox->Name = L"RemoveTableComboBox";
			this->RemoveTableComboBox->Size = System::Drawing::Size(846, 53);
			this->RemoveTableComboBox->TabIndex = 0;
			this->RemoveTableComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::RemoveTableComboBox_SelectedIndexChanged);
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
			this->AddOrderTab->Controls->Add(this->AddOrdersButton);
			this->AddOrderTab->Controls->Add(this->AddOrdersMenusInfoTextBox);
			this->AddOrderTab->Controls->Add(this->AddOrdersMenusQuantityTextBox);
			this->AddOrderTab->Controls->Add(this->AddOrdersSelectMenusComboBox);
			this->AddOrderTab->Controls->Add(this->AddOrdersTableInfoTextBox);
			this->AddOrderTab->Controls->Add(this->AddOrdersSelectTableComboBox);
			this->AddOrderTab->Controls->Add(this->AddOrdersInTableTextBox);
			this->AddOrderTab->Location = System::Drawing::Point(4, 37);
			this->AddOrderTab->Name = L"AddOrderTab";
			this->AddOrderTab->Padding = System::Windows::Forms::Padding(3);
			this->AddOrderTab->Size = System::Drawing::Size(1258, 632);
			this->AddOrderTab->TabIndex = 0;
			this->AddOrderTab->Text = L"Add Order";
			this->AddOrderTab->UseVisualStyleBackColor = true;
			// 
			// AddOrdersButton
			// 
			this->AddOrdersButton->Enabled = false;
			this->AddOrdersButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddOrdersButton->Location = System::Drawing::Point(298, 482);
			this->AddOrdersButton->Name = L"AddOrdersButton";
			this->AddOrdersButton->Size = System::Drawing::Size(221, 100);
			this->AddOrdersButton->TabIndex = 6;
			this->AddOrdersButton->Text = L"Add Order";
			this->AddOrdersButton->UseVisualStyleBackColor = true;
			this->AddOrdersButton->Click += gcnew System::EventHandler(this, &MainPage::AddOrdersButton_Click);
			// 
			// AddOrdersMenusInfoTextBox
			// 
			this->AddOrdersMenusInfoTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddOrdersMenusInfoTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->AddOrdersMenusInfoTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddOrdersMenusInfoTextBox->Location = System::Drawing::Point(3, 367);
			this->AddOrdersMenusInfoTextBox->Multiline = true;
			this->AddOrdersMenusInfoTextBox->Name = L"AddOrdersMenusInfoTextBox";
			this->AddOrdersMenusInfoTextBox->ReadOnly = true;
			this->AddOrdersMenusInfoTextBox->Size = System::Drawing::Size(830, 109);
			this->AddOrdersMenusInfoTextBox->TabIndex = 5;
			this->AddOrdersMenusInfoTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddOrdersMenusQuantityTextBox
			// 
			this->AddOrdersMenusQuantityTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddOrdersMenusQuantityTextBox->Enabled = false;
			this->AddOrdersMenusQuantityTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddOrdersMenusQuantityTextBox->Location = System::Drawing::Point(710, 308);
			this->AddOrdersMenusQuantityTextBox->Name = L"AddOrdersMenusQuantityTextBox";
			this->AddOrdersMenusQuantityTextBox->Size = System::Drawing::Size(123, 51);
			this->AddOrdersMenusQuantityTextBox->TabIndex = 4;
			this->AddOrdersMenusQuantityTextBox->Text = L"1";
			this->AddOrdersMenusQuantityTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddOrdersSelectMenusComboBox
			// 
			this->AddOrdersSelectMenusComboBox->Enabled = false;
			this->AddOrdersSelectMenusComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddOrdersSelectMenusComboBox->FormattingEnabled = true;
			this->AddOrdersSelectMenusComboBox->Location = System::Drawing::Point(3, 308);
			this->AddOrdersSelectMenusComboBox->Name = L"AddOrdersSelectMenusComboBox";
			this->AddOrdersSelectMenusComboBox->Size = System::Drawing::Size(701, 53);
			this->AddOrdersSelectMenusComboBox->TabIndex = 3;
			this->AddOrdersSelectMenusComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::AddOrdersSelectMenusComboBox_SelectedIndexChanged);
			// 
			// AddOrdersTableInfoTextBox
			// 
			this->AddOrdersTableInfoTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddOrdersTableInfoTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->AddOrdersTableInfoTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddOrdersTableInfoTextBox->Location = System::Drawing::Point(3, 62);
			this->AddOrdersTableInfoTextBox->Multiline = true;
			this->AddOrdersTableInfoTextBox->Name = L"AddOrdersTableInfoTextBox";
			this->AddOrdersTableInfoTextBox->ReadOnly = true;
			this->AddOrdersTableInfoTextBox->Size = System::Drawing::Size(830, 240);
			this->AddOrdersTableInfoTextBox->TabIndex = 2;
			this->AddOrdersTableInfoTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddOrdersSelectTableComboBox
			// 
			this->AddOrdersSelectTableComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->AddOrdersSelectTableComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->AddOrdersSelectTableComboBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->AddOrdersSelectTableComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddOrdersSelectTableComboBox->FormattingEnabled = true;
			this->AddOrdersSelectTableComboBox->Location = System::Drawing::Point(3, 3);
			this->AddOrdersSelectTableComboBox->Name = L"AddOrdersSelectTableComboBox";
			this->AddOrdersSelectTableComboBox->Size = System::Drawing::Size(830, 53);
			this->AddOrdersSelectTableComboBox->TabIndex = 1;
			this->AddOrdersSelectTableComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::AddOrdersSelectTableComboBox_SelectedIndexChanged);
			// 
			// AddOrdersInTableTextBox
			// 
			this->AddOrdersInTableTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->AddOrdersInTableTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddOrdersInTableTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->AddOrdersInTableTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddOrdersInTableTextBox->Location = System::Drawing::Point(852, 6);
			this->AddOrdersInTableTextBox->Multiline = true;
			this->AddOrdersInTableTextBox->Name = L"AddOrdersInTableTextBox";
			this->AddOrdersInTableTextBox->ReadOnly = true;
			this->AddOrdersInTableTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->AddOrdersInTableTextBox->Size = System::Drawing::Size(400, 620);
			this->AddOrdersInTableTextBox->TabIndex = 0;
			this->AddOrdersInTableTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// EditMenuTab
			// 
			this->EditMenuTab->Location = System::Drawing::Point(4, 25);
			this->EditMenuTab->Name = L"EditMenuTab";
			this->EditMenuTab->Padding = System::Windows::Forms::Padding(3);
			this->EditMenuTab->Size = System::Drawing::Size(1258, 644);
			this->EditMenuTab->TabIndex = 2;
			this->EditMenuTab->Text = L"Edit Menu";
			this->EditMenuTab->UseVisualStyleBackColor = true;
			// 
			// BillingMenuTab
			// 
			this->BillingMenuTab->Location = System::Drawing::Point(4, 37);
			this->BillingMenuTab->Name = L"BillingMenuTab";
			this->BillingMenuTab->Size = System::Drawing::Size(1272, 679);
			this->BillingMenuTab->TabIndex = 0;
			this->BillingMenuTab->Text = L"Billing Menu";
			this->BillingMenuTab->UseVisualStyleBackColor = true;
			// 
			// ReservetionNameGroupBox
			// 
			this->ReservetionNameGroupBox->Controls->Add(this->ResNameTextBox);
			this->ReservetionNameGroupBox->Location = System::Drawing::Point(3, 308);
			this->ReservetionNameGroupBox->Name = L"ReservetionNameGroupBox";
			this->ReservetionNameGroupBox->Size = System::Drawing::Size(830, 95);
			this->ReservetionNameGroupBox->TabIndex = 5;
			this->ReservetionNameGroupBox->TabStop = false;
			this->ReservetionNameGroupBox->Text = L"Reservetion Name";
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
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->Click += gcnew System::EventHandler(this, &MainPage::MainPage_Click);
			this->MainPageTabControl->ResumeLayout(false);
			this->TableMenuTab->ResumeLayout(false);
			this->TableMenuTabControl->ResumeLayout(false);
			this->TableReservationTab->ResumeLayout(false);
			this->TableReservationTab->PerformLayout();
			this->CancelTableTab->ResumeLayout(false);
			this->CancelTableTab->PerformLayout();
			this->EditTableTab->ResumeLayout(false);
			this->EditTableContainer->Panel1->ResumeLayout(false);
			this->EditTableContainer->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditTableContainer))->EndInit();
			this->EditTableContainer->ResumeLayout(false);
			this->AddTableGroupBox->ResumeLayout(false);
			this->AddTableMaxSeatGroupBox->ResumeLayout(false);
			this->AddTableMaxSeatGroupBox->PerformLayout();
			this->AddTableNameGroupBox->ResumeLayout(false);
			this->AddTableNameGroupBox->PerformLayout();
			this->RemoveTableGroupBox->ResumeLayout(false);
			this->OrderMenuTab->ResumeLayout(false);
			this->OrderMenuTabControl->ResumeLayout(false);
			this->AddOrderTab->ResumeLayout(false);
			this->AddOrderTab->PerformLayout();
			this->ReservetionNameGroupBox->ResumeLayout(false);
			this->ReservetionNameGroupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: ref class menu {
		private: String^ name;
		private: int price;
		public: menu(String^ name, int price) {
			this->name = name;
			this->price = price;
		}
		public: int getPrice() {
			return this->price;
		}
		public: String^ getName() {
			return this->name;
		}
	};
	private: ref class order {
		private: String^ name;
		private: int quantity;
		public: order(String^ name, int quantity) {
			this->name = name;
			this->quantity = quantity;
		}
		public: order(const order^& order) {
			this->name = order->name;
			this->quantity = order->quantity;
		}
		public: String^ getName() {
			return this->name;
		}
		public: int getQuantity() {
			return this->quantity;
		}
		public: void add(int quantity) {
			this->quantity += quantity;
		}
		public: void remove() {
			this->quantity--;
			if (this->quantity < 0) {
				this->quantity = 0;
			}
		}
		public: void remove(int quantity) {
			this->quantity -= quantity;
			if (this->quantity < 0) {
				this->quantity = 0;
			}
		}
		public: ~order() {
			this->quantity = 0;
		}
	};
	private: static array<menu^>^ menus = gcnew array<menu^>(0);
	private: ref class table {
		private: String^ name;
		private: int maxseat;
		private: String^ resname;
		private: array<order^>^ orders = gcnew array<order^>(0);
		private: bool isAvailable;
		public: table(String^ name) {
			this->name = name;
			this->isAvailable = true;
		}
		public: table(String^ name, int maxseat, bool isAvailable, String^ resname) {
			this->name = name;
			this->maxseat = maxseat;
			this->isAvailable = isAvailable;
			this->resname = resname;
		}
		public: String^ getName() {
			return this->name;
		}
		public: int getMaxSeat() {
			return this->maxseat;
		}
		public: String^ getResName() {
			return this->resname;
		}
		public: void setResName(String^ resname) {
			this->resname = resname;
		}
		public: array<order^>^ getOrders() {
			return this->orders;
		}
		public: void setOrders(array<order^>^ orderss) {
			this->orders = orderss;
		}
		public: void setIsAvailable(bool isAvailable) {
			this->isAvailable = isAvailable;
		}
		public: void addOrder(order^ orderss) {
			for (int i = 0; i < this->orders->Length; i++) {
				if (this->orders[i]->getName() == orderss->getName()) {
					this->orders[i]->add(orderss->getQuantity());
					return;
				}
			}
			Array::Resize(this->orders, this->orders->Length + 1);
			this->orders[this->orders->Length - 1] = gcnew order(orderss->getName(), orderss->getQuantity());
		}
		public: void removeOrder(order orderss) {
			for (int i = 0; i < this->orders->Length; i++) {
				if (this->orders[i]->getName() == orderss.getName()) {
					this->orders[i]->remove(orderss.getQuantity());
					if (this->orders[i]->getQuantity() == 0) {
						for (int j = i; j < this->orders->Length - 1; j++) {
							this->orders[j] = this->orders[j + 1];
						}
						Array::Resize(this->orders, this->orders->Length - 1);
					}
					return;
				}
			}
		}
		public: void removeOrder(order orderss, int quantity) {
			for (int i = 0; i < this->orders->Length; i++) {
				if (this->orders[i]->getName() == orderss.getName()) {
					this->orders[i]->remove(quantity);
					if (this->orders[i]->getQuantity() == 0) {
						for (int j = i; j < this->orders->Length - 1; j++) {
							this->orders[j] = this->orders[j + 1];
						}
						Array::Resize(this->orders, this->orders->Length - 1);
					}
					return;
				}
			}
		}
		public: void removeAllOrder() {
			Array::Clear(this->orders, 0, this->orders->Length);
		}
		public: int total() {
			int total = 0;
			for (int i = 0; i < this->orders->Length; i++) {
				for (int j = 0; j < menus->Length; j++) {
					if (this->orders[i]->getName() == menus[j]->getName()) {
						total += this->orders[i]->getQuantity() * menus[j]->getPrice();
					}
				}
			}
			return total;
		}
		public: bool getIsAvailable() {
			return this->isAvailable;
		}
		public: ~table() {
			Array::Clear(this->orders, 0, this->orders->Length);
		}
	};
	private: static array<table^>^ tables = gcnew array<table^>(0);
	private: int clickTemp = 0;
	private: void reloadElement() {
		SelectTableComboBox->Text = "";
		ResNameTextBox->Text = "";
		SelTableInfoTextBox->Text = "";
		ReserveTableButton->Enabled = false;
		CancelTableComboBox->Text = "";
		CancelTableInfoTextBox->Text = "";
		CancelTableButton->Enabled = false;
		//Status Update
		TableStatusTextBox->Text = "";
		CancelTableStatusTextBox->Text = "";
		SelectTableComboBox->Items->Clear();
		CancelTableComboBox->Items->Clear();
		RemoveTableComboBox->Items->Clear();
		AddOrdersSelectTableComboBox->Items->Clear();
		for (int i = 0; i < tables->Length; i++) {
			TableStatusTextBox->Text += tables[i]->getName() + " is " + (tables[i]->getIsAvailable() ? "available" : "not available") + "\r\n";
			CancelTableStatusTextBox->Text += tables[i]->getName() + " is " + (tables[i]->getIsAvailable() ? "available" : "not available") + "\r\n";
			if (tables[i]->getIsAvailable()) {
				SelectTableComboBox->Items->Add(tables[i]->getName());
			}
			else {
				CancelTableComboBox->Items->Add(tables[i]->getName());
				AddOrdersSelectTableComboBox->Items->Add(tables[i]->getName());
			}
			RemoveTableComboBox->Items->Add(tables[i]->getName());
		}
		for (int i = 0; i < menus->Length; i++) {
			AddOrdersSelectMenusComboBox->Items->Add(menus[i]->getName());
		}
	}
	private: System::Void MainPage_Click(System::Object^ sender, System::EventArgs^ e) {
		clickTemp++;
		if (clickTemp == 5) {
			clickTemp = 0;
			if (MessageBox::Show("Are you sure you want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				this->Close();
			}
		}
	}
	private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=RealDatabase.accdb";
		OleDbConnection^ conn = gcnew OleDbConnection(connString);
		conn->Open();
		//String^ insertSQL = "INSERT INTO MenuData (MenuName, Price) VALUES (@Name, @Price)";
		//OleDbCommand^ cmd = gcnew OleDbCommand(insertSQL, conn);
		//cmd->Parameters->Add("@Name", OleDbType::VarChar, 255, "Name");
		//cmd->Parameters->Add("@Price", OleDbType::Integer, 255, "Price");
		//for (int i = 0; i < menus->Length; i++) {
			//cmd->Parameters["@Name"]->Value = menus[i]->getName();
			//cmd->Parameters["@Price"]->Value = menus[i]->getPrice();
			//cmd->ExecuteNonQuery();
		//}
		OleDbCommand^ cmd = gcnew OleDbCommand("SELECT TableName, MaxSeat, Status, ResName From TableData", conn);
		OleDbDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			Array::Resize(tables, tables->Length + 1);
			tables[tables->Length - 1] = gcnew table(reader->GetString(0), reader->GetInt32(1), reader->GetBoolean(2), reader->GetString(3));
		}
		reader->Close();
		cmd = gcnew OleDbCommand("SELECT MenuName, Price FROM MenuData", conn);
		reader = cmd->ExecuteReader();
		while (reader->Read()) {
			Array::Resize(menus, menus->Length + 1);
			menus[menus->Length - 1] = gcnew menu(reader->GetString(0), reader->GetInt32(1));
		}
		reader->Close();
		conn->Close();
		for (int i = 0; i < tables->Length; i++) {
			TableStatusTextBox->Text += tables[i]->getName() + " is " + (tables[i]->getIsAvailable() ? "available" : "not available") + "\r\n";
			CancelTableStatusTextBox->Text += tables[i]->getName() + " is " + (tables[i]->getIsAvailable() ? "available" : "not available") + "\r\n";
			SelectTableComboBox->Items->Add(tables[i]->getName());
		}

	}
	private: System::Void MainPageTabControl_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		reloadElement();
	}
	private: System::Void TableMenuTabControl_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		reloadElement();
	}
	private: System::Void SelectTableComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ResNameTextBox->Text == "" || SelectTableComboBox->Text == "") {
			ReserveTableButton->Enabled = false;
		}
		else {
			ReserveTableButton->Enabled = true;
		}
		SelTableInfoTextBox->Text = "";
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == SelectTableComboBox->Text) {
				SelTableInfoTextBox->Text = "Table Name: " + tables[i]->getName() + "\r\n";
				SelTableInfoTextBox->Text += "Max Seat: " + tables[i]->getMaxSeat() + "\r\n";
				SelTableInfoTextBox->Text += "Status: " + (tables[i]->getIsAvailable() ? "Available" : "Not Available") + "\r\n";
			}
		}
	}
	private: System::Void ResNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (ResNameTextBox->Text == "" || SelectTableComboBox->Text == "") {
			ReserveTableButton->Enabled = false;
		}
		else {
			ReserveTableButton->Enabled = true;
		}
	}
	private: System::Void ReserveTableButton_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == SelectTableComboBox->Text) {
				tables[i]->setIsAvailable(false);
				tables[i]->setResName(ResNameTextBox->Text);
			}
		}
		reloadElement();
	}
	private: System::Void CancelTableComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (CancelTableComboBox->Text == "") {
			CancelTableButton->Enabled = false;
		}
		else {
			CancelTableButton->Enabled = true;
		}
		CancelTableInfoTextBox->Text = "";
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == CancelTableComboBox->Text) {
				CancelTableInfoTextBox->Text = "Table Name: " + tables[i]->getName() + "\r\n";
				CancelTableInfoTextBox->Text += "Max Seat: " + tables[i]->getMaxSeat() + "\r\n";
				CancelTableInfoTextBox->Text += "Status: " + (tables[i]->getIsAvailable() ? "Available" : "Not Available") + "\r\n";
				CancelTableInfoTextBox->Text += "Reserved Name: " + tables[i]->getResName() + "\r\n";
			}
		}
	}
	private: System::Void CancelTableButton_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == CancelTableComboBox->Text) {
				tables[i]->setIsAvailable(true);
				tables[i]->setResName("-");
			}
		}
		reloadElement();
	}
	private: System::Void AddTableNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddTableNameTextBox->Text == "" || AddTableMaxSeatTextBox->Text == "") {
			AddTableButton->Enabled = false;
		}
		else {
			AddTableButton->Enabled = true;
		}
	}
	private: System::Void AddTableMaxSeatTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddTableNameTextBox->Text == "" || AddTableMaxSeatTextBox->Text == "") {
			AddTableButton->Enabled = false;
		}
		else {
			AddTableButton->Enabled = true;
		}
	}
	private: System::Void AddTableButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Array::Resize(tables, tables->Length + 1);
		tables[tables->Length - 1] = gcnew table(AddTableNameTextBox->Text, Convert::ToInt32(AddTableMaxSeatTextBox->Text), true, "-");
		AddTableNameTextBox->Text = "";
		AddTableMaxSeatTextBox->Text = "";
		reloadElement();
		MessageBox::Show("Table " + tables[tables->Length - 1]->getName() + " has been added", "Add Table", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void RemoveTableButton_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == RemoveTableComboBox->Text) {
				for (int j = i; j < tables->Length - 1; j++) {
					tables[j] = tables[j + 1];
				}
				Array::Resize(tables, tables->Length - 1);
			}
		}
		reloadElement();
		RemoveTableComboBox->Text = "";
		RemoveTableButton->Enabled = false;
		MessageBox::Show("Table " + RemoveTableComboBox->Text + " has been removed", "Remove Table", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void RemoveTableComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RemoveTableComboBox->Text == "") {
			RemoveTableButton->Enabled = false;
		}
		else {
			RemoveTableButton->Enabled = true;
		}
	}
	private: System::Void AddOrdersSelectTableComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddOrdersSelectTableComboBox->Text == "" || AddOrdersSelectMenusComboBox->Text == "" || AddOrdersMenusQuantityTextBox->Text == "") {
			AddOrdersButton->Enabled = false;
		}
		else {
			AddOrdersButton->Enabled = true;
		}
		if (AddOrdersSelectTableComboBox->Text == "") {
			AddOrdersSelectMenusComboBox->Enabled = false;
			AddOrdersMenusQuantityTextBox->Enabled = false;
		}
		else {
			AddOrdersSelectMenusComboBox->Enabled = true;
			AddOrdersMenusQuantityTextBox->Enabled = true;
		}
		AddOrdersTableInfoTextBox->Text = "";
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == AddOrdersSelectTableComboBox->Text) {
				AddOrdersTableInfoTextBox->Text = "Table Name: " + tables[i]->getName() + "\r\n";
				AddOrdersTableInfoTextBox->Text += "Max Seat: " + tables[i]->getMaxSeat() + "\r\n";
				AddOrdersTableInfoTextBox->Text += "Status: " + (tables[i]->getIsAvailable() ? "Available" : "Not Available") + "\r\n";
				AddOrdersTableInfoTextBox->Text += "Reserved Name: " + tables[i]->getResName() + "\r\n";
			}
		}
	}
	private: System::Void AddOrdersSelectMenusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddOrdersSelectTableComboBox->Text == "" || AddOrdersSelectMenusComboBox->Text == "" || AddOrdersMenusQuantityTextBox->Text == "") {
			AddOrdersButton->Enabled = false;
		}
		else {
			AddOrdersButton->Enabled = true;
		}
		AddOrdersMenusInfoTextBox->Text = "";
		for (int i = 0; i < menus->Length; i++) {
			if (menus[i]->getName() == AddOrdersSelectMenusComboBox->Text) {
				AddOrdersMenusInfoTextBox->Text = "Menu Name: " + menus[i]->getName() + "\r\n";
				AddOrdersMenusInfoTextBox->Text += "Price: " + menus[i]->getPrice() + "\r\n";
			}
		}
	}
	private: System::Void AddOrdersButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ MenuName = AddOrdersSelectMenusComboBox->Text;
		int Price = Convert::ToInt32(AddOrdersMenusQuantityTextBox->Text);
		order^ tempOrder = gcnew order(MenuName, Price);
		int tableIndex = 0;
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == AddOrdersSelectTableComboBox->Text) {
				tables[i]->addOrder(tempOrder);
				tableIndex = i;
			}
		}
		array<order^>^ tempOrders = tables[tableIndex]->getOrders();
		AddOrdersInTableTextBox->Text = "Table: " + tables[tableIndex]->getName() + "\r\n";
		for (int i = 0; i < tempOrders->Length; i++) {
			AddOrdersInTableTextBox->Text += (i+1) + ". " + tempOrders[i]->getName() + " x" + tempOrders[i]->getQuantity() + "\r\n";
		}
	}
};
}
