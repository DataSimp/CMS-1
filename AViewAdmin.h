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
	/// Summary for AViewAdmin
	/// </summary>
	public ref class AViewAdmin : public System::Windows::Forms::Form
	{
	public:
		AViewAdmin(void)
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
		~AViewAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
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
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label38;
















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
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
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
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(241, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 342);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AViewAdmin::listBox1_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(383, 353);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 13);
			this->label14->TabIndex = 128;
			this->label14->Text = L"User Name";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(383, 323);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(152, 16);
			this->label13->TabIndex = 127;
			this->label13->Text = L"CMS Account Details";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(383, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(117, 16);
			this->label11->TabIndex = 126;
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
			this->label12->TabIndex = 125;
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
			this->label10->TabIndex = 124;
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
			this->label9->TabIndex = 121;
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
			this->label8->TabIndex = 120;
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
			this->label7->TabIndex = 119;
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
			this->label6->TabIndex = 118;
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
			this->label5->TabIndex = 117;
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
			this->label4->TabIndex = 116;
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
			this->label3->TabIndex = 115;
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
			this->label2->TabIndex = 114;
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
			this->label1->TabIndex = 113;
			this->label1->Text = L"Name";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(485, 36);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(11, 13);
			this->label15->TabIndex = 129;
			this->label15->Text = L" ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(485, 62);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(11, 13);
			this->label16->TabIndex = 130;
			this->label16->Text = L" ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(485, 88);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(11, 13);
			this->label17->TabIndex = 131;
			this->label17->Text = L" ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(485, 114);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(11, 13);
			this->label18->TabIndex = 132;
			this->label18->Text = L" ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(485, 140);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(11, 13);
			this->label19->TabIndex = 133;
			this->label19->Text = L" ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(485, 166);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(11, 13);
			this->label20->TabIndex = 134;
			this->label20->Text = L" ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(485, 219);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(11, 13);
			this->label21->TabIndex = 135;
			this->label21->Text = L" ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(485, 245);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(11, 13);
			this->label22->TabIndex = 136;
			this->label22->Text = L" ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(485, 271);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(11, 13);
			this->label23->TabIndex = 137;
			this->label23->Text = L" ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::White;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(485, 297);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(11, 13);
			this->label24->TabIndex = 138;
			this->label24->Text = L" ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::White;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(485, 353);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(11, 13);
			this->label25->TabIndex = 139;
			this->label25->Text = L" ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(160, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 154;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AViewAdmin::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 153;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AViewAdmin::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(79, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 152;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 151;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(12, 67);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(47, 13);
			this->label40->TabIndex = 150;
			this->label40->Text = L"CMS_ID";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(12, 40);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 13);
			this->label39->TabIndex = 149;
			this->label39->Text = L"Name";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(12, 12);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(94, 16);
			this->label38->TabIndex = 148;
			this->label38->Text = L"Find Student";
			// 
			// AViewAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 390);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
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
			this->Name = L"AViewAdmin";
			this->Text = L"AViewAdmin";
			this->Load += gcnew System::EventHandler(this, &AViewAdmin::AViewAdmin_Load);
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
		MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select * from cmsproject.admininfo where Name='" + LB1 + "';", ConnectCMSProject);
		try
		{
			ConnectCMSProject->Open();
			ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
			while (ReadCMSProject->Read())
			{
				String^ NAME = ReadCMSProject->GetString("Name");
				label15->Text = NAME;
				String^ FN = ReadCMSProject->GetString("FathersName");
				label16->Text = FN;
				String^ CNIC = ReadCMSProject->GetInt64("CNIC").ToString();
				label17->Text = CNIC;
				String^ E = ReadCMSProject->GetString("Designation");
				label21->Text = E;
				String^ co = ReadCMSProject->GetString("Wing");
				label22->Text = co;
				String^ YJ = ReadCMSProject->GetString("Room");
				label23->Text = YJ;
				String^ S = ReadCMSProject->GetInt32("CMS_ID").ToString();
				label24->Text = S;
				String^ De = ReadCMSProject->GetString("Address");
				label18->Text = De;
				String^ W = ReadCMSProject->GetString("Contact");
				label19->Text = W;
				String^ R = ReadCMSProject->GetString("Email");
				label20->Text = R;
				String^ UN = ReadCMSProject->GetString("UserName");
				label25->Text = UN;
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void AViewAdmin_Load(System::Object^ sender, System::EventArgs^ e)
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1->Items->Clear();
	String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
	MySqlConnection^ ConnectCMSProject = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProject;
	MySqlCommand^ CommandCMSProject = gcnew MySqlCommand("select * from cmsproject.admininfo where Name ='" + this->textBox1->Text + "' or CMS_ID='" + this->textBox2->Text + "';", ConnectCMSProject);
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
