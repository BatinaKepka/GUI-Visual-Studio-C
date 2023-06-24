#pragma once
#include "MiniGame.h"
#include "AboutProgram.h"
#include "Program.h"

namespace LR8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartMenu
	/// </summary>
	public ref class StartMenu : public System::Windows::Forms::Form
	{
	public:
		StartMenu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~StartMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ StartProgram;
	private: System::Windows::Forms::Button^ minigame;
	private: System::Windows::Forms::Button^ aboutprogram;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ label1;



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
			this->StartProgram = (gcnew System::Windows::Forms::Button());
			this->minigame = (gcnew System::Windows::Forms::Button());
			this->aboutprogram = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// StartProgram
			// 
			this->StartProgram->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StartProgram->Location = System::Drawing::Point(74, 72);
			this->StartProgram->Name = L"StartProgram";
			this->StartProgram->Size = System::Drawing::Size(150, 50);
			this->StartProgram->TabIndex = 0;
			this->StartProgram->Text = L"Старт программы";
			this->StartProgram->UseVisualStyleBackColor = true;
			this->StartProgram->Click += gcnew System::EventHandler(this, &StartMenu::StartProgram_Click);
			// 
			// minigame
			// 
			this->minigame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minigame->Location = System::Drawing::Point(74, 128);
			this->minigame->Name = L"minigame";
			this->minigame->Size = System::Drawing::Size(150, 50);
			this->minigame->TabIndex = 1;
			this->minigame->Text = L"Мини-игра";
			this->minigame->UseVisualStyleBackColor = true;
			this->minigame->Click += gcnew System::EventHandler(this, &StartMenu::MiniGame_Click);
			// 
			// aboutprogram
			// 
			this->aboutprogram->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutprogram->ForeColor = System::Drawing::SystemColors::ControlText;
			this->aboutprogram->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->aboutprogram->Location = System::Drawing::Point(74, 184);
			this->aboutprogram->Name = L"aboutprogram";
			this->aboutprogram->Size = System::Drawing::Size(150, 50);
			this->aboutprogram->TabIndex = 2;
			this->aboutprogram->Text = L"О программе";
			this->aboutprogram->UseVisualStyleBackColor = true;
			this->aboutprogram->Click += gcnew System::EventHandler(this, &StartMenu::AboutProgram_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Maroon;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit->Location = System::Drawing::Point(74, 240);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(150, 50);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &StartMenu::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(101, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Меню";
			// 
			// StartMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(284, 311);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->aboutprogram);
			this->Controls->Add(this->minigame);
			this->Controls->Add(this->StartProgram);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StartMenu";
			this->Text = L"StartMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
private: System::Void MiniGame_Click(System::Object^ sender, System::EventArgs^ e)
{	
	MiniGame^ Game = gcnew MiniGame(this);
	Game->Show();
	this->Hide();	
}
private: System::Void StartProgram_Click(System::Object^ sender, System::EventArgs^ e)
{
	Program^ MyProgram = gcnew Program(this);
	MyProgram->Show();
	this->Hide();
}
private: System::Void AboutProgram_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AboutProgram^ About = gcnew AboutProgram(this);
	About->Show();
	this->Hide();
}
};
}
