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
	private: System::Windows::Forms::Button^  MichTech;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  NOmich;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MichTech = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->NOmich = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MichTech
			// 
			this->MichTech->Location = System::Drawing::Point(127, 288);
			this->MichTech->Name = L"MichTech";
			this->MichTech->Size = System::Drawing::Size(118, 43);
			this->MichTech->TabIndex = 0;
			this->MichTech->Text = L"CLICK FOR AN AWESOME SCHOOL";
			this->MichTech->UseVisualStyleBackColor = true;
			this->MichTech->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(102, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 243);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// NOmich
			// 
			this->NOmich->Location = System::Drawing::Point(305, 288);
			this->NOmich->Name = L"NOmich";
			this->NOmich->Size = System::Drawing::Size(118, 43);
			this->NOmich->TabIndex = 2;
			this->NOmich->Text = L"CLICK TO HIDE IT";
			this->NOmich->UseVisualStyleBackColor = true;
			this->NOmich->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 343);
			this->Controls->Add(this->NOmich);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->MichTech);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MichTech_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = true;
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void NOmich_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = false;
	}
	};
}
