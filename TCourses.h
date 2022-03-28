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
	/// Summary for TCourses
	/// </summary>
	public ref class TCourses : public System::Windows::Forms::Form
	{
	public:
		String^ Name;
		TCourses(String^ A)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Name = A;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TCourses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label1;
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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 16);
			this->label12->TabIndex = 24;
			this->label12->Text = L"My Courses";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 42);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 212);
			this->listBox1->TabIndex = 25;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TCourses::listBox1_SelectedIndexChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::White;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(267, 175);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(12, 16);
			this->label29->TabIndex = 91;
			this->label29->Text = L" ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(174, 175);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(35, 13);
			this->label30->TabIndex = 90;
			this->label30->Text = L"Batch";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::White;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(267, 229);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(12, 16);
			this->label26->TabIndex = 88;
			this->label26->Text = L" ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::White;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(267, 202);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(12, 16);
			this->label25->TabIndex = 87;
			this->label25->Text = L" ";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::White;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(267, 148);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(12, 16);
			this->label24->TabIndex = 86;
			this->label24->Text = L" ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(267, 121);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(12, 16);
			this->label23->TabIndex = 85;
			this->label23->Text = L" ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(267, 95);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(12, 16);
			this->label22->TabIndex = 84;
			this->label22->Text = L" ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(267, 68);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(12, 16);
			this->label21->TabIndex = 83;
			this->label21->Text = L" ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(267, 42);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(12, 16);
			this->label20->TabIndex = 82;
			this->label20->Text = L" ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(174, 229);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 80;
			this->label10->Text = L"Section";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(174, 202);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 79;
			this->label11->Text = L"Semester";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(174, 148);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 13);
			this->label13->TabIndex = 78;
			this->label13->Text = L"Department";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(174, 121);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 77;
			this->label14->Text = L"School";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(174, 95);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 13);
			this->label15->TabIndex = 76;
			this->label15->Text = L"Code";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(174, 68);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 13);
			this->label16->TabIndex = 75;
			this->label16->Text = L"Credit Hours";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(174, 42);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 13);
			this->label17->TabIndex = 74;
			this->label17->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(174, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 92;
			this->label1->Text = L"Details";
			// 
			// TCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 262);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label12);
			this->Name = L"TCourses";
			this->Text = L"TCourses";
			this->Load += gcnew System::EventHandler(this, &TCourses::TCourses_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TCourses_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
		MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
		MySqlDataReader^ ReadCMSProjectT;
		MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select * from cmsproject.courses where Instructor='" + Name + "';", ConnectCMSProjectT);
		try
		{
			ConnectCMSProjectT->Open();
			ReadCMSProjectT = CommandCMSProjectLogInTeacher->ExecuteReader();
			while (ReadCMSProjectT->Read())
			{
				
				String^ A;
				A = ReadCMSProjectT->GetString("Name");
				listBox1->Items->Add(A);
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
	MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
	MySqlDataReader^ ReadCMSProjectT;
	MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select* from cmsproject.courses where Name='" + LB1 + "';", ConnectCMSProjectT);
	try
	{
		ConnectCMSProjectT->Open();
		ReadCMSProjectT = CommandCMSProjectLogInTeacher->ExecuteReader();
		while (ReadCMSProjectT->Read())
		{
			String^ A = ReadCMSProjectT->GetString("Name");
			label20->Text = A;
			String^ B = ReadCMSProjectT->GetInt32("CH").ToString();
			label21->Text = B;
			String^ C = ReadCMSProjectT->GetString("Code");
			label22->Text = C;
			String^ D = ReadCMSProjectT->GetString("School");
			label23->Text = D;
			String^ E = ReadCMSProjectT->GetString("Department");
			label24->Text = E;
			String^ F = ReadCMSProjectT->GetString("Semester");
			label25->Text = F;
			String^ G = ReadCMSProjectT->GetString("Section");
			label26->Text = G;
			String^ I = ReadCMSProjectT->GetString("Batch");
			label29->Text = I;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
