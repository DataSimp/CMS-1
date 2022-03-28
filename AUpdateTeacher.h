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
	/// Summary for AUpdateTeacher
	/// </summary>
	public ref class AUpdateTeacher : public System::Windows::Forms::Form
	{
	public:
		AUpdateTeacher(void)
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
		~AUpdateTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label17;
	protected:
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox11;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;

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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(416, 370);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 13);
			this->label17->TabIndex = 131;
			this->label17->Text = L"CMS_ID";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(551, 367);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(218, 20);
			this->textBox14->TabIndex = 130;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(416, 344);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 13);
			this->label16->TabIndex = 129;
			this->label16->Text = L"Designation";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(416, 318);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 13);
			this->label15->TabIndex = 128;
			this->label15->Text = L"Room";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(551, 341);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(218, 20);
			this->textBox13->TabIndex = 127;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(551, 315);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(218, 20);
			this->textBox12->TabIndex = 126;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(415, 292);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 13);
			this->label14->TabIndex = 125;
			this->label14->Text = L"Wing";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(416, 266);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 124;
			this->label13->Text = L"Department";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(416, 240);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 123;
			this->label10->Text = L"School";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(551, 289);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(218, 20);
			this->textBox11->TabIndex = 122;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(416, 220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 16);
			this->label9->TabIndex = 119;
			this->label9->Text = L"Campus Details";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(415, 165);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 118;
			this->label8->Text = L"Contact No.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(416, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 117;
			this->label7->Text = L"E-Mail";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(415, 113);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 116;
			this->label6->Text = L"Specialization";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(416, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 115;
			this->label5->Text = L"CNIC";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(416, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 114;
			this->label4->Text = L"Father\'s Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(416, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 113;
			this->label3->Text = L"Name";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(551, 162);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(218, 20);
			this->textBox8->TabIndex = 112;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(551, 136);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(218, 20);
			this->textBox7->TabIndex = 111;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(551, 110);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(218, 20);
			this->textBox6->TabIndex = 110;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(551, 84);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(218, 20);
			this->textBox5->TabIndex = 109;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(551, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(218, 20);
			this->textBox4->TabIndex = 108;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(551, 32);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(218, 20);
			this->textBox3->TabIndex = 107;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(416, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 106;
			this->label2->Text = L"Personal Details";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(241, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 407);
			this->listBox1->TabIndex = 102;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AUpdateTeacher::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(698, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 132;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AUpdateTeacher::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(551, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 20);
			this->textBox2->TabIndex = 133;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(416, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 134;
			this->label1->Text = L"Address";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 409);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 147;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AUpdateTeacher::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 146;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AUpdateTeacher::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 238);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 145;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(79, 212);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(156, 20);
			this->textBox15->TabIndex = 144;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(12, 242);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(47, 13);
			this->label40->TabIndex = 143;
			this->label40->Text = L"CMS_ID";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(12, 215);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 13);
			this->label39->TabIndex = 142;
			this->label39->Text = L"Name";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(12, 187);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(94, 16);
			this->label38->TabIndex = 141;
			this->label38->Text = L"Find Student";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(160, 124);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 140;
			this->button4->Text = L"Filter";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AUpdateTeacher::button4_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(79, 58);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(156, 21);
			this->comboBox2->TabIndex = 139;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(79, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(156, 21);
			this->comboBox1->TabIndex = 138;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(11, 61);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(62, 13);
			this->label36->TabIndex = 137;
			this->label36->Text = L"Department";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(12, 34);
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
			this->label34->Location = System::Drawing::Point(12, 9);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(96, 16);
			this->label34->TabIndex = 135;
			this->label34->Text = L"Filter Search";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(551, 237);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(218, 21);
			this->comboBox3->TabIndex = 148;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(551, 263);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(218, 21);
			this->comboBox4->TabIndex = 149;
			// 
			// AUpdateTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 444);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Name = L"AUpdateTeacher";
			this->Text = L"Update Teacher";
			this->Load += gcnew System::EventHandler(this, &AUpdateTeacher::AUpdateTeacher_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AUpdateTeacher_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
		MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
		MySqlDataReader^ ReadCMSProject;
		MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.teacherinfo;", ConnectCMSProject);
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
					comboBox3->Items->Add(School);
				}
				String^ DE;
				DE = ReadCMSProjectU->GetString("Department");
				comboBox2->Items->Add(DE);
				comboBox4->Items->Add(DE);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ LB1 = listBox1->Text;
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.teacherinfo where Name='" + LB1 + "';", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		while (ReadCMSProject->Read())
		{
			String^ N = ReadCMSProject->GetString("Name");
			textBox3->Text = N;
			String^ FN = ReadCMSProject->GetString("FathersName");
			textBox4->Text = FN;
			String^ CNIC = ReadCMSProject->GetInt64("CNIC").ToString();
			textBox5->Text = CNIC;
			String^ S = ReadCMSProject->GetString("Specialization");
			textBox6->Text = S;
			String^ E = ReadCMSProject->GetString("Email");
			textBox7->Text = E;
			String^ Co = ReadCMSProject->GetString("Contact");
			textBox8->Text = Co;
			String^ SC = ReadCMSProject->GetString("School");
			comboBox3->Text = SC;
			String^ D = ReadCMSProject->GetString("Department");
			comboBox4->Text = D;
			String^ W = ReadCMSProject->GetString("Wing");
			textBox11->Text = W;
			String^ R = ReadCMSProject->GetString("Room");
			textBox12->Text = R;
			String^ Des = ReadCMSProject->GetString("Designation");
			textBox13->Text = Des;
			String^ CMS_ID = ReadCMSProject->GetInt32("CMS_ID").ToString();
			textBox14->Text = CMS_ID;
			String^ A = ReadCMSProject->GetString("Address");
			textBox2->Text = A;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ LB1 = listBox1->Text;
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("Update cmsproject.teacherinfo set Name='" + this->textBox3->Text + "', FathersName='" + this->textBox4->Text + "',CNIC='" + this->textBox5->Text + "',CMS_ID='" + this->textBox14->Text + "',School='" + this->comboBox3->Text + "',Department='" + this->comboBox4->Text + "',Wing='" + this->textBox11->Text + "',Room='" + this->textBox12->Text + "', Designation='" + this->textBox13->Text + "',Specialization='" + this->textBox6->Text + "', Email='" + this->textBox7->Text + "',Contact='" + this->textBox8->Text + "',Address='" + this->textBox2->Text + "'  where Name='" + LB1 + "';", ConnectCMSProjectT);
	try
	{
		ConnectCMSProjectT->Open();
		ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
		MessageBox::Show("Updated");
		while (ReadCMSProject->Read())
		{

		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.teacherinfo where School='" + this->comboBox1->Text + "'and Department='" + this->comboBox2->Text + "';", ConnectCMSProject);
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
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.teacherinfo where Name ='" + this->textBox15->Text + "' or CMS_ID='" + this->textBox1->Text + "';", ConnectCMSProject);
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
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.teacherinfo;", ConnectCMSProject);
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
