#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;



	private:
		Graphics^ g;
		Bitmap^ bmp = gcnew Bitmap("Graphics/Mich.bmp");
	public: System::Windows::Forms::Button^  UPbutton;
	private:

	private: System::Windows::Forms::Button^  DOWNbutton;
	private: System::Windows::Forms::Button^  LEFTbutton;
	private: System::Windows::Forms::Button^  RIGHTbutton;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->UPbutton = (gcnew System::Windows::Forms::Button());
			this->DOWNbutton = (gcnew System::Windows::Forms::Button());
			this->LEFTbutton = (gcnew System::Windows::Forms::Button());
			this->RIGHTbutton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CLICK FOR AN AWESOME SCHOOL";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(22, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 243);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(249, 279);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CLICK TO HIDE IT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// UPbutton
			// 
			this->UPbutton->Location = System::Drawing::Point(430, 12);
			this->UPbutton->Name = L"UPbutton";
			this->UPbutton->Size = System::Drawing::Size(75, 46);
			this->UPbutton->TabIndex = 3;
			this->UPbutton->Text = L"UP";
			this->UPbutton->UseVisualStyleBackColor = true;
			this->UPbutton->Click += gcnew System::EventHandler(this, &MyForm::UPbutton_Click);
			// 
			// DOWNbutton
			// 
			this->DOWNbutton->Location = System::Drawing::Point(430, 77);
			this->DOWNbutton->Name = L"DOWNbutton";
			this->DOWNbutton->Size = System::Drawing::Size(75, 46);
			this->DOWNbutton->TabIndex = 4;
			this->DOWNbutton->Text = L"DOWN";
			this->DOWNbutton->UseVisualStyleBackColor = true;
			this->DOWNbutton->Click += gcnew System::EventHandler(this, &MyForm::DOWNbutton_Click);
			// 
			// LEFTbutton
			// 
			this->LEFTbutton->Location = System::Drawing::Point(430, 142);
			this->LEFTbutton->Name = L"LEFTbutton";
			this->LEFTbutton->Size = System::Drawing::Size(75, 46);
			this->LEFTbutton->TabIndex = 5;
			this->LEFTbutton->Text = L"LEFT";
			this->LEFTbutton->UseVisualStyleBackColor = true;
			this->LEFTbutton->Click += gcnew System::EventHandler(this, &MyForm::LEFTbutton_Click);
			// 
			// RIGHTbutton
			// 
			this->RIGHTbutton->Location = System::Drawing::Point(430, 209);
			this->RIGHTbutton->Name = L"RIGHTbutton";
			this->RIGHTbutton->Size = System::Drawing::Size(75, 46);
			this->RIGHTbutton->TabIndex = 6;
			this->RIGHTbutton->Text = L"RIGHT";
			this->RIGHTbutton->UseVisualStyleBackColor = true;
			this->RIGHTbutton->Click += gcnew System::EventHandler(this, &MyForm::RIGHTbutton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 343);
			this->Controls->Add(this->RIGHTbutton);
			this->Controls->Add(this->LEFTbutton);
			this->Controls->Add(this->DOWNbutton);
			this->Controls->Add(this->UPbutton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 g->DrawImage(bmp, get_x, get_y);
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = nullptr;
				 pictureBox1->Refresh();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 g = pictureBox1->CreateGraphics();
	}
private: System::Void UPbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Refresh();
			 
}
private: System::Void DOWNbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Refresh();
}
private: System::Void LEFTbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Refresh();
}
private: System::Void RIGHTbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Refresh();
}
};
}
