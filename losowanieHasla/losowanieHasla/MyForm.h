#pragma once

namespace losowanieHasla {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(155, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(210, 26);
			this->textBox2->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(70, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(414, 364);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dane pracownika";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Kierownik", L"Starszy programista ", L"M³odszy programista",
					L"Tester"
			});
			this->comboBox1->Location = System::Drawing::Point(154, 196);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(211, 28);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Stanowisko";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nazwisko";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Imiê";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(615, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(427, 364);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Generowanie has³a";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(163, 43);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(223, 26);
			this->numericUpDown1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(134, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 51);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Generuj has³o";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(28, 224);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(145, 24);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Znaki specialne";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(28, 175);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(70, 24);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Cyfry";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(28, 122);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(163, 24);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Ma³e i wielkie litery";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ile znaków\?";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(430, 495);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 42);
			this->button2->TabIndex = 4;
			this->button2->Text = L"ZatwierdŸ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1208, 841);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Dane Pracownika nr_zdajacego";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ haslo;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	haslo = "";
	int liczbaZnakow = (int)numericUpDown1->Value;
	array<String^>^ SmallLetters = gcnew array<String^> { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
	array<String^>^ BigLetters = gcnew array<String^> { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J","K", "L", "M", "N", "O", "P","Q", "R", "S", "T", "U","V", "W", "X", "Y", "Z"};
	array<String^>^ Special = gcnew array<String^> {"!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "_", "+", "-", "=" };
	Random^ rand = gcnew Random();
	int czyMaleIDuze = 0, czyCyfry = 0, czyZnakiSpec = 0, ileZnakow = 0;
	for (size_t i = 0; i < 3; i++)
	{
		if (checkBox1->Checked == true) {
			czyMaleIDuze = 1;
		}
		if (checkBox2->Checked == true) {
			czyCyfry = 1;
		}
		if (checkBox3->Checked == true) {
			czyZnakiSpec = 1;
		}
	}	
	if (czyMaleIDuze!= 0 && ileZnakow < liczbaZnakow)
	{
		int randomNumber = rand->Next(0, 26);

		haslo = haslo + BigLetters[randomNumber];
		ileZnakow++;
	}
	if (czyCyfry != 0 && ileZnakow < liczbaZnakow)
	{	
			int randomNumber = rand->Next(0, 9);

			haslo = haslo + System::Convert::ToString(randomNumber);
			ileZnakow++;
	}
	if (czyZnakiSpec != 0 && ileZnakow < liczbaZnakow)
	{
			int randomNumber = rand->Next(0, 14);

			haslo = haslo + Special[randomNumber];
			ileZnakow++;
	}

	for (int i = ileZnakow; i < liczbaZnakow; i++)
	{
		int randomNumber = rand->Next(0, 26);

		haslo = haslo + SmallLetters[randomNumber];
	}
	MessageBox::Show(haslo);
	//Random^ rand1 = gcnew Random();

	//int minValue = 1;
	//int maxValue = 24;

	//// Generowanie losowej liczby z zakresu [minValue, maxValue)
	//int randomNumber = rand1->Next(minValue, maxValue);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imie = textBox1->Text;
	String^ nazwisko = textBox2->Text;
	String^ stanowisko = comboBox1->Text;

	MessageBox::Show("Dane pracownika: " + imie + " " + nazwisko + " " + stanowisko + " Has³o: " + haslo);
}
};
}
#pragma once

namespace losowanieHasla {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(155, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(210, 26);
			this->textBox2->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(70, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(414, 364);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dane pracownika";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Kierownik", L"Starszy programista ", L"M³odszy programista",
					L"Tester"
			});
			this->comboBox1->Location = System::Drawing::Point(154, 196);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(211, 28);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Stanowisko";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nazwisko";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Imiê";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(615, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(427, 364);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Generowanie has³a";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(163, 43);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(223, 26);
			this->numericUpDown1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(134, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 51);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Generuj has³o";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(28, 224);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(145, 24);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Znaki specialne";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(28, 175);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(70, 24);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Cyfry";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(28, 122);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(163, 24);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Ma³e i wielkie litery";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ile znaków\?";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(430, 495);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 42);
			this->button2->TabIndex = 4;
			this->button2->Text = L"ZatwierdŸ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1208, 841);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Dane Pracownika nr_zdajacego";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ haslo;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	haslo = "";
	int liczbaZnakow = (int)numericUpDown1->Value;
	array<String^>^ SmallLetters = gcnew array<String^> { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
	array<String^>^ BigLetters = gcnew array<String^> { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J","K", "L", "M", "N", "O", "P","Q", "R", "S", "T", "U","V", "W", "X", "Y", "Z"};
	array<String^>^ Special = gcnew array<String^> {"!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "_", "+", "-", "=" };
	Random^ rand = gcnew Random();
	int czyMaleIDuze = 0, czyCyfry = 0, czyZnakiSpec = 0, ileZnakow = 0;
	for (size_t i = 0; i < 3; i++)
	{
		if (checkBox1->Checked == true) {
			czyMaleIDuze = 1;
		}
		if (checkBox2->Checked == true) {
			czyCyfry = 1;
		}
		if (checkBox3->Checked == true) {
			czyZnakiSpec = 1;
		}
	}	
	if (czyMaleIDuze!= 0 && ileZnakow < liczbaZnakow)
	{
		int randomNumber = rand->Next(0, 26);

		haslo = haslo + BigLetters[randomNumber];
		ileZnakow++;
	}
	if (czyCyfry != 0 && ileZnakow < liczbaZnakow)
	{	
			int randomNumber = rand->Next(0, 9);

			haslo = haslo + System::Convert::ToString(randomNumber);
			ileZnakow++;
	}
	if (czyZnakiSpec != 0 && ileZnakow < liczbaZnakow)
	{
			int randomNumber = rand->Next(0, 14);

			haslo = haslo + Special[randomNumber];
			ileZnakow++;
	}

	for (int i = ileZnakow; i < liczbaZnakow; i++)
	{
		int randomNumber = rand->Next(0, 26);

		haslo = haslo + SmallLetters[randomNumber];
	}
	MessageBox::Show(haslo);
	//Random^ rand1 = gcnew Random();

	//int minValue = 1;
	//int maxValue = 10;

	//// Generowanie losowej liczby z zakresu [minValue, maxValue)
	//int randomNumber = rand1->Next(minValue, maxValue);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imie = textBox1->Text;
	String^ nazwisko = textBox2->Text;
	String^ stanowisko = comboBox1->Text;

	MessageBox::Show("Dane pracownika: " + imie + " " + nazwisko + " " + stanowisko + " Has³o: " + haslo);
}
};
}

