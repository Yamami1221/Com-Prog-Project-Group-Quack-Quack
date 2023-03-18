#pragma once

#include <string>
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
	private: System::Windows::Forms::TextBox^ RemoveOrdersInTableTextBox;
	private: System::Windows::Forms::ComboBox^ RemoveOrdersSelectTableComboBox;
	private: System::Windows::Forms::TextBox^ RemoveOrdersTableInfoTextBox;
	private: System::Windows::Forms::ComboBox^ RemoveOrdersSelectMenusComboBox;
	private: System::Windows::Forms::TextBox^ RemoveOrdersMenusQuantityTextBox;
	private: System::Windows::Forms::Button^ RemoveOrdersButton;
	private: System::Windows::Forms::SplitContainer^ EditMenuContainer;
	private: System::Windows::Forms::GroupBox^ AddMenuGroupBox;
	private: System::Windows::Forms::GroupBox^ RemoveMenuGroupBox;
	private: System::Windows::Forms::Button^ AddMenuButton;
	private: System::Windows::Forms::GroupBox^ AddMenuPrice;
	private: System::Windows::Forms::GroupBox^ AddMenuMenuName;
	private: System::Windows::Forms::TextBox^ AddMenuPriceTextBox;
	private: System::Windows::Forms::TextBox^ AddMenuNameTextBox;
	private: System::Windows::Forms::ComboBox^ RemoveMenuComboBox;
	private: System::Windows::Forms::Button^ RemoveMenuButton;
	private: System::Windows::Forms::TextBox^ ReceiptTextBox;
	private: System::Windows::Forms::Button^ CheckOutButton;
	private: System::Windows::Forms::ComboBox^ CheckOutComboBox;










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
			this->ReservetionNameGroupBox = (gcnew System::Windows::Forms::GroupBox());
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
			this->RemoveOrdersButton = (gcnew System::Windows::Forms::Button());
			this->RemoveOrdersMenusQuantityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemoveOrdersSelectMenusComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->RemoveOrdersTableInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemoveOrdersSelectTableComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->RemoveOrdersInTableTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EditMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->EditMenuContainer = (gcnew System::Windows::Forms::SplitContainer());
			this->AddMenuGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddMenuButton = (gcnew System::Windows::Forms::Button());
			this->AddMenuPrice = (gcnew System::Windows::Forms::GroupBox());
			this->AddMenuPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddMenuMenuName = (gcnew System::Windows::Forms::GroupBox());
			this->AddMenuNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemoveMenuGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->RemoveMenuButton = (gcnew System::Windows::Forms::Button());
			this->RemoveMenuComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->BillingMenuTab = (gcnew System::Windows::Forms::TabPage());
			this->CheckOutButton = (gcnew System::Windows::Forms::Button());
			this->CheckOutComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ReceiptTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MainPageTabControl->SuspendLayout();
			this->TableMenuTab->SuspendLayout();
			this->TableMenuTabControl->SuspendLayout();
			this->TableReservationTab->SuspendLayout();
			this->ReservetionNameGroupBox->SuspendLayout();
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
			this->RemoveOrderTab->SuspendLayout();
			this->EditMenuTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditMenuContainer))->BeginInit();
			this->EditMenuContainer->Panel1->SuspendLayout();
			this->EditMenuContainer->Panel2->SuspendLayout();
			this->EditMenuContainer->SuspendLayout();
			this->AddMenuGroupBox->SuspendLayout();
			this->AddMenuPrice->SuspendLayout();
			this->AddMenuMenuName->SuspendLayout();
			this->RemoveMenuGroupBox->SuspendLayout();
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
			this->ReserveTableButton->Location = System::Drawing::Point(290, 409);
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
			this->CancelTableButton->Location = System::Drawing::Point(286, 308);
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
			this->OrderMenuTabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::OrderMenuTabControl_SelectedIndexChanged);
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
			this->AddOrdersButton->Size = System::Drawing::Size(250, 100);
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
			this->AddOrdersMenusQuantityTextBox->Location = System::Drawing::Point(709, 309);
			this->AddOrdersMenusQuantityTextBox->Name = L"AddOrdersMenusQuantityTextBox";
			this->AddOrdersMenusQuantityTextBox->Size = System::Drawing::Size(124, 51);
			this->AddOrdersMenusQuantityTextBox->TabIndex = 4;
			this->AddOrdersMenusQuantityTextBox->Text = L"1";
			this->AddOrdersMenusQuantityTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->AddOrdersMenusQuantityTextBox->TextChanged += gcnew System::EventHandler(this, &MainPage::AddOrdersMenusQuantityTextBox_TextChanged);
			// 
			// AddOrdersSelectMenusComboBox
			// 
			this->AddOrdersSelectMenusComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->AddOrdersSelectMenusComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->AddOrdersSelectMenusComboBox->Enabled = false;
			this->AddOrdersSelectMenusComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddOrdersSelectMenusComboBox->FormattingEnabled = true;
			this->AddOrdersSelectMenusComboBox->Location = System::Drawing::Point(3, 308);
			this->AddOrdersSelectMenusComboBox->Name = L"AddOrdersSelectMenusComboBox";
			this->AddOrdersSelectMenusComboBox->Size = System::Drawing::Size(700, 53);
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
			this->RemoveOrderTab->Controls->Add(this->RemoveOrdersButton);
			this->RemoveOrderTab->Controls->Add(this->RemoveOrdersMenusQuantityTextBox);
			this->RemoveOrderTab->Controls->Add(this->RemoveOrdersSelectMenusComboBox);
			this->RemoveOrderTab->Controls->Add(this->RemoveOrdersTableInfoTextBox);
			this->RemoveOrderTab->Controls->Add(this->RemoveOrdersSelectTableComboBox);
			this->RemoveOrderTab->Controls->Add(this->RemoveOrdersInTableTextBox);
			this->RemoveOrderTab->Location = System::Drawing::Point(4, 25);
			this->RemoveOrderTab->Name = L"RemoveOrderTab";
			this->RemoveOrderTab->Padding = System::Windows::Forms::Padding(3);
			this->RemoveOrderTab->Size = System::Drawing::Size(1258, 644);
			this->RemoveOrderTab->TabIndex = 1;
			this->RemoveOrderTab->Text = L"Remove Order";
			this->RemoveOrderTab->UseVisualStyleBackColor = true;
			// 
			// RemoveOrdersButton
			// 
			this->RemoveOrdersButton->Enabled = false;
			this->RemoveOrdersButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveOrdersButton->Location = System::Drawing::Point(296, 370);
			this->RemoveOrdersButton->Name = L"RemoveOrdersButton";
			this->RemoveOrdersButton->Size = System::Drawing::Size(250, 100);
			this->RemoveOrdersButton->TabIndex = 5;
			this->RemoveOrdersButton->Text = L"Remove Order";
			this->RemoveOrdersButton->UseVisualStyleBackColor = true;
			this->RemoveOrdersButton->Click += gcnew System::EventHandler(this, &MainPage::RemoveOrdersButton_Click);
			// 
			// RemoveOrdersMenusQuantityTextBox
			// 
			this->RemoveOrdersMenusQuantityTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RemoveOrdersMenusQuantityTextBox->Enabled = false;
			this->RemoveOrdersMenusQuantityTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RemoveOrdersMenusQuantityTextBox->Location = System::Drawing::Point(709, 312);
			this->RemoveOrdersMenusQuantityTextBox->Name = L"RemoveOrdersMenusQuantityTextBox";
			this->RemoveOrdersMenusQuantityTextBox->Size = System::Drawing::Size(124, 51);
			this->RemoveOrdersMenusQuantityTextBox->TabIndex = 4;
			this->RemoveOrdersMenusQuantityTextBox->Text = L"1";
			this->RemoveOrdersMenusQuantityTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->RemoveOrdersMenusQuantityTextBox->TextChanged += gcnew System::EventHandler(this, &MainPage::RemoveOrdersMenusQuantityTextBox_TextChanged);
			// 
			// RemoveOrdersSelectMenusComboBox
			// 
			this->RemoveOrdersSelectMenusComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->RemoveOrdersSelectMenusComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->RemoveOrdersSelectMenusComboBox->Enabled = false;
			this->RemoveOrdersSelectMenusComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RemoveOrdersSelectMenusComboBox->FormattingEnabled = true;
			this->RemoveOrdersSelectMenusComboBox->Location = System::Drawing::Point(3, 311);
			this->RemoveOrdersSelectMenusComboBox->Name = L"RemoveOrdersSelectMenusComboBox";
			this->RemoveOrdersSelectMenusComboBox->Size = System::Drawing::Size(700, 53);
			this->RemoveOrdersSelectMenusComboBox->TabIndex = 3;
			this->RemoveOrdersSelectMenusComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::RemoveOrdersSelectMenusComboBox_SelectedIndexChanged);
			// 
			// RemoveOrdersTableInfoTextBox
			// 
			this->RemoveOrdersTableInfoTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RemoveOrdersTableInfoTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->RemoveOrdersTableInfoTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RemoveOrdersTableInfoTextBox->Location = System::Drawing::Point(3, 65);
			this->RemoveOrdersTableInfoTextBox->Multiline = true;
			this->RemoveOrdersTableInfoTextBox->Name = L"RemoveOrdersTableInfoTextBox";
			this->RemoveOrdersTableInfoTextBox->ReadOnly = true;
			this->RemoveOrdersTableInfoTextBox->Size = System::Drawing::Size(830, 240);
			this->RemoveOrdersTableInfoTextBox->TabIndex = 2;
			this->RemoveOrdersTableInfoTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RemoveOrdersSelectTableComboBox
			// 
			this->RemoveOrdersSelectTableComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->RemoveOrdersSelectTableComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->RemoveOrdersSelectTableComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RemoveOrdersSelectTableComboBox->FormattingEnabled = true;
			this->RemoveOrdersSelectTableComboBox->Location = System::Drawing::Point(3, 6);
			this->RemoveOrdersSelectTableComboBox->Name = L"RemoveOrdersSelectTableComboBox";
			this->RemoveOrdersSelectTableComboBox->Size = System::Drawing::Size(830, 53);
			this->RemoveOrdersSelectTableComboBox->TabIndex = 1;
			this->RemoveOrdersSelectTableComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::RemoveOrdersSelectTableComboBox_SelectedIndexChanged);
			// 
			// RemoveOrdersInTableTextBox
			// 
			this->RemoveOrdersInTableTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RemoveOrdersInTableTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RemoveOrdersInTableTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->RemoveOrdersInTableTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveOrdersInTableTextBox->Location = System::Drawing::Point(852, 6);
			this->RemoveOrdersInTableTextBox->Multiline = true;
			this->RemoveOrdersInTableTextBox->Name = L"RemoveOrdersInTableTextBox";
			this->RemoveOrdersInTableTextBox->ReadOnly = true;
			this->RemoveOrdersInTableTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->RemoveOrdersInTableTextBox->Size = System::Drawing::Size(400, 632);
			this->RemoveOrdersInTableTextBox->TabIndex = 0;
			this->RemoveOrdersInTableTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// EditMenuTab
			// 
			this->EditMenuTab->Controls->Add(this->EditMenuContainer);
			this->EditMenuTab->Location = System::Drawing::Point(4, 25);
			this->EditMenuTab->Name = L"EditMenuTab";
			this->EditMenuTab->Padding = System::Windows::Forms::Padding(3);
			this->EditMenuTab->Size = System::Drawing::Size(1258, 644);
			this->EditMenuTab->TabIndex = 2;
			this->EditMenuTab->Text = L"Edit Menu";
			this->EditMenuTab->UseVisualStyleBackColor = true;
			// 
			// EditMenuContainer
			// 
			this->EditMenuContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EditMenuContainer->Location = System::Drawing::Point(3, 3);
			this->EditMenuContainer->Name = L"EditMenuContainer";
			this->EditMenuContainer->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// EditMenuContainer.Panel1
			// 
			this->EditMenuContainer->Panel1->Controls->Add(this->AddMenuGroupBox);
			// 
			// EditMenuContainer.Panel2
			// 
			this->EditMenuContainer->Panel2->Controls->Add(this->RemoveMenuGroupBox);
			this->EditMenuContainer->Size = System::Drawing::Size(1252, 638);
			this->EditMenuContainer->SplitterDistance = 319;
			this->EditMenuContainer->TabIndex = 0;
			// 
			// AddMenuGroupBox
			// 
			this->AddMenuGroupBox->AutoSize = true;
			this->AddMenuGroupBox->Controls->Add(this->AddMenuButton);
			this->AddMenuGroupBox->Controls->Add(this->AddMenuPrice);
			this->AddMenuGroupBox->Controls->Add(this->AddMenuMenuName);
			this->AddMenuGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddMenuGroupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddMenuGroupBox->Location = System::Drawing::Point(0, 0);
			this->AddMenuGroupBox->Name = L"AddMenuGroupBox";
			this->AddMenuGroupBox->Size = System::Drawing::Size(1252, 319);
			this->AddMenuGroupBox->TabIndex = 0;
			this->AddMenuGroupBox->TabStop = false;
			this->AddMenuGroupBox->Text = L"Add Menu";
			// 
			// AddMenuButton
			// 
			this->AddMenuButton->Enabled = false;
			this->AddMenuButton->Location = System::Drawing::Point(956, 109);
			this->AddMenuButton->Name = L"AddMenuButton";
			this->AddMenuButton->Size = System::Drawing::Size(240, 100);
			this->AddMenuButton->TabIndex = 2;
			this->AddMenuButton->Text = L"Add Menu";
			this->AddMenuButton->UseVisualStyleBackColor = true;
			this->AddMenuButton->Click += gcnew System::EventHandler(this, &MainPage::AddMenuButton_Click);
			// 
			// AddMenuPrice
			// 
			this->AddMenuPrice->Controls->Add(this->AddMenuPriceTextBox);
			this->AddMenuPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddMenuPrice->Location = System::Drawing::Point(690, 109);
			this->AddMenuPrice->Name = L"AddMenuPrice";
			this->AddMenuPrice->Size = System::Drawing::Size(220, 100);
			this->AddMenuPrice->TabIndex = 1;
			this->AddMenuPrice->TabStop = false;
			this->AddMenuPrice->Text = L"Price";
			// 
			// AddMenuPriceTextBox
			// 
			this->AddMenuPriceTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddMenuPriceTextBox->Location = System::Drawing::Point(6, 42);
			this->AddMenuPriceTextBox->Name = L"AddMenuPriceTextBox";
			this->AddMenuPriceTextBox->Size = System::Drawing::Size(208, 43);
			this->AddMenuPriceTextBox->TabIndex = 0;
			this->AddMenuPriceTextBox->TextChanged += gcnew System::EventHandler(this, &MainPage::AddMenuPriceTextBox_TextChanged);
			// 
			// AddMenuMenuName
			// 
			this->AddMenuMenuName->Controls->Add(this->AddMenuNameTextBox);
			this->AddMenuMenuName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddMenuMenuName->Location = System::Drawing::Point(39, 109);
			this->AddMenuMenuName->Name = L"AddMenuMenuName";
			this->AddMenuMenuName->Size = System::Drawing::Size(645, 100);
			this->AddMenuMenuName->TabIndex = 0;
			this->AddMenuMenuName->TabStop = false;
			this->AddMenuMenuName->Text = L"Menu Name";
			// 
			// AddMenuNameTextBox
			// 
			this->AddMenuNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddMenuNameTextBox->Location = System::Drawing::Point(6, 39);
			this->AddMenuNameTextBox->Name = L"AddMenuNameTextBox";
			this->AddMenuNameTextBox->Size = System::Drawing::Size(633, 43);
			this->AddMenuNameTextBox->TabIndex = 0;
			this->AddMenuNameTextBox->TextChanged += gcnew System::EventHandler(this, &MainPage::AddMenuNameTextBox_TextChanged);
			// 
			// RemoveMenuGroupBox
			// 
			this->RemoveMenuGroupBox->AutoSize = true;
			this->RemoveMenuGroupBox->Controls->Add(this->RemoveMenuButton);
			this->RemoveMenuGroupBox->Controls->Add(this->RemoveMenuComboBox);
			this->RemoveMenuGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RemoveMenuGroupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveMenuGroupBox->Location = System::Drawing::Point(0, 0);
			this->RemoveMenuGroupBox->Name = L"RemoveMenuGroupBox";
			this->RemoveMenuGroupBox->Size = System::Drawing::Size(1252, 315);
			this->RemoveMenuGroupBox->TabIndex = 0;
			this->RemoveMenuGroupBox->TabStop = false;
			this->RemoveMenuGroupBox->Text = L"Remove Menu";
			// 
			// RemoveMenuButton
			// 
			this->RemoveMenuButton->Enabled = false;
			this->RemoveMenuButton->Location = System::Drawing::Point(956, 140);
			this->RemoveMenuButton->Name = L"RemoveMenuButton";
			this->RemoveMenuButton->Size = System::Drawing::Size(259, 53);
			this->RemoveMenuButton->TabIndex = 1;
			this->RemoveMenuButton->Text = L"Remove Menu";
			this->RemoveMenuButton->UseVisualStyleBackColor = true;
			this->RemoveMenuButton->Click += gcnew System::EventHandler(this, &MainPage::RemoveMenuButton_Click);
			// 
			// RemoveMenuComboBox
			// 
			this->RemoveMenuComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->RemoveMenuComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->RemoveMenuComboBox->FormattingEnabled = true;
			this->RemoveMenuComboBox->Location = System::Drawing::Point(39, 140);
			this->RemoveMenuComboBox->Name = L"RemoveMenuComboBox";
			this->RemoveMenuComboBox->Size = System::Drawing::Size(871, 53);
			this->RemoveMenuComboBox->TabIndex = 0;
			this->RemoveMenuComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::RemoveMenuComboBox_SelectedIndexChanged);
			// 
			// BillingMenuTab
			// 
			this->BillingMenuTab->Controls->Add(this->CheckOutButton);
			this->BillingMenuTab->Controls->Add(this->CheckOutComboBox);
			this->BillingMenuTab->Controls->Add(this->ReceiptTextBox);
			this->BillingMenuTab->Location = System::Drawing::Point(4, 37);
			this->BillingMenuTab->Name = L"BillingMenuTab";
			this->BillingMenuTab->Size = System::Drawing::Size(1272, 679);
			this->BillingMenuTab->TabIndex = 0;
			this->BillingMenuTab->Text = L"Billing Menu";
			this->BillingMenuTab->UseVisualStyleBackColor = true;
			// 
			// CheckOutButton
			// 
			this->CheckOutButton->Enabled = false;
			this->CheckOutButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckOutButton->Location = System::Drawing::Point(297, 258);
			this->CheckOutButton->Name = L"CheckOutButton";
			this->CheckOutButton->Size = System::Drawing::Size(250, 150);
			this->CheckOutButton->TabIndex = 2;
			this->CheckOutButton->Text = L"Done";
			this->CheckOutButton->UseVisualStyleBackColor = true;
			this->CheckOutButton->Click += gcnew System::EventHandler(this, &MainPage::CheckOutButton_Click);
			// 
			// CheckOutComboBox
			// 
			this->CheckOutComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->CheckOutComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->CheckOutComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckOutComboBox->FormattingEnabled = true;
			this->CheckOutComboBox->Location = System::Drawing::Point(3, 199);
			this->CheckOutComboBox->Name = L"CheckOutComboBox";
			this->CheckOutComboBox->Size = System::Drawing::Size(863, 53);
			this->CheckOutComboBox->TabIndex = 1;
			this->CheckOutComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::CheckOutComboBox_SelectedIndexChanged);
			// 
			// ReceiptTextBox
			// 
			this->ReceiptTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ReceiptTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ReceiptTextBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ReceiptTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReceiptTextBox->Location = System::Drawing::Point(872, 0);
			this->ReceiptTextBox->Multiline = true;
			this->ReceiptTextBox->Name = L"ReceiptTextBox";
			this->ReceiptTextBox->ReadOnly = true;
			this->ReceiptTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ReceiptTextBox->Size = System::Drawing::Size(400, 679);
			this->ReceiptTextBox->TabIndex = 0;
			this->ReceiptTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->ReservetionNameGroupBox->ResumeLayout(false);
			this->ReservetionNameGroupBox->PerformLayout();
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
			this->RemoveOrderTab->ResumeLayout(false);
			this->RemoveOrderTab->PerformLayout();
			this->EditMenuTab->ResumeLayout(false);
			this->EditMenuContainer->Panel1->ResumeLayout(false);
			this->EditMenuContainer->Panel1->PerformLayout();
			this->EditMenuContainer->Panel2->ResumeLayout(false);
			this->EditMenuContainer->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditMenuContainer))->EndInit();
			this->EditMenuContainer->ResumeLayout(false);
			this->AddMenuGroupBox->ResumeLayout(false);
			this->AddMenuPrice->ResumeLayout(false);
			this->AddMenuPrice->PerformLayout();
			this->AddMenuMenuName->ResumeLayout(false);
			this->AddMenuMenuName->PerformLayout();
			this->RemoveMenuGroupBox->ResumeLayout(false);
			this->BillingMenuTab->ResumeLayout(false);
			this->BillingMenuTab->PerformLayout();
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
		public: void removeOrder(order^ orderss) {
			for (int i = 0; i < this->orders->Length; i++) {
				if (this->orders[i]->getName() == orderss->getName()) {
					this->orders[i]->remove(orderss->getQuantity());
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
		public: void removeAllOrders() {
			Array::Clear(this->orders, 0, this->orders->Length);
		}
		public: int getTotal() {
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
	private: String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=RealDatabase.accdb";
	private: OleDbConnection^ conn = gcnew OleDbConnection(connString);
	private: void reloadElement() {
		SelectTableComboBox->Text = "";
		ResNameTextBox->Text = "";
		SelTableInfoTextBox->Text = "";
		ReserveTableButton->Enabled = false;
		CancelTableComboBox->Text = "";
		CancelTableInfoTextBox->Text = "";
		CancelTableButton->Enabled = false;
		AddOrdersSelectTableComboBox->Text = "";
		RemoveOrdersSelectTableComboBox->Text = "";
		AddOrdersTableInfoTextBox->Text = "";
		AddOrdersMenusInfoTextBox->Text = "";
		AddOrdersInTableTextBox->Text = "";
		RemoveOrdersTableInfoTextBox->Text = "";
		RemoveOrdersInTableTextBox->Text = "";
		ReceiptTextBox->Text = "";
		//Button
		if (RemoveOrdersSelectTableComboBox->Text == "" || RemoveOrdersSelectMenusComboBox->Text == "" || RemoveOrdersMenusQuantityTextBox->Text == "") {
			RemoveOrdersButton->Enabled = false;
		}
		else {
			RemoveOrdersButton->Enabled = true;
		}
		//Status Update
		TableStatusTextBox->Text = "";
		CancelTableStatusTextBox->Text = "";
		SelectTableComboBox->Items->Clear();
		CancelTableComboBox->Items->Clear();
		RemoveTableComboBox->Items->Clear();
		AddOrdersSelectTableComboBox->Items->Clear();
		AddOrdersSelectMenusComboBox->Items->Clear();
		RemoveOrdersSelectTableComboBox->Items->Clear();
		RemoveMenuComboBox->Items->Clear();
		CheckOutComboBox->Items->Clear();
		for (int i = 0; i < tables->Length; i++) {
			TableStatusTextBox->Text += tables[i]->getName() + " is " + (tables[i]->getIsAvailable() ? "available" : "not available") + "\r\n";
			CancelTableStatusTextBox->Text += tables[i]->getName() + " is " + (tables[i]->getIsAvailable() ? "available" : "not available") + "\r\n";
			if (tables[i]->getIsAvailable()) {
				SelectTableComboBox->Items->Add(tables[i]->getName());
			}
			else {
				CancelTableComboBox->Items->Add(tables[i]->getName());
				AddOrdersSelectTableComboBox->Items->Add(tables[i]->getName());
				RemoveOrdersSelectTableComboBox->Items->Add(tables[i]->getName());
				CheckOutComboBox->Items->Add(tables[i]->getName());
			}
			RemoveTableComboBox->Items->Add(tables[i]->getName());
		}
		for (int i = 0; i < menus->Length; i++) {
			AddOrdersSelectMenusComboBox->Items->Add(menus[i]->getName());
			RemoveMenuComboBox->Items->Add(menus[i]->getName());
		}
	}
	private: System::Void MainPage_Click(System::Object^ sender, System::EventArgs^ e) {
		clickTemp++;
		if (clickTemp == 5) {
			clickTemp = 0;
			if (MessageBox::Show("Are you sure you want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				conn->Close();
				this->Close();
			}
		}
	}
	private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void OrderMenuTabControl_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
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
		OleDbCommand^ cmd = gcnew OleDbCommand("UPDATE TableData SET Status = @Status, ResName = @ResName WHERE TableName = @TableName", conn);
		cmd->Parameters->Add("@Status", OleDbType::Boolean);
		cmd->Parameters->Add("@ResName", OleDbType::VarChar, 255);
		cmd->Parameters->Add("@TableName", OleDbType::VarChar, 255);
		for (int i = 0; i < tables->Length; i++) {
			cmd->Parameters["@Status"]->Value = tables[i]->getIsAvailable();
			cmd->Parameters["@ResName"]->Value = tables[i]->getResName();
			cmd->Parameters["@TableName"]->Value = tables[i]->getName();
			cmd->ExecuteNonQuery();
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
		OleDbCommand^ cmd = gcnew OleDbCommand("UPDATE TableData SET Status = @Status, ResName = @ResName WHERE TableName = @TableName", conn);
		cmd->Parameters->Add("@Status", OleDbType::Boolean);
		cmd->Parameters->Add("@ResName", OleDbType::VarChar, 255);
		cmd->Parameters->Add("@TableName", OleDbType::VarChar, 255);
		for (int i = 0; i < tables->Length; i++) {
			cmd->Parameters["@Status"]->Value = tables[i]->getIsAvailable();
			cmd->Parameters["@ResName"]->Value = tables[i]->getResName();
			cmd->Parameters["@TableName"]->Value = tables[i]->getName();
			cmd->ExecuteNonQuery();
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
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == AddTableNameTextBox->Text) {
				MessageBox::Show("Table name already exist in database", "Add Table", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		Array::Resize(tables, tables->Length + 1);
		tables[tables->Length - 1] = gcnew table(AddTableNameTextBox->Text, Convert::ToInt32(AddTableMaxSeatTextBox->Text), true, "-");
		OleDbCommand^ cmd = gcnew OleDbCommand("INSERT INTO TableData (TableName, MaxSeat, Status, ResName) VALUES (@TableName, @MaxSeat, @Status, @ResName)", conn);
		cmd->Parameters->AddWithValue("@TableName", AddTableNameTextBox->Text);
		cmd->Parameters->AddWithValue("@MaxSeat", Convert::ToInt32(AddTableMaxSeatTextBox->Text));
		cmd->Parameters->AddWithValue("@Status", true);
		cmd->Parameters->AddWithValue("@ResName", "-");
		cmd->ExecuteNonQuery();
		AddTableNameTextBox->Text = "";
		AddTableMaxSeatTextBox->Text = "";
		AddTableButton->Enabled = false;
		MessageBox::Show("Table " + tables[tables->Length - 1]->getName() + " has been added to the database.", "Add Table", MessageBoxButtons::OK, MessageBoxIcon::Information);
		reloadElement();
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
		OleDbCommand^ cmd = gcnew OleDbCommand("DELETE FROM TableData WHERE TableName = @TableName", conn);
		cmd->Parameters->AddWithValue("@TableName", RemoveTableComboBox->Text);
		cmd->ExecuteNonQuery();
		reloadElement();
		RemoveTableComboBox->Text = "";
		RemoveTableButton->Enabled = false;
		MessageBox::Show("Table " + RemoveTableComboBox->Text + " has been removed from the database.", "Remove Table", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
		int tableIndex = 0;
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
				tableIndex = i;
			}
		}
		array<order^>^ tempOrders = tables[tableIndex]->getOrders();
		AddOrdersInTableTextBox->Text = "";
		AddOrdersInTableTextBox->Text = "Table: " + tables[tableIndex]->getName() + "\r\n";
		for (int i = 0; i < tempOrders->Length; i++) {
			AddOrdersInTableTextBox->Text += (i+1) + ". " + tempOrders[i]->getName() + " x" + tempOrders[i]->getQuantity() + "\r\n";
		}
	}
	private: System::Void AddOrdersSelectMenusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddOrdersSelectTableComboBox->Text == "" || AddOrdersSelectMenusComboBox->Text == "" || AddOrdersMenusQuantityTextBox->Text == "") {
			AddOrdersButton->Enabled = false;
		}
		else {
			AddOrdersButton->Enabled = true;
		}
		if (AddOrdersSelectMenusComboBox->Text == "") {
			AddOrdersMenusQuantityTextBox->Enabled = false;
		}
		else {
			AddOrdersMenusQuantityTextBox->Enabled = true;
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
		int Quantity = Convert::ToInt32(AddOrdersMenusQuantityTextBox->Text);
		order^ tempOrder = gcnew order(MenuName, Quantity);
		int tableIndex = 0;
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == AddOrdersSelectTableComboBox->Text) {
				tables[i]->addOrder(tempOrder);
				tableIndex = i;
			}
		}
		array<order^>^ tempOrders = tables[tableIndex]->getOrders();
		AddOrdersInTableTextBox->Text = "";
		AddOrdersInTableTextBox->Text = "Table: " + tables[tableIndex]->getName() + "\r\n";
		for (int i = 0; i < tempOrders->Length; i++) {
			AddOrdersInTableTextBox->Text += (i+1) + ". " + tempOrders[i]->getName() + " x" + tempOrders[i]->getQuantity() + "\r\n";
		}
		AddOrdersButton->Enabled = false;
		AddOrdersSelectMenusComboBox->Text = "";
		AddOrdersMenusQuantityTextBox->Text = "1";
	}
	private: System::Void RemoveOrdersSelectTableComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int tableIndex = 0;
		if (RemoveOrdersSelectTableComboBox->Text == "") {
			RemoveOrdersSelectMenusComboBox->Enabled = false;
			RemoveOrdersMenusQuantityTextBox->Enabled = false;
		}
		else {
			RemoveOrdersSelectMenusComboBox->Enabled = true;
			RemoveOrdersMenusQuantityTextBox->Enabled = true;
		}
		if (RemoveOrdersSelectTableComboBox->Text == "" || RemoveOrdersSelectMenusComboBox->Text == "") {
			RemoveOrdersButton->Enabled = false;
		}
		else {
			RemoveOrdersButton->Enabled = true;
		}
		RemoveOrdersTableInfoTextBox->Text = "";
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == RemoveOrdersSelectTableComboBox->Text) {
				RemoveOrdersTableInfoTextBox->Text = "Table Name: " + tables[i]->getName() + "\r\n";
				RemoveOrdersTableInfoTextBox->Text += "Max Seat: " + tables[i]->getMaxSeat() + "\r\n";
				RemoveOrdersTableInfoTextBox->Text += "Status: " + (tables[i]->getIsAvailable() ? "Available" : "Not Available") + "\r\n";
				RemoveOrdersTableInfoTextBox->Text += "Reserved Name: " + tables[i]->getResName() + "\r\n";
				tableIndex = i;
			}
		}
		array<order^>^ tempOrders = tables[tableIndex]->getOrders();
		RemoveOrdersSelectMenusComboBox->Items->Clear();
		RemoveOrdersInTableTextBox->Text = "";
		RemoveOrdersInTableTextBox->Text = "Table: " + tables[tableIndex]->getName() + "\r\n";
		for (int i = 0; i < tempOrders->Length; i++) {
			RemoveOrdersSelectMenusComboBox->Items->Add(tempOrders[i]->getName());
			RemoveOrdersInTableTextBox->Text += (i+1) + ". " + tempOrders[i]->getName() + " x" + tempOrders[i]->getQuantity() + "\r\n";
		}
	}
	private: System::Void RemoveOrdersSelectMenusComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RemoveOrdersSelectTableComboBox->Text == "" || RemoveOrdersSelectMenusComboBox->Text == "" || RemoveOrdersMenusQuantityTextBox->Text == "") {
			RemoveOrdersButton->Enabled = false;
		}
		else {
			RemoveOrdersButton->Enabled = true;
		}
	}
	private: System::Void RemoveOrdersButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int tableIndex = 0;
		order^ tempOrder = gcnew order(RemoveOrdersSelectMenusComboBox->Text, Convert::ToInt32(RemoveOrdersMenusQuantityTextBox->Text));
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == RemoveOrdersSelectTableComboBox->Text) {
				tables[i]->removeOrder(tempOrder);
				tableIndex = i;
			}
		}
		array<order^>^ tempOrders = tables[tableIndex]->getOrders();
		RemoveOrdersInTableTextBox->Text = "";
		RemoveOrdersInTableTextBox->Text = "Table: " + tables[tableIndex]->getName() + "\r\n";
		RemoveOrdersSelectMenusComboBox->Items->Clear();
		for (int i = 0; i < tempOrders->Length; i++) {
			RemoveOrdersSelectMenusComboBox->Items->Add(tempOrders[i]->getName());
			RemoveOrdersInTableTextBox->Text += (i+1) + ". " + tempOrders[i]->getName() + " x" + tempOrders[i]->getQuantity() + "\r\n";
		}
		RemoveOrdersButton->Enabled = false;
		RemoveOrdersSelectMenusComboBox->Text = "";
		RemoveOrdersMenusQuantityTextBox->Text = "1";
	}
	private: System::Void RemoveOrdersMenusQuantityTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RemoveOrdersSelectTableComboBox->Text == "" || RemoveOrdersSelectMenusComboBox->Text == "" || RemoveOrdersMenusQuantityTextBox->Text == "") {
			RemoveOrdersButton->Enabled = false;
		}
		else {
			RemoveOrdersButton->Enabled = true;
		}
		if (RemoveOrdersMenusQuantityTextBox->Text == "") return;
		if (Convert::ToInt32(RemoveOrdersMenusQuantityTextBox->Text) > 99) {
			RemoveOrdersMenusQuantityTextBox->Text = "99";
		}
		if (Convert::ToInt32(RemoveOrdersMenusQuantityTextBox->Text) < 1) {
			RemoveOrdersMenusQuantityTextBox->Text = "1";
		}
	}
	private: System::Void AddOrdersMenusQuantityTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddOrdersSelectTableComboBox->Text == "" || AddOrdersSelectMenusComboBox->Text == "" || AddOrdersMenusQuantityTextBox->Text == "") {
			AddOrdersButton->Enabled = false;
		}
		else {
			AddOrdersButton->Enabled = true;
		}
		if (AddOrdersMenusQuantityTextBox->Text == "") return;
		if (Convert::ToInt32(AddOrdersMenusQuantityTextBox->Text) > 99) {
			AddOrdersMenusQuantityTextBox->Text = "99";
		}
		if (Convert::ToInt32(AddOrdersMenusQuantityTextBox->Text) < 1) {
			AddOrdersMenusQuantityTextBox->Text = "1";
		}
	}
	private: System::Void AddMenuNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddMenuNameTextBox->Text == "" || AddMenuPriceTextBox->Text == "") {
			AddMenuButton->Enabled = false;
		}
		else {
			AddMenuButton->Enabled = true;
		}
	}
	private: System::Void AddMenuPriceTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (AddMenuNameTextBox->Text == "" || AddMenuPriceTextBox->Text == "") {
			AddMenuButton->Enabled = false;
		}
		else {
			AddMenuButton->Enabled = true;
		}
	}
	private: System::Void AddMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		menu^ tempMenu = gcnew menu(AddMenuNameTextBox->Text, Convert::ToInt32(AddMenuPriceTextBox->Text));
		if (Convert::ToInt32(AddMenuPriceTextBox->Text) < 0) {
			MessageBox::Show("Price cannot be negative.", "Add Menu", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		for (int i = 0; i < menus->Length; i++) {
			if (menus[i]->getName() == tempMenu->getName()) {
				MessageBox::Show("Menu " + tempMenu->getName() + " already exists in the database.", "Add Menu", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		Array::Resize(menus, menus->Length + 1);
		menus[menus->Length - 1] = tempMenu;
		OleDbCommand^ cmd = gcnew OleDbCommand("INSERT INTO MenuData (MenuName, Price) VALUES (@Name, @Price)", conn);
		cmd->Parameters->AddWithValue("@Name", AddMenuNameTextBox->Text);
		cmd->Parameters->AddWithValue("@Price", Convert::ToInt32(AddMenuPriceTextBox->Text));
		cmd->ExecuteNonQuery();
		AddMenuNameTextBox->Text = "";
		AddMenuPriceTextBox->Text = "";
		AddMenuButton->Enabled = false;
		MessageBox::Show("Menu " + tempMenu->getName() + " has been added to the database.", "Add Menu", MessageBoxButtons::OK, MessageBoxIcon::Information);
		reloadElement();
	}
	private: System::Void RemoveMenuComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (RemoveMenuComboBox->Text == "") {
			RemoveMenuButton->Enabled = false;
		}
		else {
			RemoveMenuButton->Enabled = true;
		}
	}
	private: System::Void RemoveMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < menus->Length; i++) {
			if (menus[i]->getName() == RemoveMenuComboBox->Text) {
				for (int j = i; j < menus->Length - 1; j++) {
					menus[j] = menus[j + 1];
				}
			}
		}
		Array::Resize(menus, menus->Length - 1);
		OleDbCommand^ cmd = gcnew OleDbCommand("DELETE FROM MenuData WHERE MenuName = @Name", conn);
		cmd->Parameters->AddWithValue("@Name", RemoveMenuComboBox->Text);
		cmd->ExecuteNonQuery();
		RemoveMenuComboBox->Text = "";
		RemoveMenuButton->Enabled = false;
		MessageBox::Show("Menu " + RemoveMenuComboBox->Text + " has been removed from the database.", "Remove Menu", MessageBoxButtons::OK, MessageBoxIcon::Information);
		reloadElement();
	}
	private: System::Void CheckOutComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (CheckOutComboBox->Text == "") {
			CheckOutButton->Enabled = false;
		}
		else {
			CheckOutButton->Enabled = true;
		}
	}
	private: System::Void CheckOutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int tableIndex = 0;
		array<order^>^ tempOrders = nullptr;
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getName() == CheckOutComboBox->Text) {
				tableIndex = i;
			}
		}
		tempOrders = tables[tableIndex]->getOrders();
		ReceiptTextBox->Text = "";
		ReceiptTextBox->Text = "Table: " + tables[tableIndex]->getName() + "\r\n";
		ReceiptTextBox->Text += "Reserver Name: " + tables[tableIndex]->getResName() + "\r\n";
		ReceiptTextBox->Text += "Orders: \r\n";
		for (int i = 0; i < tempOrders->Length; i++) {
			ReceiptTextBox->Text += (i + 1) + ". " + tempOrders[i]->getName() + " x" + tempOrders[i]->getQuantity() + " ";
			for (int j = 0; j < menus->Length; j++) {
				if (menus[j]->getName() == tempOrders[i]->getName()) {
					ReceiptTextBox->Text += (menus[j]->getPrice() * tempOrders[i]->getQuantity()) + "$" + "\r\n";
				}
			}
		}
		ReceiptTextBox->Text += "Total: " + tables[tableIndex]->getTotal() + "$" + "\r\n";
		ReceiptTextBox->Text += "Thank you for coming!";
		tables[tableIndex]->setResName("-");
		tables[tableIndex]->removeAllOrders();
		tables[tableIndex]->setIsAvailable(true);
		OleDbCommand^ cmd = gcnew OleDbCommand("UPDATE TableData SET Status = @IsAvailable, ResName = @ReserverName WHERE TableName = @Name", conn);
		cmd->Parameters->AddWithValue("@IsAvailable", true);
		cmd->Parameters->AddWithValue("@ReserverName", "-");
		cmd->Parameters->AddWithValue("@Name", tables[tableIndex]->getName());
		cmd->ExecuteNonQuery();
		CheckOutComboBox->Text = "";
		CheckOutComboBox->Items->Clear();
		for (int i = 0; i < tables->Length; i++) {
			if (tables[i]->getIsAvailable() == false) {
				CheckOutComboBox->Items->Add(tables[i]->getName());
			}
		}
		CheckOutButton->Enabled = false;
	}
};
}
