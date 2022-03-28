#pragma once

namespace CMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AViewStudents
	/// </summary>
	public ref class AViewStudents : public System::Windows::Forms::Form
	{
	public:
		AViewStudents(void)
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
		~AViewStudents()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


























	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(241, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 479);
			this->listBox1->TabIndex = 53;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AViewStudents::listBox1_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(411, 245);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 13);
			this->label19->TabIndex = 88;
			this->label19->Text = L"Address";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(411, 218);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 13);
			this->label18->TabIndex = 87;
			this->label18->Text = L"E-Mail";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(409, 192);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 13);
			this->label17->TabIndex = 86;
			this->label17->Text = L"Contact";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(410, 450);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 13);
			this->label16->TabIndex = 81;
			this->label16->Text = L"Semester";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(410, 479);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 79;
			this->label15->Text = L"Section";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(410, 265);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 16);
			this->label14->TabIndex = 78;
			this->label14->Text = L"Academic Details";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(410, 87);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 16);
			this->label13->TabIndex = 77;
			this->label13->Text = L"Personal Details";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(410, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(152, 16);
			this->label12->TabIndex = 76;
			this->label12->Text = L"CMS Account Details";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(409, 37);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 75;
			this->label11->Text = L"Username";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(410, 373);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 62;
			this->label9->Text = L"School";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(410, 347);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Merit";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(410, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 60;
			this->label7->Text = L"CNIC";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(410, 425);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 59;
			this->label6->Text = L"Batch";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(410, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 13);
			this->label5->TabIndex = 58;
			this->label5->Text = L"Father\'s Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(410, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 57;
			this->label4->Text = L"Reg No.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(410, 399);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Department";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(410, 321);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 55;
			this->label2->Text = L"CMS_ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(410, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Name";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(562, 37);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(11, 13);
			this->label20->TabIndex = 89;
			this->label20->Text = L" ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(562, 113);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(11, 13);
			this->label21->TabIndex = 90;
			this->label21->Text = L" ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(562, 139);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(11, 13);
			this->label22->TabIndex = 92;
			this->label22->Text = L" ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(562, 166);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(11, 13);
			this->label23->TabIndex = 93;
			this->label23->Text = L" ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::White;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(562, 192);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(11, 13);
			this->label24->TabIndex = 94;
			this->label24->Text = L" ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::White;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(562, 218);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(11, 13);
			this->label25->TabIndex = 95;
			this->label25->Text = L" ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::White;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(562, 245);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(11, 13);
			this->label26->TabIndex = 96;
			this->label26->Text = L" ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::White;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(562, 292);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(11, 13);
			this->label27->TabIndex = 97;
			this->label27->Text = L" ";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::White;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(562, 321);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(11, 13);
			this->label28->TabIndex = 98;
			this->label28->Text = L" ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::White;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(562, 347);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(11, 13);
			this->label29->TabIndex = 99;
			this->label29->Text = L" ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::White;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(562, 373);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(11, 13);
			this->label30->TabIndex = 100;
			this->label30->Text = L" ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::White;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(562, 399);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(11, 13);
			this->label31->TabIndex = 101;
			this->label31->Text = L" ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::White;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(562, 425);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(11, 13);
			this->label32->TabIndex = 102;
			this->label32->Text = L" ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::White;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(562, 450);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(11, 13);
			this->label33->TabIndex = 103;
			this->label33->Text = L" ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(562, 479);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(11, 13);
			this->label10->TabIndex = 104;
			this->label10->Text = L" ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(12, 12);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(96, 16);
			this->label34->TabIndex = 105;
			this->label34->Text = L"Filter Search";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(12, 37);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(40, 13);
			this->label35->TabIndex = 106;
			this->label35->Text = L"School";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(11, 64);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(62, 13);
			this->label36->TabIndex = 107;
			this->label36->Text = L"Department";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(11, 91);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(35, 13);
			this->label37->TabIndex = 108;
			this->label37->Text = L"Batch";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(156, 21);
			this->comboBox1->TabIndex = 109;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(79, 61);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(156, 21);
			this->comboBox2->TabIndex = 110;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(79, 88);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(156, 21);
			this->comboBox3->TabIndex = 111;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 112;
			this->button1->Text = L"Filter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AViewStudents::button1_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(12, 190);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(94, 16);
			this->label38->TabIndex = 113;
			this->label38->Text = L"Find Student";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(12, 218);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 13);
			this->label39->TabIndex = 114;
			this->label39->Text = L"Name";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(12, 245);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(47, 13);
			this->label40->TabIndex = 115;
			this->label40->Text = L"CMS_ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 116;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(79, 241);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 117;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 118;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AViewStudents::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 466);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 119;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AViewStudents::button3_Click);
			// 
			// AViewStudents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 501);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"AViewStudents";
			this->Text = L"AViewStudents";
			this->Load += gcnew System::EventHandler(this, &AViewStudents::AViewStudents_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ LB1 = listBox1->Text;
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.studentinfo where Name='" + LB1 + "';", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		while (ReadCMSProject->Read())
		{
			String^ NAME = ReadCMSProject->GetString("Name");
			label21->Text = NAME;
			String^ C = ReadCMSProject->GetUInt64("CNIC").ToString();
			label22->Text = C;
			String^ F = ReadCMSProject->GetString("FathersName");
			label23->Text = F;
			String^ REG = ReadCMSProject->GetInt32("Reg_No").ToString();
			label27->Text = REG;
			String^ CMS = ReadCMSProject->GetInt32("CMS_ID").ToString();
			label28->Text = CMS;
			String^ M = ReadCMSProject->GetUInt32("Merit").ToString();
			label29->Text = M;
			String^ Sal = ReadCMSProject->GetString("School");
			label30->Text = Sal;
			String^ Dep = ReadCMSProject->GetString("Department");
			label31->Text = Dep;
			String^ B = ReadCMSProject->GetString("Batch");
			label32->Text = B;
			String^ sec = ReadCMSProject->GetString("Section");
			label10->Text = sec;
			String^ UN = ReadCMSProject->GetString("UserName");
			label20->Text = UN;
			String^ Seme = ReadCMSProject->GetInt32("Semester").ToString();
			label33->Text = Seme;
			String^ Co = ReadCMSProject->GetString("Contact");
			label24->Text = Co;
			String^ E = ReadCMSProject->GetString("Email");
			label25->Text = E;
			String^ A = ReadCMSProject->GetString("Address");
			label26->Text = A;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void AViewStudents_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.studentinfo;", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		while (ReadCMSProject->Read())
		{
			String^ NAME;
			NAME = ReadCMSProject->GetString("Name");
			listBox1->Items->Add(NAME);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	MySqlConnection^ ConnectCMSProjectU = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectU;
	MySqlCommand^ CommandCMSProjectU = gcnew MySqlCommand("select * from cmsproject.schooldept;", ConnectCMSProjectU);
	try
	{
		ConnectCMSProjectU->Open();
		ReadCMSProjectU = CommandCMSProjectU->ExecuteReader();
		while (ReadCMSProjectU->Read())
		{
			String^ School;
			School = ReadCMSProjectU->GetString("School");
			if (!comboBox1->Items->Contains(School))
			{
				comboBox1->Items->Add(School);
			}
			String^ DE;
			DE = ReadCMSProjectU->GetString("Department");
			comboBox2->Items->Add(DE);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.studentinfo where School='"+this->comboBox1->Text+"'and Department='" + this->comboBox2->Text + "'and Batch='" + this->comboBox3->Text + "';", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		while (ReadCMSProject->Read())
		{
			String^ NAME;
			NAME = ReadCMSProject->GetString("Name");
			listBox1->Items->Add(NAME);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.studentinfo where Name ='" + this->textBox1->Text + "' or CMS_ID='" + this->textBox2->Text + "';", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		while (ReadCMSProject->Read())
		{
			String^ NAME;
			NAME = ReadCMSProject->GetString("Name");
			listBox1->Items->Add(NAME);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.studentinfo;", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		while (ReadCMSProject->Read())
		{
			String^ NAME;
			NAME = ReadCMSProject->GetString("Name");
			listBox1->Items->Add(NAME);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
};
}
