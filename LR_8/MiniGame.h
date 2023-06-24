#pragma once

#include<stdlib.h>
#include <time.h>

namespace LR8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MiniGame
	/// </summary>
	public ref class MiniGame : public System::Windows::Forms::Form
	{
	public:
		MiniGame(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MiniGame(System::Windows::Forms::Form^ frm1):MiniGame()
		{
			BackForm = frm1;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MiniGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BackToMenu;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButtonPaper;
	private: System::Windows::Forms::RadioButton^ radioButtonScissors;
	private: System::Windows::Forms::RadioButton^ radioButtonRock;
	private: System::Windows::Forms::PictureBox^ pictureBoxPlayer;
	private: System::Windows::Forms::Label^ Timer;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ ScorePlayer;
	private: System::Windows::Forms::Label^ ScoreCPU;
	private: System::Windows::Forms::PictureBox^ pictureBoxCPU;
	private: System::Windows::Forms::Label^ NamePlayer;
	private: System::Windows::Forms::Label^ NameCPU;
	private: System::Windows::Forms::Button^ RoundStart;
	private: System::Windows::Forms::Button^ RestartGame;
	private: System::Windows::Forms::Timer^ RoundTimer;
	private: System::ComponentModel::IContainer^ components;

	private: System::Windows::Forms::Form^ BackForm;
	int scorePlayer = 0;
	int scoreCPU = 0;
	String^ choicePlayer = "";
	String^ choiceCPU = "";
	int time_count = 5;
	Bitmap^ imageRock = gcnew Bitmap("rock.jpg");
	Bitmap^ imagePaper = gcnew Bitmap("paper.jpg");
	Bitmap^ imageQ = gcnew Bitmap("question_mark.jpg");
	Bitmap^ imageScissors = gcnew Bitmap("scissors.jpg");

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MiniGame::typeid));
			this->BackToMenu = (gcnew System::Windows::Forms::Button());
			this->radioButtonPaper = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonScissors = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonRock = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBoxPlayer = (gcnew System::Windows::Forms::PictureBox());
			this->Timer = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ScorePlayer = (gcnew System::Windows::Forms::Label());
			this->ScoreCPU = (gcnew System::Windows::Forms::Label());
			this->pictureBoxCPU = (gcnew System::Windows::Forms::PictureBox());
			this->NamePlayer = (gcnew System::Windows::Forms::Label());
			this->NameCPU = (gcnew System::Windows::Forms::Label());
			this->RoundStart = (gcnew System::Windows::Forms::Button());
			this->RestartGame = (gcnew System::Windows::Forms::Button());
			this->RoundTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCPU))->BeginInit();
			this->SuspendLayout();
			// 
			// BackToMenu
			// 
			this->BackToMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackToMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BackToMenu->Location = System::Drawing::Point(12, 232);
			this->BackToMenu->Name = L"BackToMenu";
			this->BackToMenu->Size = System::Drawing::Size(129, 40);
			this->BackToMenu->TabIndex = 0;
			this->BackToMenu->Text = L"Назад в меню";
			this->BackToMenu->UseVisualStyleBackColor = false;
			this->BackToMenu->Click += gcnew System::EventHandler(this, &MiniGame::BackToMenu_Click);
			// 
			// radioButtonPaper
			// 
			this->radioButtonPaper->AutoSize = true;
			this->radioButtonPaper->Location = System::Drawing::Point(41, 98);
			this->radioButtonPaper->Name = L"radioButtonPaper";
			this->radioButtonPaper->Size = System::Drawing::Size(62, 17);
			this->radioButtonPaper->TabIndex = 3;
			this->radioButtonPaper->TabStop = true;
			this->radioButtonPaper->Text = L"Бумага";
			this->radioButtonPaper->UseVisualStyleBackColor = true;
			this->radioButtonPaper->CheckedChanged += gcnew System::EventHandler(this, &MiniGame::radioButtonPaper_CheckedChanged);
			// 
			// radioButtonScissors
			// 
			this->radioButtonScissors->AutoSize = true;
			this->radioButtonScissors->Location = System::Drawing::Point(41, 75);
			this->radioButtonScissors->Name = L"radioButtonScissors";
			this->radioButtonScissors->Size = System::Drawing::Size(73, 17);
			this->radioButtonScissors->TabIndex = 4;
			this->radioButtonScissors->TabStop = true;
			this->radioButtonScissors->Text = L"Ножницы";
			this->radioButtonScissors->UseVisualStyleBackColor = true;
			this->radioButtonScissors->CheckedChanged += gcnew System::EventHandler(this, &MiniGame::radioButtonScissors_CheckedChanged);
			// 
			// radioButtonRock
			// 
			this->radioButtonRock->AutoSize = true;
			this->radioButtonRock->Location = System::Drawing::Point(41, 52);
			this->radioButtonRock->Name = L"radioButtonRock";
			this->radioButtonRock->Size = System::Drawing::Size(64, 17);
			this->radioButtonRock->TabIndex = 5;
			this->radioButtonRock->TabStop = true;
			this->radioButtonRock->Text = L"Камень";
			this->radioButtonRock->UseVisualStyleBackColor = true;
			this->radioButtonRock->CheckedChanged += gcnew System::EventHandler(this, &MiniGame::radioButtonRock_CheckedChanged);
			// 
			// pictureBoxPlayer
			// 
			this->pictureBoxPlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxPlayer.Image")));
			this->pictureBoxPlayer->Location = System::Drawing::Point(164, 36);
			this->pictureBoxPlayer->Name = L"pictureBoxPlayer";
			this->pictureBoxPlayer->Size = System::Drawing::Size(200, 200);
			this->pictureBoxPlayer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxPlayer->TabIndex = 6;
			this->pictureBoxPlayer->TabStop = false;
			// 
			// Timer
			// 
			this->Timer->AutoSize = true;
			this->Timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Timer->Location = System::Drawing::Point(370, 117);
			this->Timer->Name = L"Timer";
			this->Timer->Size = System::Drawing::Size(40, 42);
			this->Timer->TabIndex = 8;
			this->Timer->Text = L"5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(18, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Ваш выбор:";
			// 
			// ScorePlayer
			// 
			this->ScorePlayer->AutoSize = true;
			this->ScorePlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ScorePlayer->Location = System::Drawing::Point(243, 239);
			this->ScorePlayer->Name = L"ScorePlayer";
			this->ScorePlayer->Size = System::Drawing::Size(40, 42);
			this->ScorePlayer->TabIndex = 10;
			this->ScorePlayer->Text = L"0";
			// 
			// ScoreCPU
			// 
			this->ScoreCPU->AutoSize = true;
			this->ScoreCPU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ScoreCPU->Location = System::Drawing::Point(496, 239);
			this->ScoreCPU->Name = L"ScoreCPU";
			this->ScoreCPU->Size = System::Drawing::Size(40, 42);
			this->ScoreCPU->TabIndex = 11;
			this->ScoreCPU->Text = L"0";
			// 
			// pictureBoxCPU
			// 
			this->pictureBoxCPU->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCPU.Image")));
			this->pictureBoxCPU->Location = System::Drawing::Point(416, 36);
			this->pictureBoxCPU->Name = L"pictureBoxCPU";
			this->pictureBoxCPU->Size = System::Drawing::Size(200, 200);
			this->pictureBoxCPU->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCPU->TabIndex = 12;
			this->pictureBoxCPU->TabStop = false;
			// 
			// NamePlayer
			// 
			this->NamePlayer->AutoSize = true;
			this->NamePlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NamePlayer->Location = System::Drawing::Point(232, 9);
			this->NamePlayer->Name = L"NamePlayer";
			this->NamePlayer->Size = System::Drawing::Size(68, 24);
			this->NamePlayer->TabIndex = 13;
			this->NamePlayer->Text = L"Игрок";
			// 
			// NameCPU
			// 
			this->NameCPU->AutoSize = true;
			this->NameCPU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameCPU->Location = System::Drawing::Point(457, 9);
			this->NameCPU->Name = L"NameCPU";
			this->NameCPU->Size = System::Drawing::Size(123, 24);
			this->NameCPU->TabIndex = 14;
			this->NameCPU->Text = L"Компьютер";
			// 
			// RoundStart
			// 
			this->RoundStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RoundStart->Location = System::Drawing::Point(12, 117);
			this->RoundStart->Name = L"RoundStart";
			this->RoundStart->Size = System::Drawing::Size(129, 40);
			this->RoundStart->TabIndex = 15;
			this->RoundStart->Text = L"Начать раунд";
			this->RoundStart->UseVisualStyleBackColor = true;
			this->RoundStart->Click += gcnew System::EventHandler(this, &MiniGame::RoundStart_Click);
			// 
			// RestartGame
			// 
			this->RestartGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RestartGame->Location = System::Drawing::Point(12, 163);
			this->RestartGame->Name = L"RestartGame";
			this->RestartGame->Size = System::Drawing::Size(129, 40);
			this->RestartGame->TabIndex = 16;
			this->RestartGame->Text = L"Рестарт";
			this->RestartGame->UseVisualStyleBackColor = true;
			this->RestartGame->Click += gcnew System::EventHandler(this, &MiniGame::RestartGame_Click);
			// 
			// RoundTimer
			// 
			this->RoundTimer->Interval = 1000;
			this->RoundTimer->Tick += gcnew System::EventHandler(this, &MiniGame::RoundTimer_Tick);
			// 
			// MiniGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(637, 282);
			this->Controls->Add(this->RestartGame);
			this->Controls->Add(this->RoundStart);
			this->Controls->Add(this->NameCPU);
			this->Controls->Add(this->NamePlayer);
			this->Controls->Add(this->pictureBoxCPU);
			this->Controls->Add(this->ScoreCPU);
			this->Controls->Add(this->ScorePlayer);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Timer);
			this->Controls->Add(this->pictureBoxPlayer);
			this->Controls->Add(this->radioButtonRock);
			this->Controls->Add(this->radioButtonScissors);
			this->Controls->Add(this->radioButtonPaper);
			this->Controls->Add(this->BackToMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MiniGame";
			this->Text = L"MiniGame";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCPU))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void restart()
	{
		if (radioButtonRock->Checked)
			radioButtonRock->Checked = false;
		if (radioButtonPaper->Checked)
			radioButtonPaper->Checked = false;
		if (radioButtonScissors->Checked)
			radioButtonScissors->Checked = false;
		RoundStart->Enabled = true;

		pictureBoxPlayer->Image = imageQ;
		pictureBoxCPU->Image = imageQ;

		choicePlayer = "";
		choiceCPU = "";

		RoundTimer->Enabled = false;

		time_count = 5;
		Timer->Text = time_count.ToString();

		scorePlayer = 0;
		scoreCPU = 0; 

		ScorePlayer->Text = (scorePlayer.ToString());
		ScoreCPU->Text = (scoreCPU.ToString());
	}
	private: System::Void radioButtonRock_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		choicePlayer = "rock";
		pictureBoxPlayer->Image = imageRock;
	}
	private: System::Void radioButtonScissors_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		choicePlayer = "scissors";
		pictureBoxPlayer->Image = imageScissors;
	}
	private: System::Void radioButtonPaper_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		choicePlayer = "paper";
		pictureBoxPlayer->Image = imagePaper;
	}
	private: System::Void RoundStart_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (choicePlayer == "")
		{
			MessageBox::Show("Сделайте выбор!");
		}
		else
		{
			RoundStart->Enabled = false;
			RoundTimer->Enabled = true;
		}
	}
	private: System::Void RestartGame_Click(System::Object^ sender, System::EventArgs^ e)
	{
		restart();
	}

	private: System::Void BackToMenu_Click(System::Object^ sender, System::EventArgs^ e)
	{
		BackForm->Show();
		this->Close();
	}
	private: System::Void RoundTimer_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		time_count--;
		Timer->Text = (time_count.ToString());

		if (time_count == 0)
		{
			RoundTimer->Enabled = false;
			time_count = 5;
			Timer->Text = (time_count.ToString());

			srand(time(NULL));
			int choice = rand() % 3;

			switch (choice)
			{
			case 0:
			{
				choiceCPU = "rock";
				pictureBoxCPU->Image = imageRock;
				break;

			}
			case 1:
			{
				choiceCPU = "paper";
				pictureBoxCPU->Image = imagePaper;
				break;
			}
			case 2:
			{
				choiceCPU = "scissors";
				pictureBoxCPU->Image = imageScissors;
			}
			}
			if ((choicePlayer == "rock") && (choiceCPU == "scissors"))
			{
				scorePlayer++;
				MessageBox::Show("Вы выйграли. Камень ломает ножницы !");

			}
			else if ((choicePlayer == "scissors") && (choiceCPU == "paper"))
			{
				scorePlayer++;
				MessageBox::Show("Вы выйграли. Ножницы режут бумагу!");

			}
			else if ((choicePlayer == "paper") && (choiceCPU == "rock"))
			{
				scorePlayer++;
				MessageBox::Show("Вы выйграли. Бумага накрывает камень!");

			}
			else if ((choiceCPU == "rock") && (choicePlayer == "scissors"))
			{
				scoreCPU++;
				MessageBox::Show("Вы проиграли. Камень ломает ножницы !");

			}
			else if ((choiceCPU == "scissors") && (choicePlayer == "paper"))
			{
				scoreCPU++;
				MessageBox::Show("Вы проиграли. Ножницы режут бумагу!");

			}
			else if ((choiceCPU == "paper") && (choicePlayer == "rock"))
			{
				scoreCPU++;
				MessageBox::Show("Вы проиграли. Бумага накрывает камень!");

			}
			else
				MessageBox::Show("Ничья");

			ScorePlayer->Text = (scorePlayer.ToString());
			ScoreCPU->Text = (scoreCPU.ToString());

			pictureBoxCPU->Image = imageQ;
			RoundStart->Enabled = true;

			if (scorePlayer == 3)
			{
				MessageBox::Show("Поздравляем, вы победили!");
				restart();
			}
			if (scoreCPU == 3)
			{
				MessageBox::Show("К сожалению, вы проиграли!");
				restart();
			}
		}
	}
};
}
