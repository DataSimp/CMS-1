#pragma once
#include"Student Page.h"
#include"TeacherPage.h"
#include"AdminPage.h"
namespace CMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for LogInPage
	/// </summary>
	public ref class LogInPage : public System::Windows::Forms::Form
	{
	public:
		LogInPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			textBox2->PasswordChar = '*';
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogInPage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(646, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LogIn";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LogInPage::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(579, 260);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(579, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(685, 252);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 27);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(685, 301);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 27);
			this->textBox2->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(503, 92);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 135);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(685, 92);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(265, 154);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GrayText;
			this->button2->Location = System::Drawing::Point(1294, 687);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LogInPage::button2_Click);
			// 
			// LogInPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"LogInPage";
			this->Text = L"LogInPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &LogInPage::LogInPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogInPage_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
		MySqlConnection^ ConnectCMSProjectS = gcnew MySqlConnection(ConnectCMSProjectString);
		MySqlCommand^ CommandCMSProjectLogInStudent = gcnew MySqlCommand("select * from cmsproject.loginstudent where UserName='" + this->textBox1->Text + "' and Password='" + this->textBox2->Text + "';", ConnectCMSProjectS);
		MySqlDataReader^ ReadCMSProjectS;
		try
		{
			ConnectCMSProjectS->Open();
			ReadCMSProjectS = CommandCMSProjectLogInStudent->ExecuteReader();
			int count = 0;
			while (ReadCMSProjectS->Read())
			{
				count++;
			}
			if (count == 1)
			{
				String^ C;
				MessageBox::Show("Username and Password is Correct!");
				String^ A = textBox1->Text;
				String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
				MySqlConnection^ ConnectCMSProjectF = gcnew MySqlConnection(ConnectCMSProjectString);
				MySqlDataReader^ ReadCMSProjectF;
				MySqlCommand^ CommandCMSProjectLogInFinance = gcnew MySqlCommand("select * from cmsproject.studentinfo where UserName='" + this->textBox1->Text + "' and Password='" + this->textBox2->Text + "';", ConnectCMSProjectF);
				try
				{
					ConnectCMSProjectF->Open();
					ReadCMSProjectF = CommandCMSProjectLogInFinance->ExecuteReader();
					while (ReadCMSProjectF->Read())
					{
						C = ReadCMSProjectF->GetString("Name");
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
				StudentPage^ SP = gcnew StudentPage(A, C);
				SP->ShowDialog();
			}
			else
			{
				MySqlConnection^ ConnectCMSProjectA = gcnew MySqlConnection(ConnectCMSProjectString);
				MySqlDataReader^ ReadCMSProjectA;
				MySqlCommand^ CommandCMSProjectLogInAdmin = gcnew MySqlCommand("select * from cmsproject.loginadmin where UserName='" + this->textBox1->Text + "' and Password='" + this->textBox2->Text + "';", ConnectCMSProjectA);
				try
				{
					ConnectCMSProjectA->Open();
					ReadCMSProjectA = CommandCMSProjectLogInAdmin->ExecuteReader();
					int count = 0;
					while (ReadCMSProjectA->Read())
					{
						count++;
					}
					if (count == 1)
					{
						MessageBox::Show("Username and Password is Correct!");
						String^ A = textBox1->Text;
						AdminPage^ AP = gcnew AdminPage(A);
						AP->ShowDialog();
					}
					else
					{
						MySqlConnection^ ConnectCMSProjectT = gcnew MySqlConnection(ConnectCMSProjectString);
						MySqlDataReader^ ReadCMSProjectT;
						MySqlCommand^ CommandCMSProjectLogInTeacher = gcnew MySqlCommand("select * from cmsproject.loginteacher where UserName='" + this->textBox1->Text + "' and password='" + this->textBox2->Text + "';", ConnectCMSProjectT);
						try
						{
							ConnectCMSProjectT->Open();
							ReadCMSProjectT = CommandCMSProjectLogInTeacher->ExecuteReader();
							int count = 0;
							while (ReadCMSProjectT->Read())
							{
								count++;
							}
							if (count == 1)
							{
								MessageBox::Show("Username and Password is Correct!");
								String^ C;
								String^ ConnectCMSProjectString = L"datasource = 127.0.0.1; port = 3306; username = root; password = root";
								MySqlConnection^ ConnectCMSProjectF = gcnew MySqlConnection(ConnectCMSProjectString);
								MySqlDataReader^ ReadCMSProjectF;
								MySqlCommand^ CommandCMSProjectLogInFinance = gcnew MySqlCommand("select * from cmsproject.teacherinfo where UserName='" + this->textBox1->Text + "' and Password='" + this->textBox2->Text + "';", ConnectCMSProjectF);
								try
								{
									ConnectCMSProjectF->Open();
									ReadCMSProjectF = CommandCMSProjectLogInFinance->ExecuteReader();
									while (ReadCMSProjectF->Read())
									{
										C = ReadCMSProjectF->GetString("Name");
									}
								}
								catch (Exception^ ex) {
									MessageBox::Show(ex->Message);
								}
								TeacherPage^ TP = gcnew TeacherPage(this->textBox1->Text, C);
								TP->ShowDialog();
							}
							else if (count > 1)
							{
								MessageBox::Show("Duplicate Username and Password...Access Denied!");
							}
							else
								MessageBox::Show("Incorrect Username and Password!");
						}
						catch (Exception^ ex) {
							MessageBox::Show(ex->Message);
						}
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}

			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		textBox1->Text = "";
		textBox2->Text = "";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
};
};
