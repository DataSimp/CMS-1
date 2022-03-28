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
	/// Summary for AStudentInfo
	/// </summary>
	public ref class AAddStudent : public System::Windows::Forms::Form
	{
	public:
		AAddStudent(void)
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
		~AAddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 322);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CMS_ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 400);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Department";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 293);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Reg No.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Father\'s Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 426);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Batch";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"CNIC";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Merit";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 374);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"School";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(218, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(149, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(218, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(149, 290);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(218, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(149, 319);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(218, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(148, 345);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(218, 20);
			this->textBox6->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(418, 514);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AAddStudent::button1_Click_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Password";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(148, 35);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(218, 20);
			this->textBox10->TabIndex = 19;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(148, 61);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(218, 20);
			this->textBox11->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Username";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(13, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(152, 16);
			this->label12->TabIndex = 22;
			this->label12->Text = L"CMS Account Details";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(13, 88);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 16);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Personal Details";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(13, 266);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 16);
			this->label14->TabIndex = 24;
			this->label14->Text = L"Academic Details";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(14, 478);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 25;
			this->label15->Text = L"Section";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(14, 452);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 13);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Semester";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(149, 190);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(218, 20);
			this->textBox14->TabIndex = 31;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(149, 216);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(218, 20);
			this->textBox15->TabIndex = 30;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(148, 243);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(218, 20);
			this->textBox16->TabIndex = 29;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 193);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 13);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Contact";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(14, 219);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(36, 13);
			this->label18->TabIndex = 33;
			this->label18->Text = L"E-Mail";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(14, 246);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 13);
			this->label19->TabIndex = 34;
			this->label19->Text = L"Address";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(148, 371);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(218, 21);
			this->comboBox1->TabIndex = 35;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(148, 397);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(218, 21);
			this->comboBox2->TabIndex = 36;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(148, 423);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(218, 21);
			this->comboBox3->TabIndex = 37;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(148, 449);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(218, 21);
			this->comboBox4->TabIndex = 38;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(148, 475);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(218, 21);
			this->comboBox5->TabIndex = 39;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(389, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 23);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Retrieve Sections";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AAddStudent::button2_Click);
			// 
			// AAddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 549);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AAddStudent";
			this->Text = L"Add Student";
			this->Load += gcnew System::EventHandler(this, &AAddStudent::AAddStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectT;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("Insert into cmsproject.studentinfo (Name,CNIC,FathersName,Reg_No,CMS_ID,Merit,School,Department,Batch,UserName,Password,Section,Semester,Contact,Email,Address,SecCode) values('" + this->textBox1->Text + "','" + this->textBox2->Text + "','" + this->textBox3->Text + "','" + this->textBox4->Text + "','" + this->textBox5->Text + "','" + this->textBox6->Text + "','" + this->comboBox1->Text + "','" + this->comboBox2->Text + "','" + this->comboBox3->Text + "','" + this->textBox10->Text + "','" + this->textBox11->Text + "','" + this->comboBox4->Text + "','" + this->comboBox5->Text + "','" + this->textBox14->Text + "','" + this->textBox15->Text + "','" + this->textBox16->Text + "','" + this->comboBox1->Text +"-"+ this->comboBox2->Text + "-" + this->comboBox3->Text + "-" + this->comboBox5->Text+ "');", ConnectCMSProjectT);
	try
	{
		ConnectCMSProjectT->Open();
		ReadCMSProjectT = CommandCMSProjectLogInTeacher->ExecuteReader();
		while (ReadCMSProjectT->Read())
		{

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	MySqlConnection^ ConnectCMSProjectH = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectH;
	MySqlCommand^ CommandCMSProjectLogInTeacherH = gcnew MySqlCommand("Insert into cmsproject.loginstudent (UserName,Password) values('" + this->textBox10->Text + "','" + this->textBox11->Text + "');", ConnectCMSProjectH);
	try
	{
		ConnectCMSProjectH->Open();
		ReadCMSProjectH = CommandCMSProjectLogInTeacherH->ExecuteReader();
		MessageBox::Show("Added Successfully");
		while (ReadCMSProjectH->Read())
		{

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void AAddStudent_Load(System::Object^ sender, System::EventArgs^ e)
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox5->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProjectA = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectA;
	MySqlCommand^ CommandCMSProjectA = gcnew MySqlCommand("select * from cmsproject.sections where School='" + this->comboBox1->Text + "' and Department ='" + this->comboBox2->Text + "' and Batch='" + this->comboBox3->Text + "';", ConnectCMSProjectA);
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
				comboBox5->Items->Add(S);
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
};
