#pragma once
#include"SProfile.h"
#include"SEditProfile.h"
#include"SChangePassword.h"
#include"SCV.h"
#include"SCourses.h"
#include"AllCourses.h"
#include"Internships.h"
#include"ACampusInfo1.h"
namespace CMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for StudentPage
	/// </summary>
	public ref class StudentPage : public System::Windows::Forms::Form
	{
	public:
		String^ Username;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	public:
		String^ Name;
	public:
		StudentPage(String^ A, String^ B)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Username = A;
			Name = B;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button10;
	protected:
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button4;



	protected:

	protected:

	protected:













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
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1209, 140);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(156, 31);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Change Password";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &StudentPage::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(1256, 103);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(109, 31);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Edit Profile";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &StudentPage::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(1267, 66);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(98, 31);
			this->button8->TabIndex = 17;
			this->button8->Text = L"My Profile";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &StudentPage::button8_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(1310, 9);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(48, 13);
			this->linkLabel1->TabIndex = 16;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign Out";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &StudentPage::linkLabel1_LinkClicked);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 31);
			this->button1->TabIndex = 20;
			this->button1->Text = L"My Courses";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentPage::button1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 31);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Curriculum Vitae";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StudentPage::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(276, 66);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(927, 671);
			this->textBox1->TabIndex = 24;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 31);
			this->button2->TabIndex = 25;
			this->button2->Text = L"All Courses";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPage::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(278, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 39);
			this->label1->TabIndex = 30;
			this->label1->Text = L"News";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 177);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 31);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Internships";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StudentPage::button3_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 214);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 31);
			this->button5->TabIndex = 32;
			this->button5->Text = L"Campus Info";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &StudentPage::button5_Click);
			// 
			// StudentPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"StudentPage";
			this->Text = L"Main Menu";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &StudentPage::StudentPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		MessageBox::Show("Signed Out Successfully");
		StudentPage::Close();
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	SProfile^ S = gcnew SProfile(Username);
	S->ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	SEditProfile^ S = gcnew SEditProfile(Username);
	S->ShowDialog();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	SChangePassword^ S = gcnew SChangePassword(Username);
	S->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	SCV^ S = gcnew SCV(Username, Name);
	S->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	SCourses^ A = gcnew SCourses(Username);
	A->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	AllCourses^ A = gcnew AllCourses();
	A->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentPage_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ Path = "C:\AAA.txt";
	String^ Text = File::ReadAllText(Path);
	textBox1->Text = Text;
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	Internships^ A = gcnew Internships();
	A->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	ACampusInfo1^ A = gcnew ACampusInfo1();
	A->ShowDialog();
}
};
}
