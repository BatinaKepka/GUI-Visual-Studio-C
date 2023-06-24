#pragma once

namespace LR8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AboutProgram
	/// </summary>
	public ref class AboutProgram : public System::Windows::Forms::Form
	{
	public:
		AboutProgram(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		AboutProgram(System::Windows::Forms::Form^ frm1) :AboutProgram()
		{
			BackForm = frm1;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AboutProgram()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BackToMenu;
	private: System::Windows::Forms::TextBox^ NameOfProgram;
	private: System::Windows::Forms::TextBox^ Version;
	private: System::Windows::Forms::TextBox^ DateOfCreation;

	private: System::Windows::Forms::Form^ BackForm;
	private: System::Windows::Forms::TextBox^ author;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BackToMenu = (gcnew System::Windows::Forms::Button());
			this->NameOfProgram = (gcnew System::Windows::Forms::TextBox());
			this->Version = (gcnew System::Windows::Forms::TextBox());
			this->DateOfCreation = (gcnew System::Windows::Forms::TextBox());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BackToMenu
			// 
			this->BackToMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackToMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BackToMenu->Location = System::Drawing::Point(12, 181);
			this->BackToMenu->Name = L"BackToMenu";
			this->BackToMenu->Size = System::Drawing::Size(276, 50);
			this->BackToMenu->TabIndex = 0;
			this->BackToMenu->Text = L"Назад в меню";
			this->BackToMenu->UseVisualStyleBackColor = false;
			this->BackToMenu->Click += gcnew System::EventHandler(this, &AboutProgram::BackToMenu_Click);
			// 
			// NameOfProgram
			// 
			this->NameOfProgram->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->NameOfProgram->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameOfProgram->Location = System::Drawing::Point(12, 12);
			this->NameOfProgram->Multiline = true;
			this->NameOfProgram->Name = L"NameOfProgram";
			this->NameOfProgram->Size = System::Drawing::Size(276, 58);
			this->NameOfProgram->TabIndex = 1;
			this->NameOfProgram->Text = L"       Название программы:     \"Интерфейс для ЛР по ООП\"";
			// 
			// Version
			// 
			this->Version->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Version->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Version->Location = System::Drawing::Point(12, 76);
			this->Version->Name = L"Version";
			this->Version->Size = System::Drawing::Size(276, 29);
			this->Version->TabIndex = 2;
			this->Version->Text = L"Версия: 1.0";
			// 
			// DateOfCreation
			// 
			this->DateOfCreation->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->DateOfCreation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateOfCreation->Location = System::Drawing::Point(12, 111);
			this->DateOfCreation->Name = L"DateOfCreation";
			this->DateOfCreation->Size = System::Drawing::Size(276, 29);
			this->DateOfCreation->TabIndex = 3;
			this->DateOfCreation->Text = L"Дата создания: 17.06.2023";
			// 
			// author
			// 
			this->author->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->author->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->author->Location = System::Drawing::Point(12, 146);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(276, 29);
			this->author->TabIndex = 4;
			this->author->Text = L"Автор: Виктор Шевченко";
			// 
			// AboutProgram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(300, 243);
			this->Controls->Add(this->author);
			this->Controls->Add(this->DateOfCreation);
			this->Controls->Add(this->Version);
			this->Controls->Add(this->NameOfProgram);
			this->Controls->Add(this->BackToMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AboutProgram";
			this->Text = L"AboutProgram";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BackToMenu_Click(System::Object^ sender, System::EventArgs^ e)
	{
		BackForm->Show();
		this->Close();
	}
	};
}
