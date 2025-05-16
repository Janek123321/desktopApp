#pragma once

namespace menu {

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

	protected:










	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ pliikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ edytujToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ asdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asdToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ asdToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ dsaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asdToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem3;







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
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pliikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edytujToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dsaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->AutoSize = false;
			this->menuStrip2->BackColor = System::Drawing::SystemColors::Highlight;
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 0);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem2,
					this->edytujToolStripMenuItem1, this->pomocToolStripMenuItem2
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(9, 3, 0, 0);
			this->menuStrip2->Size = System::Drawing::Size(657, 81);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// plikToolStripMenuItem2
			// 
			this->plikToolStripMenuItem2->AutoSize = false;
			this->plikToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->plikToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->pliikToolStripMenuItem });
			this->plikToolStripMenuItem2->Margin = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->plikToolStripMenuItem2->Name = L"plikToolStripMenuItem2";
			this->plikToolStripMenuItem2->Size = System::Drawing::Size(100, 40);
			this->plikToolStripMenuItem2->Text = L"Plik";
			// 
			// pliikToolStripMenuItem
			// 
			this->pliikToolStripMenuItem->Name = L"pliikToolStripMenuItem";
			this->pliikToolStripMenuItem->Size = System::Drawing::Size(145, 34);
			this->pliikToolStripMenuItem->Text = L"Pliik";
			// 
			// edytujToolStripMenuItem1
			// 
			this->edytujToolStripMenuItem1->AutoSize = false;
			this->edytujToolStripMenuItem1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->edytujToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->asdToolStripMenuItem,
					this->asdToolStripMenuItem1, this->asdToolStripMenuItem2, this->dsaToolStripMenuItem, this->asdToolStripMenuItem3
			});
			this->edytujToolStripMenuItem1->Margin = System::Windows::Forms::Padding(40, 10, 40, 0);
			this->edytujToolStripMenuItem1->Name = L"edytujToolStripMenuItem1";
			this->edytujToolStripMenuItem1->Padding = System::Windows::Forms::Padding(0);
			this->edytujToolStripMenuItem1->Size = System::Drawing::Size(100, 40);
			this->edytujToolStripMenuItem1->Text = L"Edytuj";
			// 
			// asdToolStripMenuItem
			// 
			this->asdToolStripMenuItem->Name = L"asdToolStripMenuItem";
			this->asdToolStripMenuItem->Size = System::Drawing::Size(142, 34);
			this->asdToolStripMenuItem->Text = L"asd";
			// 
			// asdToolStripMenuItem1
			// 
			this->asdToolStripMenuItem1->Name = L"asdToolStripMenuItem1";
			this->asdToolStripMenuItem1->Size = System::Drawing::Size(142, 34);
			this->asdToolStripMenuItem1->Text = L"asd";
			// 
			// asdToolStripMenuItem2
			// 
			this->asdToolStripMenuItem2->Name = L"asdToolStripMenuItem2";
			this->asdToolStripMenuItem2->Size = System::Drawing::Size(142, 34);
			this->asdToolStripMenuItem2->Text = L"asd";
			// 
			// dsaToolStripMenuItem
			// 
			this->dsaToolStripMenuItem->Name = L"dsaToolStripMenuItem";
			this->dsaToolStripMenuItem->Size = System::Drawing::Size(142, 34);
			this->dsaToolStripMenuItem->Text = L"dsa";
			// 
			// asdToolStripMenuItem3
			// 
			this->asdToolStripMenuItem3->Name = L"asdToolStripMenuItem3";
			this->asdToolStripMenuItem3->Size = System::Drawing::Size(142, 34);
			this->asdToolStripMenuItem3->Text = L"asd";
			// 
			// pomocToolStripMenuItem2
			// 
			this->pomocToolStripMenuItem2->AutoSize = false;
			this->pomocToolStripMenuItem2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pomocToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->pomocToolStripMenuItem3 });
			this->pomocToolStripMenuItem2->Name = L"pomocToolStripMenuItem2";
			this->pomocToolStripMenuItem2->Size = System::Drawing::Size(100, 40);
			this->pomocToolStripMenuItem2->Text = L"Pomoc";
			// 
			// pomocToolStripMenuItem3
			// 
			this->pomocToolStripMenuItem3->Name = L"pomocToolStripMenuItem3";
			this->pomocToolStripMenuItem3->Size = System::Drawing::Size(169, 34);
			this->pomocToolStripMenuItem3->Text = L"Pomoc";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(657, 579);
			this->Controls->Add(this->menuStrip2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
};
}
