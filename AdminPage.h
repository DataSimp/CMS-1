#pragma once
#include"Student Page.h"
#include"ACampusInfo.h"
#include"AChangePassword.h"
#include"AEditProfile.h"
#include"AProfile.h"
#include"ACampusJobs.h"
#include"Student.h"
#include"Staff.h"
#include"Teacher.h"
#include"Admin.h"
#include"ASCV.h"
#include"ASections.h"
#include"ACourses.h"
#include"News.h"
#include"AInternship.h"
namespace CMSProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AdminPage
	/// </summary>
	public ref class AdminPage : public System::Windows::Forms::Form
	{
	public:
		static String^ UserName;
	public:
		AdminPage(String^ A)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			UserName = A;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;






	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;


	protected:













	protected:

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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(1303, 9);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(48, 13);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign Out";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminPage::linkLabel1_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(13, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 31);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Campus Information";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPage::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Student Informations";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPage::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(13, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 31);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Internship Programs";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPage::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(13, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(179, 31);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Admin Informations";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminPage::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(13, 288);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 31);
			this->button7->TabIndex = 12;
			this->button7->Text = L"News";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdminPage::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(1260, 66);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(98, 31);
			this->button8->TabIndex = 13;
			this->button8->Text = L"My Profile";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AdminPage::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(1249, 103);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(109, 31);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Edit Profile";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AdminPage::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(1202, 140);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(156, 31);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Change Password";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &AdminPage::button10_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(13, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 31);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Faculty Informations";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminPage::button3_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(13, 214);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 31);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Staff Informations";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminPage::button5_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(12, 325);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(222, 31);
			this->button12->TabIndex = 25;
			this->button12->Text = L"Student\'s Curriculum Vitae";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &AdminPage::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(13, 362);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(167, 31);
			this->button11->TabIndex = 26;
			this->button11->Text = L"Courses Allotment";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &AdminPage::button11_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(13, 399);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(129, 31);
			this->button13->TabIndex = 27;
			this->button13->Text = L"Class Sections ";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &AdminPage::button13_Click);
			// 
			// AdminPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"AdminPage";
			this->Text = L"Main Page";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AdminPage::AdminPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
	{
		MessageBox::Show("Signed Out Successfully");
		AdminPage::Close();
	}
	private: System::Void AdminPage_Load(System::Object^ sender, System::EventArgs^ e)
	{
		label2->Text = "Main Menu";
		AdminPage::Text = "Campus Management System";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ACampusInfo^ ACI = gcnew ACampusInfo();
		ACI->ShowDialog();
	};
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AProfile^ AP = gcnew AProfile(UserName);
		AP->ShowDialog();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AEditProfile^ AEP = gcnew AEditProfile(UserName);
		AEP->ShowDialog();
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	AChangePassword^ ACP = gcnew AChangePassword(UserName);
	ACP->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	Admin^ ACJ = gcnew Admin(UserName);
	ACJ->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Student^ ASI = gcnew Student();
	ASI->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Staff^ S = gcnew Staff();
	S->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Teacher^ A = gcnew Teacher();
	A->ShowDialog();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	ASCV^ A = gcnew ASCV();
	A->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	News^ A = gcnew News();
	A->ShowDialog();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	ASections^ A = gcnew ASections();
	A->ShowDialog();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	ACourses^ A = gcnew ACourses();
	A->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	AInternship^ A = gcnew AInternship();
	A->ShowDialog();
}
};
};
