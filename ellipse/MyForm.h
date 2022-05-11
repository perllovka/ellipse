#include <string>
#include <iostream>
using namespace std;

namespace Ell {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CForm : public System::Windows::Forms::Form
	{
	public:
		int a = 100;
		int b = 100;

	public:
		int W = 200;
		int H = 100;
		CForm(void)
		{
			InitializeComponent();
		}

	private: System::Windows::Forms::Button^ ClearButton;

	private: System::Windows::Forms::TextBox^ FirstCoordinate;

	private: System::Windows::Forms::TextBox^ SecondCoordinate;

	private: System::Windows::Forms::Label^ X0;

	private: System::Windows::Forms::Label^ Y0;

	private: System::Windows::Forms::Label^ Wl;

	private: System::Windows::Forms::Label^ Hl;
	



	private: System::Windows::Forms::TextBox^ WidthTB;

	private: System::Windows::Forms::TextBox^ HeightTB;

	private: System::Windows::Forms::Button^ PaintButton;

	private: System::Windows::Forms::PictureBox^ PaintBox;

	private: System::Windows::Forms::Button^ ExitButton;

	protected:

		static int CPaint = 0;


	protected:


		~CForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->PaintButton = (gcnew System::Windows::Forms::Button());
			this->PaintBox = (gcnew System::Windows::Forms::PictureBox());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->FirstCoordinate = (gcnew System::Windows::Forms::TextBox());
			this->SecondCoordinate = (gcnew System::Windows::Forms::TextBox());
			this->WidthTB = (gcnew System::Windows::Forms::TextBox());
			this->X0 = (gcnew System::Windows::Forms::Label());
			this->Y0 = (gcnew System::Windows::Forms::Label());
			this->Wl = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->Hl = (gcnew System::Windows::Forms::Label());
			this->HeightTB = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaintBox))->BeginInit();
			this->SuspendLayout();
			// 
			// PaintButton
			// 
			this->PaintButton->AutoSize = true;
			this->PaintButton->BackColor = System::Drawing::Color::LightGray;
			this->PaintButton->Location = System::Drawing::Point(20, 13);
			this->PaintButton->Margin = System::Windows::Forms::Padding(2);
			this->PaintButton->Name = L"PaintButton";
			this->PaintButton->Size = System::Drawing::Size(80, 27);
			this->PaintButton->TabIndex = 0;
			this->PaintButton->Text = L"Paint";
			this->PaintButton->UseVisualStyleBackColor = false;
			this->PaintButton->Click += gcnew System::EventHandler(this, &CForm::PaintButton_Click);
			// 
			// PaintBox
			// 
			this->PaintBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PaintBox->BackColor = System::Drawing::Color::Moccasin;
			this->PaintBox->Location = System::Drawing::Point(133, 13);
			this->PaintBox->Margin = System::Windows::Forms::Padding(2);
			this->PaintBox->Name = L"PaintBox";
			this->PaintBox->Size = System::Drawing::Size(429, 333);
			this->PaintBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PaintBox->TabIndex = 1;
			this->PaintBox->TabStop = false;
			this->PaintBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CForm::PaintBox_Paint);
			// 
			// ClearButton
			// 
			this->ClearButton->AutoSize = true;
			this->ClearButton->BackColor = System::Drawing::Color::LightGray;
			this->ClearButton->Location = System::Drawing::Point(20, 53);
			this->ClearButton->Margin = System::Windows::Forms::Padding(2);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(80, 27);
			this->ClearButton->TabIndex = 2;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = false;
			this->ClearButton->Click += gcnew System::EventHandler(this, &CForm::ClearButton_Click);
			// 
			// FirstCoordinate
			// 
			this->FirstCoordinate->AcceptsReturn = true;
			this->FirstCoordinate->Location = System::Drawing::Point(20, 128);
			this->FirstCoordinate->Margin = System::Windows::Forms::Padding(2);
			this->FirstCoordinate->Name = L"FirstCoordinate";
			this->FirstCoordinate->Size = System::Drawing::Size(81, 20);
			this->FirstCoordinate->TabIndex = 3;
			this->FirstCoordinate->Text = L"100";
			this->FirstCoordinate->TextChanged += gcnew System::EventHandler(this, &CForm::FirstCoordinate_TextChanged);
			// 
			// SecondCoordinate
			// 
			this->SecondCoordinate->Location = System::Drawing::Point(20, 196);
			this->SecondCoordinate->Margin = System::Windows::Forms::Padding(2);
			this->SecondCoordinate->Name = L"SecondCoordinate";
			this->SecondCoordinate->Size = System::Drawing::Size(81, 20);
			this->SecondCoordinate->TabIndex = 4;
			this->SecondCoordinate->Text = L"100";
			this->SecondCoordinate->TextChanged += gcnew System::EventHandler(this, &CForm::SecondCoordinate_TextChanged);
			// 
			// WidthTB
			// 
			this->WidthTB->Location = System::Drawing::Point(20, 266);
			this->WidthTB->Margin = System::Windows::Forms::Padding(2);
			this->WidthTB->Name = L"WidthTB";
			this->WidthTB->Size = System::Drawing::Size(81, 20);
			this->WidthTB->TabIndex = 5;
			this->WidthTB->Text = L"200";
			this->WidthTB->TextChanged += gcnew System::EventHandler(this, &CForm::Width_TextChanged);
			// 
			// X0
			// 
			this->X0->BackColor = System::Drawing::Color::WhiteSmoke;
			this->X0->Location = System::Drawing::Point(25, 91);
			this->X0->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->X0->Name = L"X0";
			this->X0->Size = System::Drawing::Size(43, 23);
			this->X0->TabIndex = 6;
			this->X0->Text = L"X0";
			this->X0->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Y0
			// 
			this->Y0->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Y0->Location = System::Drawing::Point(25, 164);
			this->Y0->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Y0->Name = L"Y0";
			this->Y0->Size = System::Drawing::Size(43, 20);
			this->Y0->TabIndex = 7;
			this->Y0->Text = L"Y0";
			this->Y0->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->Y0->Click += gcnew System::EventHandler(this, &CForm::Y0_Click);
			// 
			// Wl
			// 
			this->Wl->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Wl->Location = System::Drawing::Point(25, 236);
			this->Wl->Margin = System::Windows::Forms::Padding(0);
			this->Wl->Name = L"Wl";
			this->Wl->Size = System::Drawing::Size(38, 20);
			this->Wl->TabIndex = 8;
			this->Wl->Text = L"W";
			this->Wl->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::DarkGray;
			this->ExitButton->Location = System::Drawing::Point(20, 399);
			this->ExitButton->Margin = System::Windows::Forms::Padding(2);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(80, 27);
			this->ExitButton->TabIndex = 10;
			this->ExitButton->Text = L"Close";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &CForm::ExitButton_Click);
			// 
			// Hl
			// 
			this->Hl->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Hl->Location = System::Drawing::Point(25, 296);
			this->Hl->Margin = System::Windows::Forms::Padding(0);
			this->Hl->Name = L"Hl";
			this->Hl->Size = System::Drawing::Size(43, 20);
			this->Hl->TabIndex = 11;
			this->Hl->Text = L"H";
			this->Hl->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->Hl->Click += gcnew System::EventHandler(this, &CForm::label1_Click);
			// 
			// HeightTB
			// 
			this->HeightTB->Location = System::Drawing::Point(20, 327);
			this->HeightTB->Margin = System::Windows::Forms::Padding(2);
			this->HeightTB->Name = L"HeightTB";
			this->HeightTB->Size = System::Drawing::Size(81, 20);
			this->HeightTB->TabIndex = 12;
			this->HeightTB->Text = L"100";
			this->HeightTB->TextChanged += gcnew System::EventHandler(this, &CForm::Height_TextChanged);
			// 
			// CForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(615, 380);
			this->Controls->Add(this->HeightTB);
			this->Controls->Add(this->Hl);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->Wl);
			this->Controls->Add(this->Y0);
			this->Controls->Add(this->X0);
			this->Controls->Add(this->WidthTB);
			this->Controls->Add(this->SecondCoordinate);
			this->Controls->Add(this->FirstCoordinate);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->PaintBox);
			this->Controls->Add(this->PaintButton);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CForm";
			this->Load += gcnew System::EventHandler(this, &CForm::CForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaintBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void PaintButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			CPaint = 1;
			PaintBox->Invalidate();
		}

		System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			CPaint = -1;
			PaintBox->Invalidate();
		}

		System::Void PaintBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			switch (CPaint)
			{
			case 0: return;
			case 1:
			{
				Pen^ bPen = gcnew Pen(Color::Black, 2);
				e->Graphics->DrawEllipse(bPen, a, b, W, H);
				CPaint = 0;
				break;
			}
			case -1:
				e->Graphics->Clear(Color::Moccasin);
				CPaint = 0;
				break;
			}
		}

		System::Void FirstCoordinate_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ firstcoordinate = Convert::ToString(FirstCoordinate->Text);
			for (int i = 0; i < firstcoordinate->Length; i++)
			{
				if (Char::IsDigit(firstcoordinate[i]) == 0)
				{
					MessageBox::Show("Please, enter digits only");
					this->FirstCoordinate->Text = "";
				}
			}
			if (System::String::IsNullOrEmpty(FirstCoordinate->Text) == 1)
				a = 0;
			else a = int(Convert::ToDouble(FirstCoordinate->Text));
		}

		System::Void SecondCoordinate_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ secondcoordinate = Convert::ToString(SecondCoordinate->Text);
			for (int i = 0; i < secondcoordinate->Length; i++)
			{
				if (Char::IsDigit(secondcoordinate[i]) == 0)
				{
					MessageBox::Show("Please, enter digits only");
					this->SecondCoordinate->Text = "";
				}
			}
			if (System::String::IsNullOrEmpty(SecondCoordinate->Text) == 1)
				b = 0;
			else b = int(Convert::ToDouble(SecondCoordinate->Text));
		}

		System::Void Width_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ sRadius = Convert::ToString(WidthTB->Text);
			for (int i = 0; i < sRadius->Length; i++)
			{
				if (Char::IsDigit(sRadius[i]) == 0)
				{
					MessageBox::Show("Please, enter digits only");
					this->WidthTB->Text = "";
				}
			}
			if (System::String::IsNullOrEmpty(WidthTB->Text) == 1)
				W = 0;
			else W = int(Convert::ToDouble(WidthTB->Text));
		}
		System::Void Height_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ sRadius = Convert::ToString(HeightTB->Text);
			for (int i = 0; i < sRadius->Length; i++)
			{
				if (Char::IsDigit(sRadius[i]) == 0)
				{
					MessageBox::Show("Please, enter digits only");
					this->HeightTB->Text = "";
				}
			}
			if (System::String::IsNullOrEmpty(HeightTB->Text) == 1)
				H = 0;
			else H = int(Convert::ToDouble(HeightTB->Text));
		}

		System::Void CForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->Height = 500;
			this->Width = 700;
		}


		System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Application::Exit();
		}
	private: System::Void Y0_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
};
