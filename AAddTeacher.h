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
	/// Summary for AAddTeacher
	/// </summary>
	public ref class AAddTeacher : public System::Windows::Forms::Form
	{
	public:
		AAddTeacher(void)
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
		~AAddTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label12;
	protected:
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;


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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(152, 16);
			this->label12->TabIndex = 46;
			this->label12->Text = L"CMS Account Details";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 45;
			this->label11->Text = L"Username";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(218, 20);
			this->textBox1->TabIndex = 44;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 20);
			this->textBox2->TabIndex = 47;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Personal Details";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 109);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(218, 20);
			this->textBox3->TabIndex = 50;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(147, 135);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(218, 20);
			this->textBox4->TabIndex = 51;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(147, 161);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(218, 20);
			this->textBox5->TabIndex = 52;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(147, 187);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(218, 20);
			this->textBox6->TabIndex = 53;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(147, 213);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(218, 20);
			this->textBox7->TabIndex = 54;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(147, 239);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(218, 20);
			this->textBox8->TabIndex = 55;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 57;
			this->label4->Text = L"Father\'s Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 58;
			this->label5->Text = L"CNIC";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 59;
			this->label6->Text = L"Specialization";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 216);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 60;
			this->label7->Text = L"E-Mail";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 242);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Contact No.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(11, 305);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 16);
			this->label9->TabIndex = 62;
			this->label9->Text = L"Campus Details";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(146, 374);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(218, 20);
			this->textBox11->TabIndex = 65;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(146, 400);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(218, 20);
			this->textBox12->TabIndex = 66;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(146, 426);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(218, 20);
			this->textBox13->TabIndex = 67;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 325);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 68;
			this->label10->Text = L"School";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(11, 351);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 69;
			this->label13->Text = L"Department";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 377);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 13);
			this->label14->TabIndex = 70;
			this->label14->Text = L"Wing";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(11, 403);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 13);
			this->label15->TabIndex = 71;
			this->label15->Text = L"Room";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(11, 429);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 13);
			this->label16->TabIndex = 72;
			this->label16->Text = L"Designation";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 484);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AAddTeacher::button1_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(146, 452);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(218, 20);
			this->textBox14->TabIndex = 74;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(11, 455);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 13);
			this->label17->TabIndex = 75;
			this->label17->Text = L"CMS_ID";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(147, 265);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(218, 20);
			this->textBox15->TabIndex = 76;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(11, 268);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 13);
			this->label18->TabIndex = 77;
			this->label18->Text = L"Address";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(146, 322);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(219, 21);
			this->comboBox1->TabIndex = 78;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(146, 348);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(219, 21);
			this->comboBox2->TabIndex = 79;
			// 
			// AAddTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 519);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
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
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox1);
			this->Name = L"AAddTeacher";
			this->Text = L"Add Teacher";
			this->Load += gcnew System::EventHandler(this, &AAddTeacher::AAddTeacher_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("Insert into cmsproject.teacherinfo (UserName,Password,Name,FathersName,CNIC,CMS_ID,School,Department,Wing,Room,Designation,Specialization,Email,Contact,Address) values ('"+this->textBox1->Text+"','" + this->textBox2->Text + "','" + this->textBox3->Text + "','" + this->textBox4->Text + "','" + this->textBox5->Text + "','" + this->textBox14->Text + "','" + this->comboBox1->Text + "','" + this->comboBox2->Text + "','" + this->textBox11->Text + "','" + this->textBox12->Text + "','" + this->textBox13->Text + "','" + this->textBox6->Text + "','" + this->textBox7->Text + "','" + this->textBox8->Text + "','" + this->textBox15->Text + "');", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProject->ExecuteReader();
		while (ReadCMSProject->Read())
		{

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	MySqlConnection^ ConnectCMSProjectH = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectH;
	MySqlCommand^ CommandCMSProjectH = gcnew MySqlCommand("Insert into cmsproject.loginteacher (UserName,Password) values('" + this->textBox1->Text + "','" + this->textBox2->Text + "');", ConnectCMSProjectH);
	try
	{
		ConnectCMSProjectH->Open();
		ReadCMSProjectH = CommandCMSProjectH->ExecuteReader();
		MessageBox::Show("Added Successfully");
		while (ReadCMSProjectH->Read())
		{

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void AAddTeacher_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
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
};
}
