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
	/// Summary for AChangePassword
	/// </summary>
	public ref class AChangePassword : public System::Windows::Forms::Form
	{
	public:
		String^ Username;
	public:
		AChangePassword(String^ A)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Username = A;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AChangePassword()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"New Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Confirm Password";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(223, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 31);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(223, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 31);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(223, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 31);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->Location = System::Drawing::Point(303, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Change";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AChangePassword::button1_Click);
			// 
			// AChangePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 195);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AChangePassword";
			this->Text = L"Change Password";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
		MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
		MySqlDataReader^ ReadCMSProject;
		MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select *from cmsproject.loginadmin where User_name='" + Username + "';", ConnectCMSProjectT);
		try
		{
			ConnectCMSProjectT->Open();
			ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
			while (ReadCMSProject->Read())
			{
				String^ CP = textBox1->Text;
				String^ CP1 = ReadCMSProject->GetString("Password");
				if (CP == CP1)
				{
					String^ NP = textBox2->Text;
					String^ CP = textBox3->Text;
					if (NP == CP)
					{
						String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
						MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
						MySqlDataReader^ ReadCMSProject;
						MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("Update cmsproject.loginadmin set Password='" + this->textBox2->Text + "' where User_name='" + Username + "';", ConnectCMSProjectT);
						try
						{
							ConnectCMSProjectT->Open();
							ReadCMSProject = CommandCMSProjectLogInTeacher->ExecuteReader();
							MessageBox::Show("Saved");
							while (ReadCMSProject->Read())
							{

							}
						}
						catch (Exception^ ex) {
							MessageBox::Show(ex->Message);
						}
					}
					else MessageBox::Show("Error");
				}
				else MessageBox::Show("Error");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
};
