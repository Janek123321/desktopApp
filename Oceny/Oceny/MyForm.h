#pragma once

namespace Oceny {

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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;



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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(585, 136);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(190, 26);
			this->numericUpDown1->TabIndex = 0;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(585, 189);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(190, 26);
			this->numericUpDown2->TabIndex = 1;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(585, 251);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(190, 26);
			this->numericUpDown3->TabIndex = 2;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(585, 307);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(190, 26);
			this->numericUpDown4->TabIndex = 3;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(585, 359);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(190, 26);
			this->numericUpDown5->TabIndex = 4;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(585, 416);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(190, 26);
			this->numericUpDown6->TabIndex = 5;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(584, 469);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(190, 26);
			this->numericUpDown7->TabIndex = 6;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(585, 529);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(190, 26);
			this->numericUpDown8->TabIndex = 7;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(584, 40);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(190, 26);
			this->name->TabIndex = 8;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(585, 614);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(173, 77);
			this->submit->TabIndex = 9;
			this->submit->Text = L"wyslij";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &MyForm::submit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(39, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"uczen1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(39, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 24);
			this->label2->TabIndex = 11;
			this->label2->Text = L"uczen2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(39, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 24);
			this->label3->TabIndex = 12;
			this->label3->Text = L"uczen3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(39, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"uczen4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(39, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"uczen5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(39, 312);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 24);
			this->label6->TabIndex = 15;
			this->label6->Text = L"uczen6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(39, 362);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 24);
			this->label7->TabIndex = 16;
			this->label7->Text = L"uczen7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(39, 413);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 24);
			this->label8->TabIndex = 17;
			this->label8->Text = L"uczen8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(39, 463);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 24);
			this->label9->TabIndex = 18;
			this->label9->Text = L"uczen9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(39, 514);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 24);
			this->label10->TabIndex = 19;
			this->label10->Text = L"uczen10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(39, 639);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 24);
			this->label11->TabIndex = 20;
			this->label11->Text = L"srednia max";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Rockwell Nova", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(39, 588);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(112, 24);
			this->label12->TabIndex = 21;
			this->label12->Text = L"srednia min";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(570, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(270, 22);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Podaj imie i nazwisko ucznia:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(581, 98);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(126, 22);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Podaj oceny:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 717);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->name);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int liczbaUczniow = 0;
		double max = 0;
		double min = 6.01;
	private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
		liczbaUczniow++;
		double liczbaOcen = 0;
		if (liczbaUczniow > 10) {
			MessageBox::Show("nie mozna dodac wiecej niz 10 uczniow");
		}
		else {
			double suma = 0;
			for (size_t i = 1; i <= 8; i++)
			{
				String^ nazwaKontrolki = "numericUpDown" + System::Convert::ToString(i);
				Control^ temp = Controls->Find(nazwaKontrolki, true)[0];
				if(temp->Text != "0"){
				suma = suma + System::Convert::ToInt16(temp->Text);
				liczbaOcen++;
				}
			}
			
			double srednia = suma / liczbaOcen;
			String^ nazwaKontrolki = "label" + System::Convert::ToString(liczbaUczniow);
			Control^ temp = Controls->Find(nazwaKontrolki, true)[0];

			if (liczbaOcen == 0)
			{
				temp->Text = "Uczen " + name->Text + " nie ma ocen";
			}
			else
			{
			temp->Text = "Srednia ucznia " + name->Text + ": " + System::Convert::ToString(srednia);

			if (srednia > max) {
				label11->Text = "najwyzsza srednia: " + System::Convert::ToString(srednia);
				max = srednia;
			}
			if (srednia < min) {
				label12->Text = "najnizsza srednia: " + System::Convert::ToString(srednia);
				min = srednia;
			}

			}
		}
		for (int i = 1; i < 9; i++)
		{
			String^ nazwaKontrolki = "numericUpDown" + System::Convert::ToString(i);
			Control^ temp = Controls->Find(nazwaKontrolki, true)[0];
			temp->Text = "0";	
		}
	}
};
}