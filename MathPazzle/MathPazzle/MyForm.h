#pragma once
#include <cstdlib>
#include <time.h>

namespace MathPazzle {

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
		// переменные хранящие в себе два рандомных числа для их сложения в label
		int addend1, addend2;

		// слогаемые вычитания
		int minued, subtrahend;

		// слогаемые умножения
		int umn1, umn2;

		//слогаемые деления
		int del1, del2;




	private: System::Windows::Forms::Timer^  timer1;
	public:

	public:

		int timeLeft;

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
	private: System::Windows::Forms::Label^  timeLabel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  plusLeftLabel;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  plusRightLabel;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  sum;
	private: System::Windows::Forms::NumericUpDown^  difference;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  minusRightLabel;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  minusLeftLabel;
	private: System::Windows::Forms::NumericUpDown^  product;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  timesRightLabel;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  timesLeftLabel;
	private: System::Windows::Forms::NumericUpDown^  quotient;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  dividedRightLabel;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  dividedLeftLabel;
	private: System::Windows::Forms::Button^  startButton;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timeLabel1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->plusLeftLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->plusRightLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sum = (gcnew System::Windows::Forms::NumericUpDown());
			this->difference = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->minusRightLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->minusLeftLabel = (gcnew System::Windows::Forms::Label());
			this->product = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timesRightLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timesLeftLabel = (gcnew System::Windows::Forms::Label());
			this->quotient = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dividedRightLabel = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dividedLeftLabel = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->difference))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->product))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quotient))->BeginInit();
			this->SuspendLayout();
			// 
			// timeLabel1
			// 
			this->timeLabel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->timeLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeLabel1->Location = System::Drawing::Point(280, 0);
			this->timeLabel1->Name = L"timeLabel1";
			this->timeLabel1->Size = System::Drawing::Size(200, 30);
			this->timeLabel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Оставшееся время:";
			// 
			// plusLeftLabel
			// 
			this->plusLeftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plusLeftLabel->Location = System::Drawing::Point(50, 75);
			this->plusLeftLabel->Name = L"plusLeftLabel";
			this->plusLeftLabel->Size = System::Drawing::Size(60, 50);
			this->plusLeftLabel->TabIndex = 2;
			this->plusLeftLabel->Text = L"\?";
			this->plusLeftLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(137, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 50);
			this->label2->TabIndex = 3;
			this->label2->Text = L"+";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// plusRightLabel
			// 
			this->plusRightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plusRightLabel->Location = System::Drawing::Point(215, 75);
			this->plusRightLabel->Name = L"plusRightLabel";
			this->plusRightLabel->Size = System::Drawing::Size(60, 50);
			this->plusRightLabel->TabIndex = 4;
			this->plusRightLabel->Text = L"\?";
			this->plusRightLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(281, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 50);
			this->label4->TabIndex = 5;
			this->label4->Text = L"=";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// sum
			// 
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sum->Location = System::Drawing::Point(347, 84);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(100, 41);
			this->sum->TabIndex = 2;
			this->sum->Enter += gcnew System::EventHandler(this, &MyForm::answer_Enter);
			// 
			// difference
			// 
			this->difference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->difference->Location = System::Drawing::Point(347, 156);
			this->difference->Name = L"difference";
			this->difference->Size = System::Drawing::Size(100, 41);
			this->difference->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(281, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 50);
			this->label3->TabIndex = 10;
			this->label3->Text = L"=";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// minusRightLabel
			// 
			this->minusRightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minusRightLabel->Location = System::Drawing::Point(215, 151);
			this->minusRightLabel->Name = L"minusRightLabel";
			this->minusRightLabel->Size = System::Drawing::Size(60, 50);
			this->minusRightLabel->TabIndex = 9;
			this->minusRightLabel->Text = L"\?";
			this->minusRightLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(137, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 50);
			this->label6->TabIndex = 8;
			this->label6->Text = L"-";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// minusLeftLabel
			// 
			this->minusLeftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minusLeftLabel->Location = System::Drawing::Point(50, 151);
			this->minusLeftLabel->Name = L"minusLeftLabel";
			this->minusLeftLabel->Size = System::Drawing::Size(60, 50);
			this->minusLeftLabel->TabIndex = 7;
			this->minusLeftLabel->Text = L"\?";
			this->minusLeftLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// product
			// 
			this->product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->product->Location = System::Drawing::Point(347, 224);
			this->product->Name = L"product";
			this->product->Size = System::Drawing::Size(100, 41);
			this->product->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(281, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 50);
			this->label5->TabIndex = 15;
			this->label5->Text = L"=";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timesRightLabel
			// 
			this->timesRightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timesRightLabel->Location = System::Drawing::Point(215, 219);
			this->timesRightLabel->Name = L"timesRightLabel";
			this->timesRightLabel->Size = System::Drawing::Size(60, 50);
			this->timesRightLabel->TabIndex = 14;
			this->timesRightLabel->Text = L"\?";
			this->timesRightLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(137, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 50);
			this->label8->TabIndex = 13;
			this->label8->Text = L"*";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timesLeftLabel
			// 
			this->timesLeftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timesLeftLabel->Location = System::Drawing::Point(50, 219);
			this->timesLeftLabel->Name = L"timesLeftLabel";
			this->timesLeftLabel->Size = System::Drawing::Size(60, 50);
			this->timesLeftLabel->TabIndex = 12;
			this->timesLeftLabel->Text = L"\?";
			this->timesLeftLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// quotient
			// 
			this->quotient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->quotient->Location = System::Drawing::Point(347, 299);
			this->quotient->Name = L"quotient";
			this->quotient->Size = System::Drawing::Size(100, 41);
			this->quotient->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(281, 294);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 50);
			this->label10->TabIndex = 20;
			this->label10->Text = L"=";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dividedRightLabel
			// 
			this->dividedRightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dividedRightLabel->Location = System::Drawing::Point(215, 294);
			this->dividedRightLabel->Name = L"dividedRightLabel";
			this->dividedRightLabel->Size = System::Drawing::Size(60, 50);
			this->dividedRightLabel->TabIndex = 19;
			this->dividedRightLabel->Text = L"\?";
			this->dividedRightLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(137, 294);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 50);
			this->label12->TabIndex = 18;
			this->label12->Text = L"÷";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dividedLeftLabel
			// 
			this->dividedLeftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dividedLeftLabel->Location = System::Drawing::Point(50, 294);
			this->dividedLeftLabel->Name = L"dividedLeftLabel";
			this->dividedLeftLabel->Size = System::Drawing::Size(60, 50);
			this->dividedLeftLabel->TabIndex = 17;
			this->dividedLeftLabel->Text = L"\?";
			this->dividedLeftLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// startButton
			// 
			this->startButton->AutoSize = true;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startButton->Location = System::Drawing::Point(127, 365);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(262, 39);
			this->startButton->TabIndex = 1;
			this->startButton->Text = L"Запуск головоломки";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 416);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->quotient);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dividedRightLabel);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->dividedLeftLabel);
			this->Controls->Add(this->product);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->timesRightLabel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->timesLeftLabel);
			this->Controls->Add(this->difference);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->minusRightLabel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->minusLeftLabel);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->plusRightLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->plusLeftLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->timeLabel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Математическая говоломка";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->difference))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->product))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quotient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	
}

public: void StartTheQuiz()
	{
		//Рандомизация от времени
		srand(time(0));

		// Рандомизация двух чисел
		addend1 = rand() % 50;
		addend2 = rand() % 50;

		// Вывод в label преобразованных в тип string двух чисел
		plusLeftLabel->Text = addend1.ToString();
		
		plusRightLabel->Text = addend2.ToString();

		// Значение sum обнуляется
		sum->Value = 0;

		//Рандомизация чисел на удаление
		minued = rand() % 100 + 1;
		subtrahend = rand() % minued + 1;

	

		minusLeftLabel->Text = minued.ToString();
		minusRightLabel->Text = subtrahend.ToString();

		difference->Value = 0;


		//Рандомизация слогаемых умножения
		umn1 = rand() % 11 + 2;
		umn2 = rand() % 11 + 2;

		//Заполнение неизвестных слогаемых слогаемыми umn1 и umn2
		timesLeftLabel->Text = umn1.ToString();
		timesRightLabel->Text = umn2.ToString();

		product->Value = 0;

		//Рандомизация слогаемых деления
		del2 = rand() % 11 + 2;
		int n = rand() % 11 + 2;
		del1 = del2 * n;

		//Заполнение неизвестных слогаемых слогаемыми del1 и del2
		dividedLeftLabel->Text = del1.ToString();
		dividedRightLabel->Text = del2.ToString();

		quotient->Value = 0;

		


		//  Задается начальное время отсчета
		timeLeft = 30;
		
		timeLabel1->Text = "30 секунд";
		// Запуск таймера
		timer1->Start();
		
	}

//Проверяет ответ пользователя и действительный ответ на правильность
private: bool CheckTheAnsewer()
	{
	if ((addend1 + addend2 == sum->Value) && (minued - subtrahend == difference->Value) && (umn1 * umn2 == product->Value) && (del1 / del2 == quotient->Value))
		{
		return true;
		}
	else
	{
		return false;
	}
	}

private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	StartTheQuiz();
	startButton->Enabled = false;

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{

	if (CheckTheAnsewer())
	{
		timer1->Stop();
		MessageBox::Show("Вы правильно ответили");
		startButton->Enabled = true;
	}

		// Если время ещё есть отсчет продолжается
		// Если нет то таймер станавливается и выводится ссответствующее сообщение
		else if (timeLeft > 0)
			{
				timeLeft -= 1;
				timeLabel1->Text = timeLeft.ToString() + " секунд";
			}

		else
			{
				timer1->Stop();
				timeLabel1->Text = "Время закончилось!";

				MessageBox::Show("У вас закончилось время. Вы проиграли");

				sum->Value = addend1 + addend2;
				difference->Value = minued - subtrahend;
				product->Value = umn1 * umn2;
				quotient->Value = del1 / del2;

				startButton->Enabled = true;
			}
	}


	private: System::Void answer_Enter(System::Object^  sender, System::EventArgs^  e)
	{
	}

};
}
