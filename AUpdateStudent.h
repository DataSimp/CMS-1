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
	/// Summary for AUpdateStudent
	/// </summary>
	public ref class AUpdateStudent : public System::Windows::Forms::Form
	{
	public:
		AUpdateStudent(void)
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
		~AUpdateStudent()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ListBox^ listBox1;

























	private: System::Windows::Forms::Button^ button1;














	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;





	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::ComboBox^ comboBox8;
private: System::Windows::Forms::Button^ button5;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			this->listBox1->Size = System::Drawing::Size(120, 422);
			this->listBox1->TabIndex = 81;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AUpdateStudent::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(659, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 84;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AUpdateStudent::button1_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(407, 170);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 13);
			this->label19->TabIndex = 120;
			this->label19->Text = L"Address";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(407, 143);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 13);
			this->label18->TabIndex = 119;
			this->label18->Text = L"E-Mail";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(405, 117);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 13);
			this->label17->TabIndex = 118;
			this->label17->Text = L"Contact";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(407, 376);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 13);
			this->label16->TabIndex = 117;
			this->label16->Text = L"Semester";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(407, 402);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 116;
			this->label15->Text = L"Section";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(406, 190);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 16);
			this->label14->TabIndex = 115;
			this->label14->Text = L"Academic Details";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(406, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 16);
			this->label13->TabIndex = 114;
			this->label13->Text = L"Personal Details";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(406, 298);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 113;
			this->label9->Text = L"School";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(406, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 112;
			this->label8->Text = L"Merit";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(406, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 111;
			this->label7->Text = L"CNIC";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(406, 350);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 110;
			this->label6->Text = L"Batch";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(406, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 13);
			this->label5->TabIndex = 109;
			this->label5->Text = L"Father\'s Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(406, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 108;
			this->label4->Text = L"Reg No.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(406, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 107;
			this->label3->Text = L"Department";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(406, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 106;
			this->label2->Text = L"CMS_ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(406, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 105;
			this->label1->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(528, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 20);
			this->textBox1->TabIndex = 121;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(528, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 20);
			this->textBox2->TabIndex = 122;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(528, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 20);
			this->textBox3->TabIndex = 123;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(528, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(211, 20);
			this->textBox4->TabIndex = 124;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(528, 140);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(211, 20);
			this->textBox5->TabIndex = 125;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(528, 167);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(211, 20);
			this->textBox6->TabIndex = 126;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(528, 214);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(211, 20);
			this->textBox7->TabIndex = 127;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(528, 243);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(211, 20);
			this->textBox8->TabIndex = 128;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(528, 269);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(211, 20);
			this->textBox9->TabIndex = 129;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 421);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 149;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AUpdateStudent::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 148;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AUpdateStudent::button2_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(79, 241);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(156, 20);
			this->textBox15->TabIndex = 147;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(79, 215);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(156, 20);
			this->textBox16->TabIndex = 146;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(12, 245);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(47, 13);
			this->label40->TabIndex = 145;
			this->label40->Text = L"CMS_ID";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(12, 218);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 13);
			this->label39->TabIndex = 144;
			this->label39->Text = L"Name";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(12, 190);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(94, 16);
			this->label38->TabIndex = 143;
			this->label38->Text = L"Find Student";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(160, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 142;
			this->button4->Text = L"Filter";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AUpdateStudent::button4_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(79, 88);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(156, 21);
			this->comboBox3->TabIndex = 141;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(79, 61);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(156, 21);
			this->comboBox2->TabIndex = 140;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(156, 21);
			this->comboBox1->TabIndex = 139;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(11, 91);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(35, 13);
			this->label37->TabIndex = 138;
			this->label37->Text = L"Batch";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(11, 64);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(62, 13);
			this->label36->TabIndex = 137;
			this->label36->Text = L"Department";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(12, 37);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(40, 13);
			this->label35->TabIndex = 136;
			this->label35->Text = L"School";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(12, 12);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(96, 16);
			this->label34->TabIndex = 135;
			this->label34->Text = L"Filter Search";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(528, 295);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(211, 21);
			this->comboBox4->TabIndex = 150;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(528, 321);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(211, 21);
			this->comboBox5->TabIndex = 151;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(528, 347);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(211, 21);
			this->comboBox6->TabIndex = 152;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(528, 373);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(211, 21);
			this->comboBox7->TabIndex = 153;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(528, 399);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(211, 21);
			this->comboBox8->TabIndex = 154;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(554, 425);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 23);
			this->button5->TabIndex = 155;
			this->button5->Text = L"Retrieve Sections";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AUpdateStudent::button5_Click);
			// 
			// AUpdateStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 456);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"AUpdateStudent";
			this->Text = L"Update Student";
			this->Load += gcnew System::EventHandler(this, &AUpdateStudent::AUpdateStudent_Load);
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
				textBox1->Text = NAME;
				String^ C = ReadCMSProject->GetUInt64("CNIC").ToString();
				textBox2->Text = C;
				String^ F = ReadCMSProject->GetString("FathersName");
				textBox3->Text = F;
				String^ REG = ReadCMSProject->GetInt32("Reg_No").ToString();
				textBox7->Text = REG;
				String^ CMS = ReadCMSProject->GetInt32("CMS_ID").ToString();
				textBox8->Text = CMS;
				String^ M = ReadCMSProject->GetUInt32("Merit").ToString();
				textBox9->Text = M;
				String^ Sal = ReadCMSProject->GetString("School");
				comboBox4->Text = Sal;
				String^ Dep = ReadCMSProject->GetString("Department");
				comboBox5->Text = Dep;
				String^ B = ReadCMSProject->GetString("Batch");
				comboBox6->Text = B;
				String^ sec = ReadCMSProject->GetString("Section");
				comboBox8->Text = sec;
				String^ Seme = ReadCMSProject->GetInt32("Semester").ToString();
				comboBox7->Text = Seme;
				String^ Co = ReadCMSProject->GetString("Contact");
				textBox4->Text = Co;
				String^ E = ReadCMSProject->GetString("Email");
				textBox5->Text = E;
				String^ A = ReadCMSProject->GetString("Address");
				textBox6->Text = A;
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void AUpdateStudent_Load(System::Object^ sender, System::EventArgs^ e)
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
				comboBox4->Items->Add(School);
				comboBox1->Items->Add(School);
			}
			String^ DE;
			DE = ReadCMSProjectU->GetString("Department");
			comboBox5->Items->Add(DE);
			comboBox2->Items->Add(DE);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ LB1 = listBox1->Text;
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("Update cmsproject.studentinfo set Name='" + this->textBox1->Text + "', FathersName='" + this->textBox3->Text + "',CNIC='" + this->textBox2->Text + "',CMS_ID='" + this->textBox8->Text + "',School='" + this->comboBox4->Text + "',Department='" + this->comboBox5->Text + "',Batch='" + this->comboBox6->Text + "',Semester='" + this->comboBox7->Text + "', Section='" + this->comboBox8->Text + "',Reg_No='" + this->textBox7->Text + "', Contact='" + this->textBox4->Text + "',Email='" + this->textBox5->Text + "',Address='" + this->textBox6->Text + "',Merit='" + this->textBox9->Text + "',SecCode='" + this->comboBox4->Text + "-" + this->comboBox5->Text + "-" + this->comboBox6->Text + "-" + this->comboBox8->Text + "' where Name='" + LB1 + "';", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		MessageBox::Show("Updated");
		while (ReadCMSProject->Read())
		{
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.studentinfo where School='" + this->comboBox1->Text + "'and Department='" + this->comboBox2->Text + "'and Batch='" + this->comboBox3->Text + "';", ConnectCMSProject);
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
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.studentinfo where Name ='" + this->textBox16->Text + "' or CMS_ID='" + this->textBox15->Text + "';", ConnectCMSProject);
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
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProjectA = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectA;
	MySqlCommand^ CommandCMSProjectA = gcnew MySqlCommand("select * from cmsproject.sections where School='" + this->comboBox2->Text + "' and Department ='" + this->comboBox3->Text + "' and Batch='" + this->comboBox7->Text + "';", ConnectCMSProjectA);
	try
	{
		ConnectCMSProjectA->Open();
		ReadCMSProjectA = CommandCMSProjectA->ExecuteReader();
		while (ReadCMSProjectA->Read())
		{
			comboBox1->Items->Clear();
			int S;
			S = ReadCMSProjectA->GetInt32("Sections");
			for (int i = 0; i < S; i++)
			{
				int Sec = i + 1;
				String^ S = System::Convert::ToString(Sec);
				comboBox1->Items->Add(S);
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
