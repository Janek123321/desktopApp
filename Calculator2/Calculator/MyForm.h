#pragma once
#include <cliext/vector>
#include <msclr\marshal_cppstd.h>
namespace Calculator {

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
            Timer = gcnew System::Windows::Forms::Timer();
            Timer->Interval = 1000;  // Czas w milisekundach (1 sekunda)
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
    private: System::Windows::Forms::TextBox^ Number1;
    private: System::Windows::Forms::TextBox^ Number2;
    protected:

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ PlusButton;
    private: System::Windows::Forms::Button^ SubstractionButton;
    private: System::Windows::Forms::Button^ DivisionButton;
    private: System::Windows::Forms::Button^ MultiplicationButton;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ Result;
    private: System::Windows::Forms::Label^ label3;
    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->Number1 = (gcnew System::Windows::Forms::TextBox());
            this->Number2 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->PlusButton = (gcnew System::Windows::Forms::Button());
            this->SubstractionButton = (gcnew System::Windows::Forms::Button());
            this->DivisionButton = (gcnew System::Windows::Forms::Button());
            this->MultiplicationButton = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->Result = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // Number1
            // 
            this->Number1->Location = System::Drawing::Point(32, 52);
            this->Number1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Number1->Name = L"Number1";
            this->Number1->Size = System::Drawing::Size(202, 26);
            this->Number1->TabIndex = 0;
            this->Number1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::OnTextChanged);
            // 
            // Number2
            // 
            this->Number2->Location = System::Drawing::Point(383, 52);
            this->Number2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Number2->Name = L"Number2";
            this->Number2->Size = System::Drawing::Size(217, 26);
            this->Number2->TabIndex = 1;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label1->Location = System::Drawing::Point(297, 62);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(40, 29);
            this->label1->TabIndex = 2;
            this->label1->Text = L"0p";
            // 
            // PlusButton
            // 
            this->PlusButton->Location = System::Drawing::Point(224, 162);
            this->PlusButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->PlusButton->Name = L"PlusButton";
            this->PlusButton->Size = System::Drawing::Size(112, 35);
            this->PlusButton->TabIndex = 3;
            this->PlusButton->Text = L"+";
            this->PlusButton->UseVisualStyleBackColor = true;
            this->PlusButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PlusButton_MouseDown);
            this->PlusButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::PlusButton_MouseEnter);
            this->PlusButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::PlusButton_MouseUp);
            // 
            // SubstractionButton
            // 
            this->SubstractionButton->Location = System::Drawing::Point(224, 226);
            this->SubstractionButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->SubstractionButton->Name = L"SubstractionButton";
            this->SubstractionButton->Size = System::Drawing::Size(112, 35);
            this->SubstractionButton->TabIndex = 4;
            this->SubstractionButton->Text = L"-";
            this->SubstractionButton->UseVisualStyleBackColor = true;
            this->SubstractionButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::SubstractionButton_MouseUp);
            // 
            // DivisionButton
            // 
            this->DivisionButton->Location = System::Drawing::Point(224, 302);
            this->DivisionButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->DivisionButton->Name = L"DivisionButton";
            this->DivisionButton->Size = System::Drawing::Size(112, 35);
            this->DivisionButton->TabIndex = 5;
            this->DivisionButton->Text = L"/";
            this->DivisionButton->UseVisualStyleBackColor = true;
            this->DivisionButton->Click += gcnew System::EventHandler(this, &MyForm::DivisionButton_Click);
            // 
            // MultiplicationButton
            // 
            this->MultiplicationButton->Location = System::Drawing::Point(224, 383);
            this->MultiplicationButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->MultiplicationButton->Name = L"MultiplicationButton";
            this->MultiplicationButton->Size = System::Drawing::Size(112, 35);
            this->MultiplicationButton->TabIndex = 6;
            this->MultiplicationButton->Text = L"x";
            this->MultiplicationButton->UseVisualStyleBackColor = true;
            this->MultiplicationButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MultiplicationButton_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label2->Location = System::Drawing::Point(441, 158);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(98, 33);
            this->label2->TabIndex = 7;
            this->label2->Text = L"Result";
            // 
            // Result
            // 
            this->Result->AutoSize = true;
            this->Result->Location = System::Drawing::Point(494, 258);
            this->Result->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->Result->MinimumSize = System::Drawing::Size(75, 77);
            this->Result->Name = L"Result";
            this->Result->Size = System::Drawing::Size(75, 77);
            this->Result->TabIndex = 8;
            this->Result->MouseHover += gcnew System::EventHandler(this, &MyForm::Result_MouseHover);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(48, 162);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(51, 20);
            this->label3->TabIndex = 9;
            this->label3->Text = L"label3";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(633, 629);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->Result);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->MultiplicationButton);
            this->Controls->Add(this->DivisionButton);
            this->Controls->Add(this->SubstractionButton);
            this->Controls->Add(this->PlusButton);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Number2);
            this->Controls->Add(this->Number1);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        System::Windows::Forms::Timer^ Timer;
        bool isAdding = false;

    private: System::Void OnTextChanged(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (static_cast<int>(e->KeyCode) >= 48 && static_cast<int>(e->KeyCode) <= 57) {

        }
        else {
            Result->Text = "Podales nie liczbe";
        }
    }
           private: System::Void PlusButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
               Timer->Start();
               isAdding = false;
           }
    private: System::Void PlusButton_Click(System::Object^ sender, System::EventArgs^ e) {
        int output = System::Convert::ToInt16(Number1->Text) + System::Convert::ToInt16(Number2->Text);
        Result->Text = System::Convert::ToString(output);
    }
    private: System::Void PlusButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        Timer->Start();
        isAdding = false;
    }

    private: System::Void PlusButton_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        if (Timer->Enabled) {
            Timer->Stop();
        }
    }
           void OnButtonMouseLeave(Object^ sender, EventArgs^ e)
           {
               this->Timer->Stop();
               this->Timer->Tag = nullptr;
           }
           System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
               Timer->Stop();
               if (isAdding) return;  // Je�li dodawanie ju� zosta�o wykonane, nie robimy nic

               // Wykonaj dodawanie po 1 sekundzie
               try {
                   int num1 = System::Convert::ToInt16(Number1->Text);
                   int num2 = System::Convert::ToInt16(Number2->Text);
                   int result = num1 + num2;
                   Result->Text = System::Convert::ToString(result);
                   MessageBox::Show("Trzyma�e� kursor przez 1 sekundy nad przyciskiem!");
               }
               catch (FormatException^) {
                   Result->Text = "Podales nie liczbe";
               }

               // Po wykonaniu operacji, ustawiamy flag� i zatrzymujemy timer
               isAdding = true;
               Timer->Stop();
           }


    private: System::Void PlusButton_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        label3->Text = String::Format("X: {0}, Y: {1}", e->X, e->Y);
    }

    private: System::Void PlusButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
        label3->ForeColor = System::Drawing::Color::Yellow;
    }

    private: System::Void Result_MouseHover(System::Object^ sender, System::EventArgs^ e) {
        Result->Text = "";
    }


    private: System::Void SubstractionButton_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        int output = System::Convert::ToInt16(Number1->Text) - System::Convert::ToInt16(Number2->Text);
        Result->Text = System::Convert::ToString(output);
    }
    private: System::Void DivisionButton_Click(System::Object^ sender, System::EventArgs^ e) {
        int output = System::Convert::ToInt16(Number1->Text) / System::Convert::ToInt16(Number2->Text);
        Result->Text = System::Convert::ToString(output);
    }
    private: System::Void MultiplicationButton_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
        if (static_cast<int>(e->X) == 0 && static_cast<int> (e->Y) == 0) {
            int output = System::Convert::ToInt16(Number1->Text) * System::Convert::ToInt16(Number2->Text);
            Result->Text = System::Convert::ToString(output);
        }
        else {
            Result->Text = e->X + " " + e->Y;
        }

    }
};
}
