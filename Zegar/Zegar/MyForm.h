#pragma once
#using <System.dll>

namespace Zegar {

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
			Timer = gcnew System::Windows::Forms::Timer();
			Timer->Interval = 5000;  // Czas w milisekundach (5 sekund)
			Timer->Tick += gcnew System::EventHandler(this, &MyForm::OnTimerTick);
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(3, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(447, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 537);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
		}
#pragma endregion
		System::Windows::Forms::Timer^ Timer;
		DateTime now = DateTime::Now;
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Timer->Start();
		this->label1->Text = now.ToString("HH:mm:ss");
	}

	private: System::Void MyForm_FormClosing(Object^ sender, FormClosingEventArgs^ e) {
		Timer->Stop();
		this->Timer->Tag = nullptr;
	}

	private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
		now = DateTime::Now;
		this->label1->Text = now.ToString("HH:mm:ss");
	}

	};
}
