#pragma once
#include"AAddTeacher.h"
#include"AViewTeacher.h"
#include"AUpdateTeacher.h"
#include"ARemoveTeacher.h"
namespace CMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Teacher
	/// </summary>
	public ref class Teacher : public System::Windows::Forms::Form
	{
	public:
		Teacher(void)
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
		~Teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(87, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"View Teacher";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Teacher::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add Teacher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Teacher::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(87, 99);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Remove Teacher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Teacher::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(87, 70);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Update Data";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Teacher::button4_Click);
			// 
			// Teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(265, 129);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Teacher";
			this->Text = L"Teacher";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AAddTeacher^ A = gcnew AAddTeacher();
		A->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AViewTeacher^ A = gcnew AViewTeacher();
		A->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AUpdateTeacher^ A = gcnew AUpdateTeacher();
		A->ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	ARemoveTeacher^ A = gcnew ARemoveTeacher();
	A->ShowDialog();
}
};
}
