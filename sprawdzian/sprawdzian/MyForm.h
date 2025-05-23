#pragma once
#using <System.dll>
	
namespace sprawdzian {

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
			Timer->Interval = 1000;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(121, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"godzin: 0, minut: 0, sekund: 0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(157, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 80);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(57, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(327, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"CZAS SPEDZONY NA BUTTON1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 395);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Windows::Forms::Timer^ Timer;
		int liczbaSekund = 0;
		int liczbaMinut = 0;
		int liczbaGodzin = 0;

	private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
		liczbaSekund++;
		if (liczbaSekund == 60) {
			liczbaMinut++;
			liczbaSekund = 0;
		}
		if (liczbaMinut == 60) {
			liczbaGodzin++;
			liczbaMinut = 0;
		}
		this->label1->Text = "godzin: " + liczbaGodzin +", minut: " + liczbaMinut + ", sekund: " + liczbaSekund;
	}

	private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Timer->Start();
	}
	private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		Timer->Stop();

	}
	};
}
