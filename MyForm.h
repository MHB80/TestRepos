#pragma once

namespace Project2 {

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
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
	private: Guna::UI2::WinForms::Guna2CustomCheckBox^ guna2CustomCheckBox1;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel1;
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
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2CustomCheckBox1 = (gcnew Guna::UI2::WinForms::Guna2CustomCheckBox());
			this->guna2HtmlLabel1 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->SuspendLayout();
			// 
			// guna2Button1
			// 
			this->guna2Button1->CheckedState->Parent = this->guna2Button1;
			this->guna2Button1->CustomImages->Parent = this->guna2Button1;
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button1->ForeColor = System::Drawing::Color::White;
			this->guna2Button1->HoverState->Parent = this->guna2Button1;
			this->guna2Button1->Location = System::Drawing::Point(327, 92);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->ShadowDecoration->Parent = this->guna2Button1;
			this->guna2Button1->Size = System::Drawing::Size(180, 45);
			this->guna2Button1->TabIndex = 0;
			this->guna2Button1->Text = L"guna2Button1";
			// 
			// guna2CustomCheckBox1
			// 
			this->guna2CustomCheckBox1->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2CustomCheckBox1->CheckedState->BorderRadius = 2;
			this->guna2CustomCheckBox1->CheckedState->BorderThickness = 0;
			this->guna2CustomCheckBox1->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2CustomCheckBox1->CheckedState->Parent = this->guna2CustomCheckBox1;
			this->guna2CustomCheckBox1->Location = System::Drawing::Point(265, 172);
			this->guna2CustomCheckBox1->Name = L"guna2CustomCheckBox1";
			this->guna2CustomCheckBox1->ShadowDecoration->Parent = this->guna2CustomCheckBox1;
			this->guna2CustomCheckBox1->Size = System::Drawing::Size(20, 20);
			this->guna2CustomCheckBox1->TabIndex = 1;
			this->guna2CustomCheckBox1->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2CustomCheckBox1->UncheckedState->BorderRadius = 2;
			this->guna2CustomCheckBox1->UncheckedState->BorderThickness = 0;
			this->guna2CustomCheckBox1->UncheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2CustomCheckBox1->UncheckedState->Parent = this->guna2CustomCheckBox1;
			// 
			// guna2HtmlLabel1
			// 
			this->guna2HtmlLabel1->BackColor = System::Drawing::Color::Transparent;
			this->guna2HtmlLabel1->Location = System::Drawing::Point(301, 193);
			this->guna2HtmlLabel1->Name = L"guna2HtmlLabel1";
			this->guna2HtmlLabel1->Size = System::Drawing::Size(108, 18);
			this->guna2HtmlLabel1->TabIndex = 2;
			this->guna2HtmlLabel1->Text = L"guna2HtmlLabel1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 266);
			this->Controls->Add(this->guna2HtmlLabel1);
			this->Controls->Add(this->guna2CustomCheckBox1);
			this->Controls->Add(this->guna2Button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
