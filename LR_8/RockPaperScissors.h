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
	/// Сводка для RockPaperScissors
	/// </summary>
	public ref class RockPaperScissors : public System::Windows::Forms::Form
	{
	public:
		RockPaperScissors(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		RockPaperScissors(System::Windows::Forms::Form^ frm1)
		{
			RockPaperScissors();
			BackForm = frm1;
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RockPaperScissors()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBoxCPU;
	private: System::Windows::Forms::Label^ Player;
	private: System::Windows::Forms::Label^ CPU;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Back;
	private: System::Windows::Forms::Button^ Start_game;
	private: System::Windows::Forms::Label^ Choiсe;

	private: System::Windows::Forms::PictureBox^ pictureBoxPlayer;
	private: System::Windows::Forms::Label^ Timer;
	private: System::Windows::Forms::Timer^ RoundTimer;
	private: System::Windows::Forms::Label^ ScorePlayer;
	private: System::Windows::Forms::Label^ ScoreCPU;
	private: System::Windows::Forms::RadioButton^ radioButtonRock;
	private: System::Windows::Forms::RadioButton^ radioButtonScissors;
	private: System::Windows::Forms::RadioButton^ radioButtonPaper;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RockPaperScissors::typeid));
			this->pictureBoxCPU = (gcnew System::Windows::Forms::PictureBox());
			this->Player = (gcnew System::Windows::Forms::Label());
			this->CPU = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->Start_game = (gcnew System::Windows::Forms::Button());
			this->Choiсe = (gcnew System::Windows::Forms::Label());
			this->pictureBoxPlayer = (gcnew System::Windows::Forms::PictureBox());
			this->Timer = (gcnew System::Windows::Forms::Label());
			this->RoundTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->ScorePlayer = (gcnew System::Windows::Forms::Label());
			this->ScoreCPU = (gcnew System::Windows::Forms::Label());
			this->radioButtonRock = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonScissors = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPaper = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCPU))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlayer))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBoxCPU
			// 
			this->pictureBoxCPU->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCPU.Image")));
			this->pictureBoxCPU->Location = System::Drawing::Point(442, 50);
			this->pictureBoxCPU->Name = L"pictureBoxCPU";
			this->pictureBoxCPU->Size = System::Drawing::Size(200, 200);
			this->pictureBoxCPU->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCPU->TabIndex = 1;
			this->pictureBoxCPU->TabStop = false;
			// 
			// Player
			// 
			this->Player->AutoSize = true;
			this->Player->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Player->Location = System::Drawing::Point(247, 13);
			this->Player->Name = L"Player";
			this->Player->Size = System::Drawing::Size(75, 25);
			this->Player->TabIndex = 2;
			this->Player->Text = L"Игрок";
			// 
			// CPU
			// 
			this->CPU->AutoSize = true;
			this->CPU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CPU->Location = System::Drawing::Point(479, 13);
			this->CPU->Name = L"CPU";
			this->CPU->Size = System::Drawing::Size(135, 25);
			this->CPU->TabIndex = 3;
			this->CPU->Text = L"Компьютер";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 40);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Рестарт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RockPaperScissors::button1_Click);
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Back->Location = System::Drawing::Point(12, 252);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(120, 40);
			this->Back->TabIndex = 6;
			this->Back->Text = L"Назад в меню";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &RockPaperScissors::Back_Click);
			// 
			// Start_game
			// 
			this->Start_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Start_game->Location = System::Drawing::Point(12, 148);
			this->Start_game->Name = L"Start_game";
			this->Start_game->Size = System::Drawing::Size(120, 40);
			this->Start_game->TabIndex = 7;
			this->Start_game->Text = L"Начать раунд";
			this->Start_game->UseVisualStyleBackColor = true;
			this->Start_game->Click += gcnew System::EventHandler(this, &RockPaperScissors::Start_game_Click);
			// 
			// Choiсe
			// 
			this->Choiсe->AutoSize = true;
			this->Choiсe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Choiсe->Location = System::Drawing::Point(7, 50);
			this->Choiсe->Name = L"Choiсe";
			this->Choiсe->Size = System::Drawing::Size(132, 25);
			this->Choiсe->TabIndex = 10;
			this->Choiсe->Text = L"Ваш выбор";
			// 
			// pictureBoxPlayer
			// 
			this->pictureBoxPlayer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxPlayer.Image")));
			this->pictureBoxPlayer->Location = System::Drawing::Point(182, 50);
			this->pictureBoxPlayer->Name = L"pictureBoxPlayer";
			this->pictureBoxPlayer->Size = System::Drawing::Size(200, 200);
			this->pictureBoxPlayer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxPlayer->TabIndex = 0;
			this->pictureBoxPlayer->TabStop = false;
			// 
			// Timer
			// 
			this->Timer->AutoSize = true;
			this->Timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Timer->Location = System::Drawing::Point(397, 147);
			this->Timer->Name = L"Timer";
			this->Timer->Size = System::Drawing::Size(30, 31);
			this->Timer->TabIndex = 12;
			this->Timer->Text = L"5";
			// 
			// RoundTimer
			// 
			this->RoundTimer->Interval = 1000;
			this->RoundTimer->Tick += gcnew System::EventHandler(this, &RockPaperScissors::RoundTimer_Tick);
			// 
			// ScorePlayer
			// 
			this->ScorePlayer->AutoSize = true;
			this->ScorePlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ScorePlayer->Location = System::Drawing::Point(265, 256);
			this->ScorePlayer->Name = L"ScorePlayer";
			this->ScorePlayer->Size = System::Drawing::Size(37, 39);
			this->ScorePlayer->TabIndex = 13;
			this->ScorePlayer->Text = L"0";
			// 
			// ScoreCPU
			// 
			this->ScoreCPU->AutoSize = true;
			this->ScoreCPU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ScoreCPU->Location = System::Drawing::Point(522, 256);
			this->ScoreCPU->Name = L"ScoreCPU";
			this->ScoreCPU->Size = System::Drawing::Size(37, 39);
			this->ScoreCPU->TabIndex = 14;
			this->ScoreCPU->Text = L"0";
			// 
			// radioButtonRock
			// 
			this->radioButtonRock->AutoSize = true;
			this->radioButtonRock->Location = System::Drawing::Point(38, 78);
			this->radioButtonRock->Name = L"radioButtonRock";
			this->radioButtonRock->Size = System::Drawing::Size(64, 17);
			this->radioButtonRock->TabIndex = 15;
			this->radioButtonRock->TabStop = true;
			this->radioButtonRock->Text = L"Камень";
			this->radioButtonRock->UseVisualStyleBackColor = true;
			this->radioButtonRock->CheckedChanged += gcnew System::EventHandler(this, &RockPaperScissors::radioButtonRock_CheckedChanged);
			// 
			// radioButtonScissors
			// 
			this->radioButtonScissors->AutoSize = true;
			this->radioButtonScissors->Location = System::Drawing::Point(38, 101);
			this->radioButtonScissors->Name = L"radioButtonScissors";
			this->radioButtonScissors->Size = System::Drawing::Size(73, 17);
			this->radioButtonScissors->TabIndex = 16;
			this->radioButtonScissors->TabStop = true;
			this->radioButtonScissors->Text = L"Ножницы";
			this->radioButtonScissors->UseVisualStyleBackColor = true;
			this->radioButtonScissors->CheckedChanged += gcnew System::EventHandler(this, &RockPaperScissors::radioButtonScissors_CheckedChanged);
			// 
			// radioButtonPaper
			// 
			this->radioButtonPaper->AutoSize = true;
			this->radioButtonPaper->Location = System::Drawing::Point(38, 124);
			this->radioButtonPaper->Name = L"radioButtonPaper";
			this->radioButtonPaper->Size = System::Drawing::Size(62, 17);
			this->radioButtonPaper->TabIndex = 17;
			this->radioButtonPaper->TabStop = true;
			this->radioButtonPaper->Text = L"Бумага";
			this->radioButtonPaper->UseVisualStyleBackColor = true;
			this->radioButtonPaper->CheckedChanged += gcnew System::EventHandler(this, &RockPaperScissors::radioButtonPaper_CheckedChanged);
			// 
			// RockPaperScissors
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 304);
			this->Controls->Add(this->radioButtonPaper);
			this->Controls->Add(this->radioButtonScissors);
			this->Controls->Add(this->radioButtonRock);
			this->Controls->Add(this->ScoreCPU);
			this->Controls->Add(this->ScorePlayer);
			this->Controls->Add(this->Timer);
			this->Controls->Add(this->Choiсe);
			this->Controls->Add(this->Start_game);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CPU);
			this->Controls->Add(this->Player);
			this->Controls->Add(this->pictureBoxCPU);
			this->Controls->Add(this->pictureBoxPlayer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RockPaperScissors";
			this->Text = L"RockPaperScissors";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCPU))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlayer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void restart()
	{
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

	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e)
	{
		BackForm->Show();
		this->Hide();
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
	private: System::Void RoundTimer_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		time_count --;		
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
				scorePlayer ++;
				MessageBox::Show("Вы выйграли. Камень ломает ножницы !");

			}else if ((choicePlayer == "scissors") && (choiceCPU == "paper"))
			{
				scorePlayer++;
				MessageBox::Show("Вы выйграли. Ножницы режут бумагу!");

			}
			else if ((choicePlayer == "paper") && (choiceCPU == "rock"))
			{
				scorePlayer++;
				MessageBox::Show("Вы выйграли. Бумага накрывает камень!");

			}else if((choiceCPU  == "rock") && (choicePlayer == "scissors"))
			{
				scoreCPU++;
				MessageBox::Show("Вы проиграли. Камень ломает ножницы !");

			}
			else if ((choiceCPU == "scissors") && (choicePlayer  == "paper"))
			{
				scoreCPU++;
				MessageBox::Show("Вы проиграли. Ножницы режут бумагу!");

			}
			else if ((choiceCPU  == "paper") && (choicePlayer == "rock"))
			{
				scoreCPU++;
				MessageBox::Show("Вы проиграли. Бумага накрывает камень!");

			}else
				MessageBox::Show("Ничья");

			ScorePlayer->Text = (scorePlayer.ToString());
			ScoreCPU->Text = (scoreCPU.ToString());		
			
			pictureBoxCPU->Image = imageQ;
			Start_game->Enabled = true;

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
	private: System::Void Start_game_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (choicePlayer == "")
		{
			MessageBox::Show("Сделайте выбор!");
		}
		else
		{
			Start_game->Enabled = false;
			RoundTimer->Enabled = true;
		}
			
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	restart();
}

};
}
