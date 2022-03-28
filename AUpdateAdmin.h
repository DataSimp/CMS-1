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
	/// Summary for AUpdateAdmin
	/// </summary>
	public ref class AUpdateAdmin : public System::Windows::Forms::Form
	{
	public:
		AUpdateAdmin(void)
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
		~AUpdateAdmin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:












	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;











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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(383, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(117, 16);
			this->label11->TabIndex = 152;
			this->label11->Text = L"Campus Details";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(383, 6);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(123, 16);
			this->label12->TabIndex = 151;
			this->label12->Text = L"Personal Details";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(383, 166);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 150;
			this->label10->Text = L"E-mail";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(383, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 149;
			this->label9->Text = L"Contact";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(383, 114);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 148;
			this->label8->Text = L"Address";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(383, 297);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 147;
			this->label7->Text = L"CMS ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(383, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 146;
			this->label6->Text = L"Room";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(383, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 145;
			this->label5->Text = L"Wing";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(383, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 144;
			this->label4->Text = L"Designation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(383, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 143;
			this->label3->Text = L"CNIC";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(383, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 142;
			this->label2->Text = L"Father\'s Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(383, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 141;
			this->label1->Text = L"Name";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(241, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 342);
			this->listBox1->TabIndex = 140;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AUpdateAdmin::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(568, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 165;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AUpdateAdmin::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(480, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 166;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(480, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 20);
			this->textBox2->TabIndex = 167;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(480, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(163, 20);
			this->textBox3->TabIndex = 168;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(480, 111);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(163, 20);
			this->textBox4->TabIndex = 169;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(480, 137);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(163, 20);
			this->textBox5->TabIndex = 170;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(480, 163);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(163, 20);
			this->textBox6->TabIndex = 171;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(480, 216);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(163, 20);
			this->textBox7->TabIndex = 172;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(480, 242);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(163, 20);
			this->textBox8->TabIndex = 173;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(480, 268);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(163, 20);
			this->textBox9->TabIndex = 174;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(480, 294);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(163, 20);
			this->textBox10->TabIndex = 175;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 331);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 182;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AUpdateAdmin::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 181;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AUpdateAdmin::button2_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(79, 60);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(156, 20);
			this->textBox11->TabIndex = 180;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(79, 34);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(156, 20);
			this->textBox12->TabIndex = 179;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(12, 64);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(47, 13);
			this->label40->TabIndex = 178;
			this->label40->Text = L"CMS_ID";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(12, 37);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 13);
			this->label39->TabIndex = 177;
			this->label39->Text = L"Name";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(12, 9);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(94, 16);
			this->label38->TabIndex = 176;
			this->label38->Text = L"Find Student";
			// 
			// AUpdateAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 364);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
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
			this->Name = L"AUpdateAdmin";
			this->Text = L"Update Admin";
			this->Load += gcnew System::EventHandler(this, &AUpdateAdmin::AUpdateAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AUpdateAdmin_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
		MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
		MySqlDataReader^ ReadCMSProject;
		MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select * from cmsproject.admininfo;", ConnectCMSProject);
		try
		{
			ConnectCMSProject->Open();
			ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
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
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ LB1 = listBox1->Text;
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand(" select * from cmsproject.admininfo where Name='" + LB1 + "';", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
		while (ReadCMSProject->Read())
		{
			String^ NAME = ReadCMSProject->GetString("Name");
			textBox1->Text = NAME;
			String^ FN = ReadCMSProject->GetString("FathersName");
			textBox2->Text = FN;
			String^ CNIC = ReadCMSProject->GetInt64("CNIC").ToString();
			textBox3->Text = CNIC;
			String^ E = ReadCMSProject->GetString("Designation");
			textBox7->Text = E;
			String^ co = ReadCMSProject->GetString("Wing");
			textBox8->Text = co;
			String^ YJ = ReadCMSProject->GetString("Room");
			textBox9->Text = YJ;
			String^ S = ReadCMSProject->GetInt32("CMS_ID").ToString();
			textBox10->Text = S;
			String^ De = ReadCMSProject->GetString("Address");
			textBox4->Text = De;
			String^ W = ReadCMSProject->GetString("Contact");
			textBox5->Text = W;
			String^ R = ReadCMSProject->GetString("Email");
			textBox6->Text = R;
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String ^ LB1 = listBox1->Text;
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("Update cmsproject.admininfo set Name = '" + this->textBox1->Text + "', FathersName = '" + this->textBox2->Text + "', CNIC = '" + this->textBox3->Text + "', Address = '" + this->textBox4->Text + "', Contact = '" + this->textBox5->Text + "', Email = '" + this->textBox6->Text + "', Designation = '" + this->textBox7->Text + "', Wing = '" + this->textBox8->Text + "', Room = '" + this->textBox9->Text + "', CMS_ID = '" + this->textBox10->Text + "' where Name='"+LB1+"';", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.admininfo where Name ='" + this->textBox12->Text + "' or CMS_ID='" + this->textBox11->Text + "';", ConnectCMSProject);
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
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select * from cmsproject.admininfo;", ConnectCMSProject);
	try
	{
		ConnectCMSProject->Open();
		ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
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
