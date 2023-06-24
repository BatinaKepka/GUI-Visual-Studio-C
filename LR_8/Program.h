#pragma once

#include "MyPoint.h"
#include "Line.h"
#include "Triangle.h"
#include "Sphere.h"
#include "vector"
//#include <msclr/marshal_cppstd.h>





namespace LR8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;	
	
	/// <summary>
	/// Сводка для Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		Program(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Program(System::Windows::Forms::Form^ frm1):Program()
		{
			BackForm1 = frm1;
		}	

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int countPoint = 0;
	private: int countLineSegment = 0;
	private: int countTriangle = 0;
	private: int countSphere = 0;

	private: System::Windows::Forms::Button^ DeletePoint;
	private: System::Windows::Forms::Button^ CreatingPoint;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemExit;
	private: System::Windows::Forms::Form^ BackForm1;
	private: System::Windows::Forms::ListView^ listViewPoint;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::ColumnHeader^ NameObject;
	private: System::Windows::Forms::ColumnHeader^ X;
	private: System::Windows::Forms::ColumnHeader^ Y;
	private: System::Windows::Forms::ColumnHeader^ Z;
	private: System::Windows::Forms::TextBox^ textBoxPointZ;
	private: System::Windows::Forms::TextBox^ textBoxPointY;
	private: System::Windows::Forms::TextBox^ textBoxPointX;
	private: System::Windows::Forms::TextBox^ textBoxPointName;
	private: System::Windows::Forms::Label^ labelNamePoint;
	private: System::Windows::Forms::Label^ labelPointX;
	private: System::Windows::Forms::Label^ labelPointY;
	private: System::Windows::Forms::Label^ labelPointZ;
	private: System::Windows::Forms::GroupBox^ groupBoxCPoint;
	private: System::Windows::Forms::GroupBox^ groupBoxDPoint;
	private: System::Windows::Forms::TextBox^ textBoxDeletePoint;
	private: System::Windows::Forms::ColumnHeader^ CounterPoint;
	private: System::Windows::Forms::GroupBox^ groupBoxCLineSegment;
	private: System::Windows::Forms::Label^ labelNamesPointLineSegment;
	private: System::Windows::Forms::Label^ labelFPointLineSegment;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentFPointX;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentFPointName;
	private: System::Windows::Forms::Label^ labelXPointLineSegment;
	private: System::Windows::Forms::Label^ labelYPointLineSegment;
	private: System::Windows::Forms::Label^ labelZPointLineSegment;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentFPointZ;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentFPointY;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentSPointZ;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentSPointY;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentSPointX;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentSPointName;
	private: System::Windows::Forms::Label^ labelSPointLineSegment;
	private: System::Windows::Forms::ToolStripMenuItem^ назадToolStripMenuItemBack;
	private: System::Windows::Forms::Button^ CreatingLineSegment;
	private: System::Windows::Forms::GroupBox^ groupBoxDLineSegment;
	private: System::Windows::Forms::TextBox^ textBoxDeleteLineSegment;
	private: System::Windows::Forms::Button^ DeleteLineSegment;
	private: System::Windows::Forms::TextBox^ textBoxLineSegmentName;
	private: System::Windows::Forms::CheckBox^ checkBoxNameLineSegment;
	private: System::Windows::Forms::ListView^ listViewLineSegment;
	private: System::Windows::Forms::ColumnHeader^ CounterLineSegment;
	private: System::Windows::Forms::ColumnHeader^ LineSegmentName;
	private: System::Windows::Forms::ColumnHeader^ LineSegmentFP;
	private: System::Windows::Forms::ColumnHeader^ LineSegmentSP;
	private: System::Windows::Forms::GroupBox^ groupBoxCTriangle;
	private: System::Windows::Forms::TextBox^ textBoxTriangleName;
	private: System::Windows::Forms::CheckBox^ checkBoxNameTriangle;
	private: System::Windows::Forms::Button^ CreatingTriangle;
	private: System::Windows::Forms::TextBox^ textBoxTriangleSPointZ;
	private: System::Windows::Forms::TextBox^ textBoxTriangleSPointY;
	private: System::Windows::Forms::TextBox^ textBoxTriangleSPointX;
	private: System::Windows::Forms::TextBox^ textBoxTriangleSPointName;
	private: System::Windows::Forms::Label^ labelSPointTriangle;
	private: System::Windows::Forms::Label^ labelZPointTriangle;
	private: System::Windows::Forms::TextBox^ textBoxTriangleFPointY;
	private: System::Windows::Forms::TextBox^ textBoxTriangleFPointX;
	private: System::Windows::Forms::TextBox^ textBoxTriangleFPointName;
	private: System::Windows::Forms::Label^ labelYPointTriangle;
	private: System::Windows::Forms::Label^ labelNamesPointTriangle;
	private: System::Windows::Forms::Label^ labelXPointTriangle;
	private: System::Windows::Forms::Label^ labelFPointTriangle;
	private: System::Windows::Forms::TextBox^ textBoxTriangleFPointZ;
	private: System::Windows::Forms::GroupBox^ groupBoxCSphere;
	private: System::Windows::Forms::TextBox^ textBoxSphereName;
	private: System::Windows::Forms::CheckBox^ checkBoxNameSphere;
	private: System::Windows::Forms::Button^ CreatingSpehre;
	private: System::Windows::Forms::TextBox^ textBoxSphereRadius;
	private: System::Windows::Forms::Label^ labelRadiusSphere;
	private: System::Windows::Forms::Label^ labelZCentreSphere;
	private: System::Windows::Forms::TextBox^ textBoxSphereCentreY;
	private: System::Windows::Forms::TextBox^ textBoxSphereCentreX;
	private: System::Windows::Forms::TextBox^ textBoxSphereCentreName;
	private: System::Windows::Forms::Label^ labelYCentreSphere;
	private: System::Windows::Forms::Label^ labelNameCentreSphere;
	private: System::Windows::Forms::Label^ labelXCentreSphere;
	private: System::Windows::Forms::Label^ labelCentreSphere;
	private: System::Windows::Forms::TextBox^ textBoxSphereCentreZ;
	private: System::Windows::Forms::GroupBox^ groupBoxDTriangle;
	private: System::Windows::Forms::TextBox^ textBoxDeleteTriangle;
	private: System::Windows::Forms::Button^ DeleteTriangle;
	private: System::Windows::Forms::GroupBox^ groupBoxDSphere;
	private: System::Windows::Forms::TextBox^ textBoxDeleteSphere;
	private: System::Windows::Forms::Button^ DeleteSphere;
	private: System::Windows::Forms::ListView^ listViewTriangle;
	private: System::Windows::Forms::ColumnHeader^ CounterTriangle;
	private: System::Windows::Forms::ColumnHeader^ TriangleName;
	private: System::Windows::Forms::ColumnHeader^ TriangleFP;
	private: System::Windows::Forms::ColumnHeader^ TriangleSP;
	private: System::Windows::Forms::ListView^ listViewSphere;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::ColumnHeader^ TriangleTP;
	private: System::Windows::Forms::TextBox^ textBoxTriangleTPointZ;
	private: System::Windows::Forms::TextBox^ textBoxTriangleTPointY;
	private: System::Windows::Forms::TextBox^ textBoxTriangleTPointX;
	private: System::Windows::Forms::TextBox^ textBoxTriangleTPointName;
	private: System::Windows::Forms::Label^ labelTPointTriangle;


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
			this->DeletePoint = (gcnew System::Windows::Forms::Button());
			this->CreatingPoint = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назадToolStripMenuItemBack = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listViewPoint = (gcnew System::Windows::Forms::ListView());
			this->CounterPoint = (gcnew System::Windows::Forms::ColumnHeader());
			this->NameObject = (gcnew System::Windows::Forms::ColumnHeader());
			this->X = (gcnew System::Windows::Forms::ColumnHeader());
			this->Y = (gcnew System::Windows::Forms::ColumnHeader());
			this->Z = (gcnew System::Windows::Forms::ColumnHeader());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->textBoxPointZ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPointY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPointX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPointName = (gcnew System::Windows::Forms::TextBox());
			this->labelNamePoint = (gcnew System::Windows::Forms::Label());
			this->labelPointX = (gcnew System::Windows::Forms::Label());
			this->labelPointY = (gcnew System::Windows::Forms::Label());
			this->labelPointZ = (gcnew System::Windows::Forms::Label());
			this->groupBoxCPoint = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxDPoint = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDeletePoint = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxCLineSegment = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxLineSegmentName = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxNameLineSegment = (gcnew System::Windows::Forms::CheckBox());
			this->CreatingLineSegment = (gcnew System::Windows::Forms::Button());
			this->textBoxLineSegmentSPointZ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLineSegmentSPointY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLineSegmentSPointX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLineSegmentSPointName = (gcnew System::Windows::Forms::TextBox());
			this->labelSPointLineSegment = (gcnew System::Windows::Forms::Label());
			this->labelZPointLineSegment = (gcnew System::Windows::Forms::Label());
			this->textBoxLineSegmentFPointY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLineSegmentFPointX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLineSegmentFPointName = (gcnew System::Windows::Forms::TextBox());
			this->labelYPointLineSegment = (gcnew System::Windows::Forms::Label());
			this->labelNamesPointLineSegment = (gcnew System::Windows::Forms::Label());
			this->labelXPointLineSegment = (gcnew System::Windows::Forms::Label());
			this->labelFPointLineSegment = (gcnew System::Windows::Forms::Label());
			this->textBoxLineSegmentFPointZ = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxDLineSegment = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDeleteLineSegment = (gcnew System::Windows::Forms::TextBox());
			this->DeleteLineSegment = (gcnew System::Windows::Forms::Button());
			this->listViewLineSegment = (gcnew System::Windows::Forms::ListView());
			this->CounterLineSegment = (gcnew System::Windows::Forms::ColumnHeader());
			this->LineSegmentName = (gcnew System::Windows::Forms::ColumnHeader());
			this->LineSegmentFP = (gcnew System::Windows::Forms::ColumnHeader());
			this->LineSegmentSP = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBoxCTriangle = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxTriangleTPointZ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleTPointY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleTPointX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleTPointName = (gcnew System::Windows::Forms::TextBox());
			this->labelTPointTriangle = (gcnew System::Windows::Forms::Label());
			this->textBoxTriangleName = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxNameTriangle = (gcnew System::Windows::Forms::CheckBox());
			this->CreatingTriangle = (gcnew System::Windows::Forms::Button());
			this->textBoxTriangleSPointZ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleSPointY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleSPointX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleSPointName = (gcnew System::Windows::Forms::TextBox());
			this->labelSPointTriangle = (gcnew System::Windows::Forms::Label());
			this->labelZPointTriangle = (gcnew System::Windows::Forms::Label());
			this->textBoxTriangleFPointY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleFPointX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTriangleFPointName = (gcnew System::Windows::Forms::TextBox());
			this->labelYPointTriangle = (gcnew System::Windows::Forms::Label());
			this->labelNamesPointTriangle = (gcnew System::Windows::Forms::Label());
			this->labelXPointTriangle = (gcnew System::Windows::Forms::Label());
			this->labelFPointTriangle = (gcnew System::Windows::Forms::Label());
			this->textBoxTriangleFPointZ = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxCSphere = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxSphereName = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxNameSphere = (gcnew System::Windows::Forms::CheckBox());
			this->CreatingSpehre = (gcnew System::Windows::Forms::Button());
			this->textBoxSphereRadius = (gcnew System::Windows::Forms::TextBox());
			this->labelRadiusSphere = (gcnew System::Windows::Forms::Label());
			this->labelZCentreSphere = (gcnew System::Windows::Forms::Label());
			this->textBoxSphereCentreY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSphereCentreX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSphereCentreName = (gcnew System::Windows::Forms::TextBox());
			this->labelYCentreSphere = (gcnew System::Windows::Forms::Label());
			this->labelNameCentreSphere = (gcnew System::Windows::Forms::Label());
			this->labelXCentreSphere = (gcnew System::Windows::Forms::Label());
			this->labelCentreSphere = (gcnew System::Windows::Forms::Label());
			this->textBoxSphereCentreZ = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxDTriangle = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDeleteTriangle = (gcnew System::Windows::Forms::TextBox());
			this->DeleteTriangle = (gcnew System::Windows::Forms::Button());
			this->groupBoxDSphere = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDeleteSphere = (gcnew System::Windows::Forms::TextBox());
			this->DeleteSphere = (gcnew System::Windows::Forms::Button());
			this->listViewTriangle = (gcnew System::Windows::Forms::ListView());
			this->CounterTriangle = (gcnew System::Windows::Forms::ColumnHeader());
			this->TriangleName = (gcnew System::Windows::Forms::ColumnHeader());
			this->TriangleFP = (gcnew System::Windows::Forms::ColumnHeader());
			this->TriangleSP = (gcnew System::Windows::Forms::ColumnHeader());
			this->TriangleTP = (gcnew System::Windows::Forms::ColumnHeader());
			this->listViewSphere = (gcnew System::Windows::Forms::ListView());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->groupBoxCPoint->SuspendLayout();
			this->groupBoxDPoint->SuspendLayout();
			this->groupBoxCLineSegment->SuspendLayout();
			this->groupBoxDLineSegment->SuspendLayout();
			this->groupBoxCTriangle->SuspendLayout();
			this->groupBoxCSphere->SuspendLayout();
			this->groupBoxDTriangle->SuspendLayout();
			this->groupBoxDSphere->SuspendLayout();
			this->SuspendLayout();
			// 
			// DeletePoint
			// 
			this->DeletePoint->Location = System::Drawing::Point(6, 19);
			this->DeletePoint->Name = L"DeletePoint";
			this->DeletePoint->Size = System::Drawing::Size(140, 22);
			this->DeletePoint->TabIndex = 0;
			this->DeletePoint->Text = L"Удалить точку";
			this->DeletePoint->UseVisualStyleBackColor = true;
			this->DeletePoint->Click += gcnew System::EventHandler(this, &Program::DeletePoint_Click);
			// 
			// CreatingPoint
			// 
			this->CreatingPoint->Location = System::Drawing::Point(6, 120);
			this->CreatingPoint->Name = L"CreatingPoint";
			this->CreatingPoint->Size = System::Drawing::Size(173, 21);
			this->CreatingPoint->TabIndex = 1;
			this->CreatingPoint->Text = L"Создать точку";
			this->CreatingPoint->UseVisualStyleBackColor = true;
			this->CreatingPoint->Click += gcnew System::EventHandler(this, &Program::CreatingPoint_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenu });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(990, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenu
			// 
			this->toolStripMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->назадToolStripMenuItemBack,
					this->ToolStripMenuItemExit
			});
			this->toolStripMenu->Name = L"toolStripMenu";
			this->toolStripMenu->Size = System::Drawing::Size(53, 20);
			this->toolStripMenu->Text = L"Меню";
			// 
			// назадToolStripMenuItemBack
			// 
			this->назадToolStripMenuItemBack->Name = L"назадToolStripMenuItemBack";
			this->назадToolStripMenuItemBack->Size = System::Drawing::Size(123, 22);
			this->назадToolStripMenuItemBack->Text = L"Назад";
			this->назадToolStripMenuItemBack->Click += gcnew System::EventHandler(this, &Program::назадToolStripMenuItemBack_Click);
			// 
			// ToolStripMenuItemExit
			// 
			this->ToolStripMenuItemExit->Name = L"ToolStripMenuItemExit";
			this->ToolStripMenuItemExit->Size = System::Drawing::Size(123, 22);
			this->ToolStripMenuItemExit->Text = L"Выход";
			this->ToolStripMenuItemExit->Click += gcnew System::EventHandler(this, &Program::ToolStripMenuItemExit_Click);
			// 
			// listViewPoint
			// 
			this->listViewPoint->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->CounterPoint,
					this->NameObject, this->X, this->Y, this->Z
			});
			this->listViewPoint->HideSelection = false;
			this->listViewPoint->Location = System::Drawing::Point(12, 233);
			this->listViewPoint->Name = L"listViewPoint";
			this->listViewPoint->Size = System::Drawing::Size(185, 280);
			this->listViewPoint->TabIndex = 4;
			this->listViewPoint->UseCompatibleStateImageBehavior = false;
			this->listViewPoint->View = System::Windows::Forms::View::Details;
			// 
			// CounterPoint
			// 
			this->CounterPoint->Text = L"№";
			this->CounterPoint->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CounterPoint->Width = 23;
			// 
			// NameObject
			// 
			this->NameObject->Text = L"Название";
			this->NameObject->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->NameObject->Width = 64;
			// 
			// X
			// 
			this->X->Text = L"X";
			this->X->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->X->Width = 25;
			// 
			// Y
			// 
			this->Y->Text = L"Y";
			this->Y->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Y->Width = 25;
			// 
			// Z
			// 
			this->Z->Text = L"Z";
			this->Z->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Z->Width = 25;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Red;
			this->buttonExit->Location = System::Drawing::Point(960, -1);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(24, 24);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"x";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Program::buttonExit_Click);
			// 
			// textBoxPointZ
			// 
			this->textBoxPointZ->Location = System::Drawing::Point(41, 91);
			this->textBoxPointZ->Name = L"textBoxPointZ";
			this->textBoxPointZ->Size = System::Drawing::Size(138, 20);
			this->textBoxPointZ->TabIndex = 6;
			// 
			// textBoxPointY
			// 
			this->textBoxPointY->Location = System::Drawing::Point(41, 65);
			this->textBoxPointY->Name = L"textBoxPointY";
			this->textBoxPointY->Size = System::Drawing::Size(138, 20);
			this->textBoxPointY->TabIndex = 7;
			// 
			// textBoxPointX
			// 
			this->textBoxPointX->Location = System::Drawing::Point(41, 39);
			this->textBoxPointX->Name = L"textBoxPointX";
			this->textBoxPointX->Size = System::Drawing::Size(138, 20);
			this->textBoxPointX->TabIndex = 8;
			// 
			// textBoxPointName
			// 
			this->textBoxPointName->Location = System::Drawing::Point(41, 13);
			this->textBoxPointName->Name = L"textBoxPointName";
			this->textBoxPointName->Size = System::Drawing::Size(138, 20);
			this->textBoxPointName->TabIndex = 9;
			// 
			// labelNamePoint
			// 
			this->labelNamePoint->AutoSize = true;
			this->labelNamePoint->Location = System::Drawing::Point(6, 16);
			this->labelNamePoint->Name = L"labelNamePoint";
			this->labelNamePoint->Size = System::Drawing::Size(29, 13);
			this->labelNamePoint->TabIndex = 10;
			this->labelNamePoint->Text = L"Имя";
			// 
			// labelPointX
			// 
			this->labelPointX->AutoSize = true;
			this->labelPointX->Location = System::Drawing::Point(6, 42);
			this->labelPointX->Name = L"labelPointX";
			this->labelPointX->Size = System::Drawing::Size(14, 13);
			this->labelPointX->TabIndex = 11;
			this->labelPointX->Text = L"X";
			// 
			// labelPointY
			// 
			this->labelPointY->AutoSize = true;
			this->labelPointY->Location = System::Drawing::Point(6, 68);
			this->labelPointY->Name = L"labelPointY";
			this->labelPointY->Size = System::Drawing::Size(14, 13);
			this->labelPointY->TabIndex = 12;
			this->labelPointY->Text = L"Y";
			// 
			// labelPointZ
			// 
			this->labelPointZ->AutoSize = true;
			this->labelPointZ->Location = System::Drawing::Point(6, 94);
			this->labelPointZ->Name = L"labelPointZ";
			this->labelPointZ->Size = System::Drawing::Size(14, 13);
			this->labelPointZ->TabIndex = 13;
			this->labelPointZ->Text = L"Z";
			// 
			// groupBoxCPoint
			// 
			this->groupBoxCPoint->Controls->Add(this->labelNamePoint);
			this->groupBoxCPoint->Controls->Add(this->textBoxPointName);
			this->groupBoxCPoint->Controls->Add(this->labelPointZ);
			this->groupBoxCPoint->Controls->Add(this->textBoxPointX);
			this->groupBoxCPoint->Controls->Add(this->labelPointY);
			this->groupBoxCPoint->Controls->Add(this->CreatingPoint);
			this->groupBoxCPoint->Controls->Add(this->textBoxPointY);
			this->groupBoxCPoint->Controls->Add(this->labelPointX);
			this->groupBoxCPoint->Controls->Add(this->textBoxPointZ);
			this->groupBoxCPoint->Location = System::Drawing::Point(12, 27);
			this->groupBoxCPoint->Name = L"groupBoxCPoint";
			this->groupBoxCPoint->Size = System::Drawing::Size(185, 147);
			this->groupBoxCPoint->TabIndex = 14;
			this->groupBoxCPoint->TabStop = false;
			this->groupBoxCPoint->Text = L"Создание точки";
			// 
			// groupBoxDPoint
			// 
			this->groupBoxDPoint->Controls->Add(this->textBoxDeletePoint);
			this->groupBoxDPoint->Controls->Add(this->DeletePoint);
			this->groupBoxDPoint->Location = System::Drawing::Point(12, 180);
			this->groupBoxDPoint->Name = L"groupBoxDPoint";
			this->groupBoxDPoint->Size = System::Drawing::Size(185, 47);
			this->groupBoxDPoint->TabIndex = 15;
			this->groupBoxDPoint->TabStop = false;
			this->groupBoxDPoint->Text = L"Удаление точки";
			// 
			// textBoxDeletePoint
			// 
			this->textBoxDeletePoint->Location = System::Drawing::Point(152, 20);
			this->textBoxDeletePoint->Name = L"textBoxDeletePoint";
			this->textBoxDeletePoint->Size = System::Drawing::Size(27, 20);
			this->textBoxDeletePoint->TabIndex = 1;
			// 
			// groupBoxCLineSegment
			// 
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentName);
			this->groupBoxCLineSegment->Controls->Add(this->checkBoxNameLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->CreatingLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentSPointZ);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentSPointY);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentSPointX);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentSPointName);
			this->groupBoxCLineSegment->Controls->Add(this->labelSPointLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->labelZPointLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentFPointY);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentFPointX);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentFPointName);
			this->groupBoxCLineSegment->Controls->Add(this->labelYPointLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->labelNamesPointLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->labelXPointLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->labelFPointLineSegment);
			this->groupBoxCLineSegment->Controls->Add(this->textBoxLineSegmentFPointZ);
			this->groupBoxCLineSegment->Location = System::Drawing::Point(203, 28);
			this->groupBoxCLineSegment->Name = L"groupBoxCLineSegment";
			this->groupBoxCLineSegment->Size = System::Drawing::Size(260, 146);
			this->groupBoxCLineSegment->TabIndex = 16;
			this->groupBoxCLineSegment->TabStop = false;
			this->groupBoxCLineSegment->Text = L"Создание отрезка";
			// 
			// textBoxLineSegmentName
			// 
			this->textBoxLineSegmentName->Enabled = false;
			this->textBoxLineSegmentName->Location = System::Drawing::Point(91, 95);
			this->textBoxLineSegmentName->Name = L"textBoxLineSegmentName";
			this->textBoxLineSegmentName->Size = System::Drawing::Size(164, 20);
			this->textBoxLineSegmentName->TabIndex = 28;
			// 
			// checkBoxNameLineSegment
			// 
			this->checkBoxNameLineSegment->AutoSize = true;
			this->checkBoxNameLineSegment->Location = System::Drawing::Point(19, 97);
			this->checkBoxNameLineSegment->Name = L"checkBoxNameLineSegment";
			this->checkBoxNameLineSegment->Size = System::Drawing::Size(51, 17);
			this->checkBoxNameLineSegment->TabIndex = 27;
			this->checkBoxNameLineSegment->Text = L"Имя:";
			this->checkBoxNameLineSegment->UseVisualStyleBackColor = true;
			this->checkBoxNameLineSegment->CheckedChanged += gcnew System::EventHandler(this, &Program::checkBoxNameLineSegment_CheckedChanged);
			// 
			// CreatingLineSegment
			// 
			this->CreatingLineSegment->Location = System::Drawing::Point(9, 117);
			this->CreatingLineSegment->Name = L"CreatingLineSegment";
			this->CreatingLineSegment->Size = System::Drawing::Size(246, 23);
			this->CreatingLineSegment->TabIndex = 26;
			this->CreatingLineSegment->Text = L"Создать отрезок";
			this->CreatingLineSegment->UseVisualStyleBackColor = true;
			this->CreatingLineSegment->Click += gcnew System::EventHandler(this, &Program::CreatingLineSegment_Click);
			// 
			// textBoxLineSegmentSPointZ
			// 
			this->textBoxLineSegmentSPointZ->Location = System::Drawing::Point(225, 68);
			this->textBoxLineSegmentSPointZ->Name = L"textBoxLineSegmentSPointZ";
			this->textBoxLineSegmentSPointZ->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentSPointZ->TabIndex = 25;
			// 
			// textBoxLineSegmentSPointY
			// 
			this->textBoxLineSegmentSPointY->Location = System::Drawing::Point(180, 68);
			this->textBoxLineSegmentSPointY->Name = L"textBoxLineSegmentSPointY";
			this->textBoxLineSegmentSPointY->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentSPointY->TabIndex = 24;
			// 
			// textBoxLineSegmentSPointX
			// 
			this->textBoxLineSegmentSPointX->Location = System::Drawing::Point(135, 68);
			this->textBoxLineSegmentSPointX->Name = L"textBoxLineSegmentSPointX";
			this->textBoxLineSegmentSPointX->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentSPointX->TabIndex = 23;
			// 
			// textBoxLineSegmentSPointName
			// 
			this->textBoxLineSegmentSPointName->Location = System::Drawing::Point(90, 68);
			this->textBoxLineSegmentSPointName->Name = L"textBoxLineSegmentSPointName";
			this->textBoxLineSegmentSPointName->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentSPointName->TabIndex = 22;
			// 
			// labelSPointLineSegment
			// 
			this->labelSPointLineSegment->AutoSize = true;
			this->labelSPointLineSegment->Location = System::Drawing::Point(6, 71);
			this->labelSPointLineSegment->Name = L"labelSPointLineSegment";
			this->labelSPointLineSegment->Size = System::Drawing::Size(77, 13);
			this->labelSPointLineSegment->TabIndex = 21;
			this->labelSPointLineSegment->Text = L"Вторая точка:";
			// 
			// labelZPointLineSegment
			// 
			this->labelZPointLineSegment->AutoSize = true;
			this->labelZPointLineSegment->Location = System::Drawing::Point(233, 15);
			this->labelZPointLineSegment->Name = L"labelZPointLineSegment";
			this->labelZPointLineSegment->Size = System::Drawing::Size(14, 13);
			this->labelZPointLineSegment->TabIndex = 18;
			this->labelZPointLineSegment->Text = L"Z";
			// 
			// textBoxLineSegmentFPointY
			// 
			this->textBoxLineSegmentFPointY->Location = System::Drawing::Point(180, 31);
			this->textBoxLineSegmentFPointY->Name = L"textBoxLineSegmentFPointY";
			this->textBoxLineSegmentFPointY->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentFPointY->TabIndex = 20;
			// 
			// textBoxLineSegmentFPointX
			// 
			this->textBoxLineSegmentFPointX->Location = System::Drawing::Point(135, 31);
			this->textBoxLineSegmentFPointX->Name = L"textBoxLineSegmentFPointX";
			this->textBoxLineSegmentFPointX->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentFPointX->TabIndex = 4;
			// 
			// textBoxLineSegmentFPointName
			// 
			this->textBoxLineSegmentFPointName->Location = System::Drawing::Point(90, 31);
			this->textBoxLineSegmentFPointName->Name = L"textBoxLineSegmentFPointName";
			this->textBoxLineSegmentFPointName->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentFPointName->TabIndex = 3;
			// 
			// labelYPointLineSegment
			// 
			this->labelYPointLineSegment->AutoSize = true;
			this->labelYPointLineSegment->Location = System::Drawing::Point(188, 15);
			this->labelYPointLineSegment->Name = L"labelYPointLineSegment";
			this->labelYPointLineSegment->Size = System::Drawing::Size(14, 13);
			this->labelYPointLineSegment->TabIndex = 17;
			this->labelYPointLineSegment->Text = L"Y";
			// 
			// labelNamesPointLineSegment
			// 
			this->labelNamesPointLineSegment->AutoSize = true;
			this->labelNamesPointLineSegment->Location = System::Drawing::Point(90, 16);
			this->labelNamesPointLineSegment->Name = L"labelNamesPointLineSegment";
			this->labelNamesPointLineSegment->Size = System::Drawing::Size(29, 13);
			this->labelNamesPointLineSegment->TabIndex = 1;
			this->labelNamesPointLineSegment->Text = L"Имя";
			// 
			// labelXPointLineSegment
			// 
			this->labelXPointLineSegment->AutoSize = true;
			this->labelXPointLineSegment->Location = System::Drawing::Point(141, 15);
			this->labelXPointLineSegment->Name = L"labelXPointLineSegment";
			this->labelXPointLineSegment->Size = System::Drawing::Size(14, 13);
			this->labelXPointLineSegment->TabIndex = 2;
			this->labelXPointLineSegment->Text = L"X";
			// 
			// labelFPointLineSegment
			// 
			this->labelFPointLineSegment->AutoSize = true;
			this->labelFPointLineSegment->Location = System::Drawing::Point(6, 34);
			this->labelFPointLineSegment->Name = L"labelFPointLineSegment";
			this->labelFPointLineSegment->Size = System::Drawing::Size(79, 13);
			this->labelFPointLineSegment->TabIndex = 0;
			this->labelFPointLineSegment->Text = L"Первая точка:";
			// 
			// textBoxLineSegmentFPointZ
			// 
			this->textBoxLineSegmentFPointZ->Location = System::Drawing::Point(225, 31);
			this->textBoxLineSegmentFPointZ->Name = L"textBoxLineSegmentFPointZ";
			this->textBoxLineSegmentFPointZ->Size = System::Drawing::Size(30, 20);
			this->textBoxLineSegmentFPointZ->TabIndex = 19;
			// 
			// groupBoxDLineSegment
			// 
			this->groupBoxDLineSegment->Controls->Add(this->textBoxDeleteLineSegment);
			this->groupBoxDLineSegment->Controls->Add(this->DeleteLineSegment);
			this->groupBoxDLineSegment->Location = System::Drawing::Point(203, 180);
			this->groupBoxDLineSegment->Name = L"groupBoxDLineSegment";
			this->groupBoxDLineSegment->Size = System::Drawing::Size(260, 47);
			this->groupBoxDLineSegment->TabIndex = 17;
			this->groupBoxDLineSegment->TabStop = false;
			this->groupBoxDLineSegment->Text = L"Удаление отрезка";
			// 
			// textBoxDeleteLineSegment
			// 
			this->textBoxDeleteLineSegment->Location = System::Drawing::Point(220, 19);
			this->textBoxDeleteLineSegment->Name = L"textBoxDeleteLineSegment";
			this->textBoxDeleteLineSegment->Size = System::Drawing::Size(27, 20);
			this->textBoxDeleteLineSegment->TabIndex = 1;
			// 
			// DeleteLineSegment
			// 
			this->DeleteLineSegment->Location = System::Drawing::Point(6, 19);
			this->DeleteLineSegment->Name = L"DeleteLineSegment";
			this->DeleteLineSegment->Size = System::Drawing::Size(208, 22);
			this->DeleteLineSegment->TabIndex = 0;
			this->DeleteLineSegment->Text = L"Удалить отрезок";
			this->DeleteLineSegment->UseVisualStyleBackColor = true;
			this->DeleteLineSegment->Click += gcnew System::EventHandler(this, &Program::DeleteLineSegment_Click);
			// 
			// listViewLineSegment
			// 
			this->listViewLineSegment->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->CounterLineSegment,
					this->LineSegmentName, this->LineSegmentFP, this->LineSegmentSP
			});
			this->listViewLineSegment->HideSelection = false;
			this->listViewLineSegment->Location = System::Drawing::Point(203, 233);
			this->listViewLineSegment->Name = L"listViewLineSegment";
			this->listViewLineSegment->Size = System::Drawing::Size(260, 280);
			this->listViewLineSegment->TabIndex = 18;
			this->listViewLineSegment->UseCompatibleStateImageBehavior = false;
			this->listViewLineSegment->View = System::Windows::Forms::View::Details;
			// 
			// CounterLineSegment
			// 
			this->CounterLineSegment->Text = L"№";
			this->CounterLineSegment->Width = 24;
			// 
			// LineSegmentName
			// 
			this->LineSegmentName->Text = L"Название";
			this->LineSegmentName->Width = 64;
			// 
			// LineSegmentFP
			// 
			this->LineSegmentFP->Text = L"Первая точка";
			this->LineSegmentFP->Width = 82;
			// 
			// LineSegmentSP
			// 
			this->LineSegmentSP->Text = L"Вторая точка";
			this->LineSegmentSP->Width = 79;
			// 
			// groupBoxCTriangle
			// 
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleTPointZ);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleTPointY);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleTPointX);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleTPointName);
			this->groupBoxCTriangle->Controls->Add(this->labelTPointTriangle);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleName);
			this->groupBoxCTriangle->Controls->Add(this->checkBoxNameTriangle);
			this->groupBoxCTriangle->Controls->Add(this->CreatingTriangle);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleSPointZ);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleSPointY);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleSPointX);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleSPointName);
			this->groupBoxCTriangle->Controls->Add(this->labelSPointTriangle);
			this->groupBoxCTriangle->Controls->Add(this->labelZPointTriangle);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleFPointY);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleFPointX);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleFPointName);
			this->groupBoxCTriangle->Controls->Add(this->labelYPointTriangle);
			this->groupBoxCTriangle->Controls->Add(this->labelNamesPointTriangle);
			this->groupBoxCTriangle->Controls->Add(this->labelXPointTriangle);
			this->groupBoxCTriangle->Controls->Add(this->labelFPointTriangle);
			this->groupBoxCTriangle->Controls->Add(this->textBoxTriangleFPointZ);
			this->groupBoxCTriangle->Location = System::Drawing::Point(469, 28);
			this->groupBoxCTriangle->Name = L"groupBoxCTriangle";
			this->groupBoxCTriangle->Size = System::Drawing::Size(276, 160);
			this->groupBoxCTriangle->TabIndex = 29;
			this->groupBoxCTriangle->TabStop = false;
			this->groupBoxCTriangle->Text = L"Создание треугольника";
			// 
			// textBoxTriangleTPointZ
			// 
			this->textBoxTriangleTPointZ->Location = System::Drawing::Point(240, 83);
			this->textBoxTriangleTPointZ->Name = L"textBoxTriangleTPointZ";
			this->textBoxTriangleTPointZ->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleTPointZ->TabIndex = 33;
			// 
			// textBoxTriangleTPointY
			// 
			this->textBoxTriangleTPointY->Location = System::Drawing::Point(190, 83);
			this->textBoxTriangleTPointY->Name = L"textBoxTriangleTPointY";
			this->textBoxTriangleTPointY->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleTPointY->TabIndex = 32;
			// 
			// textBoxTriangleTPointX
			// 
			this->textBoxTriangleTPointX->Location = System::Drawing::Point(138, 83);
			this->textBoxTriangleTPointX->Name = L"textBoxTriangleTPointX";
			this->textBoxTriangleTPointX->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleTPointX->TabIndex = 31;
			// 
			// textBoxTriangleTPointName
			// 
			this->textBoxTriangleTPointName->Location = System::Drawing::Point(90, 83);
			this->textBoxTriangleTPointName->Name = L"textBoxTriangleTPointName";
			this->textBoxTriangleTPointName->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleTPointName->TabIndex = 30;
			// 
			// labelTPointTriangle
			// 
			this->labelTPointTriangle->AutoSize = true;
			this->labelTPointTriangle->Location = System::Drawing::Point(8, 86);
			this->labelTPointTriangle->Name = L"labelTPointTriangle";
			this->labelTPointTriangle->Size = System::Drawing::Size(77, 13);
			this->labelTPointTriangle->TabIndex = 29;
			this->labelTPointTriangle->Text = L"Вторая точка:";
			// 
			// textBoxTriangleName
			// 
			this->textBoxTriangleName->Enabled = false;
			this->textBoxTriangleName->Location = System::Drawing::Point(90, 109);
			this->textBoxTriangleName->Name = L"textBoxTriangleName";
			this->textBoxTriangleName->Size = System::Drawing::Size(179, 20);
			this->textBoxTriangleName->TabIndex = 28;
			// 
			// checkBoxNameTriangle
			// 
			this->checkBoxNameTriangle->AutoSize = true;
			this->checkBoxNameTriangle->Location = System::Drawing::Point(22, 111);
			this->checkBoxNameTriangle->Name = L"checkBoxNameTriangle";
			this->checkBoxNameTriangle->Size = System::Drawing::Size(51, 17);
			this->checkBoxNameTriangle->TabIndex = 27;
			this->checkBoxNameTriangle->Text = L"Имя:";
			this->checkBoxNameTriangle->UseVisualStyleBackColor = true;
			this->checkBoxNameTriangle->CheckedChanged += gcnew System::EventHandler(this, &Program::checkBoxNameTriangle_CheckedChanged);
			// 
			// CreatingTriangle
			// 
			this->CreatingTriangle->Location = System::Drawing::Point(9, 135);
			this->CreatingTriangle->Name = L"CreatingTriangle";
			this->CreatingTriangle->Size = System::Drawing::Size(261, 23);
			this->CreatingTriangle->TabIndex = 26;
			this->CreatingTriangle->Text = L"Создать треугольник";
			this->CreatingTriangle->UseVisualStyleBackColor = true;
			this->CreatingTriangle->Click += gcnew System::EventHandler(this, &Program::CreatingTriangle_Click);
			// 
			// textBoxTriangleSPointZ
			// 
			this->textBoxTriangleSPointZ->Location = System::Drawing::Point(240, 57);
			this->textBoxTriangleSPointZ->Name = L"textBoxTriangleSPointZ";
			this->textBoxTriangleSPointZ->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleSPointZ->TabIndex = 25;
			// 
			// textBoxTriangleSPointY
			// 
			this->textBoxTriangleSPointY->Location = System::Drawing::Point(190, 57);
			this->textBoxTriangleSPointY->Name = L"textBoxTriangleSPointY";
			this->textBoxTriangleSPointY->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleSPointY->TabIndex = 24;
			// 
			// textBoxTriangleSPointX
			// 
			this->textBoxTriangleSPointX->Location = System::Drawing::Point(138, 57);
			this->textBoxTriangleSPointX->Name = L"textBoxTriangleSPointX";
			this->textBoxTriangleSPointX->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleSPointX->TabIndex = 23;
			// 
			// textBoxTriangleSPointName
			// 
			this->textBoxTriangleSPointName->Location = System::Drawing::Point(90, 57);
			this->textBoxTriangleSPointName->Name = L"textBoxTriangleSPointName";
			this->textBoxTriangleSPointName->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleSPointName->TabIndex = 22;
			// 
			// labelSPointTriangle
			// 
			this->labelSPointTriangle->AutoSize = true;
			this->labelSPointTriangle->Location = System::Drawing::Point(6, 60);
			this->labelSPointTriangle->Name = L"labelSPointTriangle";
			this->labelSPointTriangle->Size = System::Drawing::Size(77, 13);
			this->labelSPointTriangle->TabIndex = 21;
			this->labelSPointTriangle->Text = L"Вторая точка:";
			// 
			// labelZPointTriangle
			// 
			this->labelZPointTriangle->AutoSize = true;
			this->labelZPointTriangle->Location = System::Drawing::Point(246, 16);
			this->labelZPointTriangle->Name = L"labelZPointTriangle";
			this->labelZPointTriangle->Size = System::Drawing::Size(14, 13);
			this->labelZPointTriangle->TabIndex = 18;
			this->labelZPointTriangle->Text = L"Z";
			// 
			// textBoxTriangleFPointY
			// 
			this->textBoxTriangleFPointY->Location = System::Drawing::Point(190, 31);
			this->textBoxTriangleFPointY->Name = L"textBoxTriangleFPointY";
			this->textBoxTriangleFPointY->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleFPointY->TabIndex = 20;
			// 
			// textBoxTriangleFPointX
			// 
			this->textBoxTriangleFPointX->Location = System::Drawing::Point(140, 31);
			this->textBoxTriangleFPointX->Name = L"textBoxTriangleFPointX";
			this->textBoxTriangleFPointX->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleFPointX->TabIndex = 4;
			// 
			// textBoxTriangleFPointName
			// 
			this->textBoxTriangleFPointName->Location = System::Drawing::Point(90, 31);
			this->textBoxTriangleFPointName->Name = L"textBoxTriangleFPointName";
			this->textBoxTriangleFPointName->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleFPointName->TabIndex = 3;
			// 
			// labelYPointTriangle
			// 
			this->labelYPointTriangle->AutoSize = true;
			this->labelYPointTriangle->Location = System::Drawing::Point(198, 16);
			this->labelYPointTriangle->Name = L"labelYPointTriangle";
			this->labelYPointTriangle->Size = System::Drawing::Size(14, 13);
			this->labelYPointTriangle->TabIndex = 17;
			this->labelYPointTriangle->Text = L"Y";
			// 
			// labelNamesPointTriangle
			// 
			this->labelNamesPointTriangle->AutoSize = true;
			this->labelNamesPointTriangle->Location = System::Drawing::Point(90, 16);
			this->labelNamesPointTriangle->Name = L"labelNamesPointTriangle";
			this->labelNamesPointTriangle->Size = System::Drawing::Size(29, 13);
			this->labelNamesPointTriangle->TabIndex = 1;
			this->labelNamesPointTriangle->Text = L"Имя";
			// 
			// labelXPointTriangle
			// 
			this->labelXPointTriangle->AutoSize = true;
			this->labelXPointTriangle->Location = System::Drawing::Point(147, 16);
			this->labelXPointTriangle->Name = L"labelXPointTriangle";
			this->labelXPointTriangle->Size = System::Drawing::Size(14, 13);
			this->labelXPointTriangle->TabIndex = 2;
			this->labelXPointTriangle->Text = L"X";
			// 
			// labelFPointTriangle
			// 
			this->labelFPointTriangle->AutoSize = true;
			this->labelFPointTriangle->Location = System::Drawing::Point(6, 34);
			this->labelFPointTriangle->Name = L"labelFPointTriangle";
			this->labelFPointTriangle->Size = System::Drawing::Size(79, 13);
			this->labelFPointTriangle->TabIndex = 0;
			this->labelFPointTriangle->Text = L"Первая точка:";
			// 
			// textBoxTriangleFPointZ
			// 
			this->textBoxTriangleFPointZ->Location = System::Drawing::Point(240, 31);
			this->textBoxTriangleFPointZ->Name = L"textBoxTriangleFPointZ";
			this->textBoxTriangleFPointZ->Size = System::Drawing::Size(30, 20);
			this->textBoxTriangleFPointZ->TabIndex = 19;
			// 
			// groupBoxCSphere
			// 
			this->groupBoxCSphere->Controls->Add(this->textBoxSphereName);
			this->groupBoxCSphere->Controls->Add(this->checkBoxNameSphere);
			this->groupBoxCSphere->Controls->Add(this->CreatingSpehre);
			this->groupBoxCSphere->Controls->Add(this->textBoxSphereRadius);
			this->groupBoxCSphere->Controls->Add(this->labelRadiusSphere);
			this->groupBoxCSphere->Controls->Add(this->labelZCentreSphere);
			this->groupBoxCSphere->Controls->Add(this->textBoxSphereCentreY);
			this->groupBoxCSphere->Controls->Add(this->textBoxSphereCentreX);
			this->groupBoxCSphere->Controls->Add(this->textBoxSphereCentreName);
			this->groupBoxCSphere->Controls->Add(this->labelYCentreSphere);
			this->groupBoxCSphere->Controls->Add(this->labelNameCentreSphere);
			this->groupBoxCSphere->Controls->Add(this->labelXCentreSphere);
			this->groupBoxCSphere->Controls->Add(this->labelCentreSphere);
			this->groupBoxCSphere->Controls->Add(this->textBoxSphereCentreZ);
			this->groupBoxCSphere->Location = System::Drawing::Point(751, 29);
			this->groupBoxCSphere->Name = L"groupBoxCSphere";
			this->groupBoxCSphere->Size = System::Drawing::Size(233, 157);
			this->groupBoxCSphere->TabIndex = 30;
			this->groupBoxCSphere->TabStop = false;
			this->groupBoxCSphere->Text = L"Создание сферы";
			// 
			// textBoxSphereName
			// 
			this->textBoxSphereName->Enabled = false;
			this->textBoxSphereName->Location = System::Drawing::Point(71, 83);
			this->textBoxSphereName->Name = L"textBoxSphereName";
			this->textBoxSphereName->Size = System::Drawing::Size(158, 20);
			this->textBoxSphereName->TabIndex = 28;
			// 
			// checkBoxNameSphere
			// 
			this->checkBoxNameSphere->AutoSize = true;
			this->checkBoxNameSphere->Location = System::Drawing::Point(14, 85);
			this->checkBoxNameSphere->Name = L"checkBoxNameSphere";
			this->checkBoxNameSphere->Size = System::Drawing::Size(51, 17);
			this->checkBoxNameSphere->TabIndex = 27;
			this->checkBoxNameSphere->Text = L"Имя:";
			this->checkBoxNameSphere->UseVisualStyleBackColor = true;
			this->checkBoxNameSphere->CheckedChanged += gcnew System::EventHandler(this, &Program::checkBoxNameSphere_CheckedChanged);
			// 
			// CreatingSpehre
			// 
			this->CreatingSpehre->Location = System::Drawing::Point(9, 109);
			this->CreatingSpehre->Name = L"CreatingSpehre";
			this->CreatingSpehre->Size = System::Drawing::Size(220, 42);
			this->CreatingSpehre->TabIndex = 26;
			this->CreatingSpehre->Text = L"Создать сферу";
			this->CreatingSpehre->UseVisualStyleBackColor = true;
			this->CreatingSpehre->Click += gcnew System::EventHandler(this, &Program::CreatingSpehre_Click);
			// 
			// textBoxSphereRadius
			// 
			this->textBoxSphereRadius->Location = System::Drawing::Point(71, 57);
			this->textBoxSphereRadius->Name = L"textBoxSphereRadius";
			this->textBoxSphereRadius->Size = System::Drawing::Size(158, 20);
			this->textBoxSphereRadius->TabIndex = 22;
			// 
			// labelRadiusSphere
			// 
			this->labelRadiusSphere->AutoSize = true;
			this->labelRadiusSphere->Location = System::Drawing::Point(19, 60);
			this->labelRadiusSphere->Name = L"labelRadiusSphere";
			this->labelRadiusSphere->Size = System::Drawing::Size(46, 13);
			this->labelRadiusSphere->TabIndex = 21;
			this->labelRadiusSphere->Text = L"Радиус:";
			// 
			// labelZCentreSphere
			// 
			this->labelZCentreSphere->AutoSize = true;
			this->labelZCentreSphere->Location = System::Drawing::Point(206, 15);
			this->labelZCentreSphere->Name = L"labelZCentreSphere";
			this->labelZCentreSphere->Size = System::Drawing::Size(14, 13);
			this->labelZCentreSphere->TabIndex = 18;
			this->labelZCentreSphere->Text = L"Z";
			// 
			// textBoxSphereCentreY
			// 
			this->textBoxSphereCentreY->Location = System::Drawing::Point(163, 31);
			this->textBoxSphereCentreY->Name = L"textBoxSphereCentreY";
			this->textBoxSphereCentreY->Size = System::Drawing::Size(30, 20);
			this->textBoxSphereCentreY->TabIndex = 20;
			// 
			// textBoxSphereCentreX
			// 
			this->textBoxSphereCentreX->Location = System::Drawing::Point(127, 31);
			this->textBoxSphereCentreX->Name = L"textBoxSphereCentreX";
			this->textBoxSphereCentreX->Size = System::Drawing::Size(30, 20);
			this->textBoxSphereCentreX->TabIndex = 4;
			// 
			// textBoxSphereCentreName
			// 
			this->textBoxSphereCentreName->Location = System::Drawing::Point(71, 31);
			this->textBoxSphereCentreName->Name = L"textBoxSphereCentreName";
			this->textBoxSphereCentreName->Size = System::Drawing::Size(50, 20);
			this->textBoxSphereCentreName->TabIndex = 3;
			// 
			// labelYCentreSphere
			// 
			this->labelYCentreSphere->AutoSize = true;
			this->labelYCentreSphere->Location = System::Drawing::Point(170, 16);
			this->labelYCentreSphere->Name = L"labelYCentreSphere";
			this->labelYCentreSphere->Size = System::Drawing::Size(14, 13);
			this->labelYCentreSphere->TabIndex = 17;
			this->labelYCentreSphere->Text = L"Y";
			// 
			// labelNameCentreSphere
			// 
			this->labelNameCentreSphere->AutoSize = true;
			this->labelNameCentreSphere->Location = System::Drawing::Point(83, 15);
			this->labelNameCentreSphere->Name = L"labelNameCentreSphere";
			this->labelNameCentreSphere->Size = System::Drawing::Size(29, 13);
			this->labelNameCentreSphere->TabIndex = 1;
			this->labelNameCentreSphere->Text = L"Имя";
			// 
			// labelXCentreSphere
			// 
			this->labelXCentreSphere->AutoSize = true;
			this->labelXCentreSphere->Location = System::Drawing::Point(135, 15);
			this->labelXCentreSphere->Name = L"labelXCentreSphere";
			this->labelXCentreSphere->Size = System::Drawing::Size(14, 13);
			this->labelXCentreSphere->TabIndex = 2;
			this->labelXCentreSphere->Text = L"X";
			// 
			// labelCentreSphere
			// 
			this->labelCentreSphere->AutoSize = true;
			this->labelCentreSphere->Location = System::Drawing::Point(24, 33);
			this->labelCentreSphere->Name = L"labelCentreSphere";
			this->labelCentreSphere->Size = System::Drawing::Size(41, 13);
			this->labelCentreSphere->TabIndex = 0;
			this->labelCentreSphere->Text = L"Центр:";
			// 
			// textBoxSphereCentreZ
			// 
			this->textBoxSphereCentreZ->Location = System::Drawing::Point(199, 31);
			this->textBoxSphereCentreZ->Name = L"textBoxSphereCentreZ";
			this->textBoxSphereCentreZ->Size = System::Drawing::Size(30, 20);
			this->textBoxSphereCentreZ->TabIndex = 19;
			// 
			// groupBoxDTriangle
			// 
			this->groupBoxDTriangle->Controls->Add(this->textBoxDeleteTriangle);
			this->groupBoxDTriangle->Controls->Add(this->DeleteTriangle);
			this->groupBoxDTriangle->Location = System::Drawing::Point(469, 192);
			this->groupBoxDTriangle->Name = L"groupBoxDTriangle";
			this->groupBoxDTriangle->Size = System::Drawing::Size(274, 47);
			this->groupBoxDTriangle->TabIndex = 18;
			this->groupBoxDTriangle->TabStop = false;
			this->groupBoxDTriangle->Text = L"Удаление треугольника";
			// 
			// textBoxDeleteTriangle
			// 
			this->textBoxDeleteTriangle->Location = System::Drawing::Point(241, 21);
			this->textBoxDeleteTriangle->Name = L"textBoxDeleteTriangle";
			this->textBoxDeleteTriangle->Size = System::Drawing::Size(27, 20);
			this->textBoxDeleteTriangle->TabIndex = 1;
			// 
			// DeleteTriangle
			// 
			this->DeleteTriangle->Location = System::Drawing::Point(6, 19);
			this->DeleteTriangle->Name = L"DeleteTriangle";
			this->DeleteTriangle->Size = System::Drawing::Size(229, 22);
			this->DeleteTriangle->TabIndex = 0;
			this->DeleteTriangle->Text = L"Удалить треугольник";
			this->DeleteTriangle->UseVisualStyleBackColor = true;
			this->DeleteTriangle->Click += gcnew System::EventHandler(this, &Program::DeleteTriangle_Click);
			// 
			// groupBoxDSphere
			// 
			this->groupBoxDSphere->Controls->Add(this->textBoxDeleteSphere);
			this->groupBoxDSphere->Controls->Add(this->DeleteSphere);
			this->groupBoxDSphere->Location = System::Drawing::Point(749, 192);
			this->groupBoxDSphere->Name = L"groupBoxDSphere";
			this->groupBoxDSphere->Size = System::Drawing::Size(233, 47);
			this->groupBoxDSphere->TabIndex = 19;
			this->groupBoxDSphere->TabStop = false;
			this->groupBoxDSphere->Text = L"Удаление сферы";
			// 
			// textBoxDeleteSphere
			// 
			this->textBoxDeleteSphere->Location = System::Drawing::Point(200, 19);
			this->textBoxDeleteSphere->Name = L"textBoxDeleteSphere";
			this->textBoxDeleteSphere->Size = System::Drawing::Size(27, 20);
			this->textBoxDeleteSphere->TabIndex = 1;
			// 
			// DeleteSphere
			// 
			this->DeleteSphere->Location = System::Drawing::Point(9, 17);
			this->DeleteSphere->Name = L"DeleteSphere";
			this->DeleteSphere->Size = System::Drawing::Size(188, 22);
			this->DeleteSphere->TabIndex = 0;
			this->DeleteSphere->Text = L"Удалить сферу";
			this->DeleteSphere->UseVisualStyleBackColor = true;
			this->DeleteSphere->Click += gcnew System::EventHandler(this, &Program::DeleteSphere_Click);
			// 
			// listViewTriangle
			// 
			this->listViewTriangle->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->CounterTriangle,
					this->TriangleName, this->TriangleFP, this->TriangleSP, this->TriangleTP
			});
			this->listViewTriangle->HideSelection = false;
			this->listViewTriangle->Location = System::Drawing::Point(469, 245);
			this->listViewTriangle->Name = L"listViewTriangle";
			this->listViewTriangle->Size = System::Drawing::Size(276, 268);
			this->listViewTriangle->TabIndex = 31;
			this->listViewTriangle->UseCompatibleStateImageBehavior = false;
			this->listViewTriangle->View = System::Windows::Forms::View::Details;
			// 
			// CounterTriangle
			// 
			this->CounterTriangle->Text = L"№";
			this->CounterTriangle->Width = 24;
			// 
			// TriangleName
			// 
			this->TriangleName->Text = L"Название";
			this->TriangleName->Width = 64;
			// 
			// TriangleFP
			// 
			this->TriangleFP->Text = L"Первая т.";
			this->TriangleFP->Width = 65;
			// 
			// TriangleSP
			// 
			this->TriangleSP->Text = L"Вторая т.";
			// 
			// TriangleTP
			// 
			this->TriangleTP->Text = L"Третья т.";
			this->TriangleTP->Width = 59;
			// 
			// listViewSphere
			// 
			this->listViewSphere->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader9,
					this->columnHeader10, this->columnHeader11, this->columnHeader12
			});
			this->listViewSphere->HideSelection = false;
			this->listViewSphere->Location = System::Drawing::Point(751, 245);
			this->listViewSphere->Name = L"listViewSphere";
			this->listViewSphere->Size = System::Drawing::Size(233, 268);
			this->listViewSphere->TabIndex = 32;
			this->listViewSphere->UseCompatibleStateImageBehavior = false;
			this->listViewSphere->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"№";
			this->columnHeader9->Width = 24;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Название";
			this->columnHeader10->Width = 64;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Центр";
			this->columnHeader11->Width = 58;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Радиус";
			this->columnHeader12->Width = 52;
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(990, 516);
			this->Controls->Add(this->listViewSphere);
			this->Controls->Add(this->listViewTriangle);
			this->Controls->Add(this->groupBoxDSphere);
			this->Controls->Add(this->groupBoxDTriangle);
			this->Controls->Add(this->groupBoxCSphere);
			this->Controls->Add(this->groupBoxCTriangle);
			this->Controls->Add(this->listViewLineSegment);
			this->Controls->Add(this->groupBoxDLineSegment);
			this->Controls->Add(this->groupBoxCLineSegment);
			this->Controls->Add(this->groupBoxDPoint);
			this->Controls->Add(this->groupBoxCPoint);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->listViewPoint);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Program";
			this->Text = L"GUI - интерфейс";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxCPoint->ResumeLayout(false);
			this->groupBoxCPoint->PerformLayout();
			this->groupBoxDPoint->ResumeLayout(false);
			this->groupBoxDPoint->PerformLayout();
			this->groupBoxCLineSegment->ResumeLayout(false);
			this->groupBoxCLineSegment->PerformLayout();
			this->groupBoxDLineSegment->ResumeLayout(false);
			this->groupBoxDLineSegment->PerformLayout();
			this->groupBoxCTriangle->ResumeLayout(false);
			this->groupBoxCTriangle->PerformLayout();
			this->groupBoxCSphere->ResumeLayout(false);
			this->groupBoxCSphere->PerformLayout();
			this->groupBoxDTriangle->ResumeLayout(false);
			this->groupBoxDTriangle->PerformLayout();
			this->groupBoxDSphere->ResumeLayout(false);
			this->groupBoxDSphere->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ToolStripMenuItemExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}

	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}

	private: System::Void CreatingPoint_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxPointName->Text == "") || (textBoxPointX->Text == "") || (textBoxPointY->Text == "") || (textBoxPointZ->Text == ""))
		{
			MessageBox::Show("Заполните все поля!");
		}
		else
		{			
			//MyPoint x(Convert::ToDouble(textBoxPointX->Text), Convert::ToDouble(textBoxPointX->Text), Convert::ToDouble(textBoxPointX->Text), msclr::interop::marshal_as< std::string >(textBoxPointName->Text));
			countPoint++;
			listViewPoint->Items->Add(countPoint.ToString());
			listViewPoint->Items[countPoint-1]->SubItems->Add(textBoxPointName->Text);
			listViewPoint->Items[countPoint-1]->SubItems->Add(textBoxPointX->Text);
			listViewPoint->Items[countPoint-1]->SubItems->Add(textBoxPointY->Text);
			listViewPoint->Items[countPoint-1]->SubItems->Add(textBoxPointZ->Text);

		}
	}
	private: System::Void DeletePoint_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxDeletePoint->Text == ""))
		{
			MessageBox::Show("Напишите индекс!");					
		}
		else 
		{
			int indexdelete = Convert::ToInt16(textBoxDeletePoint->Text);
			if ((indexdelete > countPoint) || (indexdelete < 1))
			{
				MessageBox::Show("Индекс введён неверно!");
			}
			else
			{
				listViewPoint->Items[indexdelete - 1]->Remove();				
				countPoint--;
			}			
		}
	}
	private: System::Void назадToolStripMenuItemBack_Click(System::Object^ sender, System::EventArgs^ e)
	{
		BackForm1->Show();
		this->Close();
	}
	private: System::Void CreatingLineSegment_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxLineSegmentFPointName->Text == "") || (textBoxLineSegmentFPointX->Text == "") || (textBoxLineSegmentFPointY->Text == "") || (textBoxLineSegmentFPointZ->Text == "") || (textBoxLineSegmentSPointName->Text == "") || (textBoxLineSegmentSPointX->Text == "") || (textBoxLineSegmentSPointY->Text == "") || (textBoxLineSegmentSPointZ->Text == ""))
		{
			MessageBox::Show("Заполните все поля!");
		}
		else if (checkBoxNameLineSegment->Checked)
		{
			if (textBoxLineSegmentName->Text == "")
			{
				MessageBox::Show("Заполните все поля!");
			}
			else
			{
				countLineSegment++;
				listViewLineSegment->Items->Add(countLineSegment.ToString());
				listViewLineSegment->Items[countLineSegment - 1]->SubItems->Add(textBoxLineSegmentName->Text);
				listViewLineSegment->Items[countLineSegment - 1]->SubItems->Add(textBoxLineSegmentFPointName->Text + " (" + textBoxLineSegmentFPointX->Text + "," + textBoxLineSegmentFPointY->Text + "," + textBoxLineSegmentFPointZ->Text + ")");
				listViewLineSegment->Items[countLineSegment - 1]->SubItems->Add(textBoxLineSegmentSPointName->Text + " (" + textBoxLineSegmentSPointX->Text + "," + textBoxLineSegmentSPointY->Text + "," + textBoxLineSegmentSPointZ->Text + ")");
			}
		}else
		{
			countLineSegment++;
			listViewLineSegment->Items->Add(countLineSegment.ToString());
			listViewLineSegment->Items[countLineSegment - 1]->SubItems->Add(textBoxLineSegmentFPointName->Text + " - " + textBoxLineSegmentSPointName->Text);
			listViewLineSegment->Items[countLineSegment - 1]->SubItems->Add(textBoxLineSegmentFPointName->Text + " (" + textBoxLineSegmentFPointX->Text + "," + textBoxLineSegmentFPointY->Text + "," + textBoxLineSegmentFPointZ->Text + ")");
			listViewLineSegment->Items[countLineSegment - 1]->SubItems->Add(textBoxLineSegmentSPointName->Text + " (" + textBoxLineSegmentSPointX->Text + "," + textBoxLineSegmentSPointY->Text + "," + textBoxLineSegmentSPointZ->Text + ")");
		}
	}
	private: System::Void checkBoxNameLineSegment_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		textBoxLineSegmentName->Enabled = !textBoxLineSegmentName->Enabled;
	}
	private: System::Void DeleteLineSegment_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxDeleteLineSegment->Text == ""))
		{
			MessageBox::Show("Напишите индекс!");
		}
		else
		{
			int indexdelete = Convert::ToInt16(textBoxDeleteLineSegment->Text);
			if ((indexdelete > countLineSegment) || (indexdelete < 1))
			{
				MessageBox::Show("Индекс введён неверно!");
			}
			else
			{
				listViewLineSegment->Items[indexdelete - 1]->Remove();
				countLineSegment--;
				
			}

		}
	}
	private: System::Void checkBoxNameTriangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		textBoxTriangleName->Enabled = !textBoxTriangleName->Enabled;
	}
	private: System::Void CreatingTriangle_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxTriangleFPointName->Text == "") || (textBoxTriangleFPointX->Text == "") || (textBoxTriangleFPointY->Text == "") || (textBoxTriangleFPointZ->Text == "") || (textBoxTriangleSPointName->Text == "") || (textBoxTriangleSPointX->Text == "") || (textBoxTriangleSPointY->Text == "") || (textBoxTriangleSPointZ->Text == "") || (textBoxTriangleTPointName->Text == "") || (textBoxTriangleTPointX->Text == "") || (textBoxTriangleTPointY->Text == "") || (textBoxTriangleTPointZ->Text == ""))
		{
			MessageBox::Show("Заполните все поля!");
		}
		else if (checkBoxNameTriangle->Checked)
		{
			if (textBoxTriangleName->Text == "")
			{
				MessageBox::Show("Заполните все поля!");
			}
			else
			{
				countTriangle++;
				listViewTriangle->Items->Add(countTriangle.ToString());
				listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleName->Text);
				listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleFPointName->Text + " (" + textBoxTriangleFPointX->Text + "," + textBoxTriangleFPointY->Text + "," + textBoxTriangleFPointZ->Text + ")");
				listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleSPointName->Text + " (" + textBoxTriangleSPointX->Text + "," + textBoxTriangleSPointY->Text + "," + textBoxTriangleSPointZ->Text + ")");
				listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleTPointName->Text + " (" + textBoxTriangleTPointX->Text + "," + textBoxTriangleTPointY->Text + "," + textBoxTriangleTPointZ->Text + ")");
			}
		}
		else
		{
			countTriangle++;
			listViewTriangle->Items->Add(countTriangle.ToString());
			listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleFPointName->Text + " - " + textBoxTriangleSPointName->Text + " - " + textBoxTriangleTPointName->Text);
			listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleFPointName->Text + " (" + textBoxTriangleFPointX->Text + "," + textBoxTriangleFPointY->Text + "," + textBoxTriangleFPointZ->Text + ")");
			listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleSPointName->Text + " (" + textBoxTriangleSPointX->Text + "," + textBoxTriangleSPointY->Text + "," + textBoxTriangleSPointZ->Text + ")");
			listViewTriangle->Items[countTriangle - 1]->SubItems->Add(textBoxTriangleTPointName->Text + " (" + textBoxTriangleTPointX->Text + "," + textBoxTriangleTPointY->Text + "," + textBoxTriangleTPointZ->Text + ")");
		}
	}
	private: System::Void DeleteTriangle_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxDeleteTriangle->Text == ""))
		{
			MessageBox::Show("Напишите индекс!");
		}
		else
		{
			int indexdelete = Convert::ToInt16(textBoxDeleteTriangle->Text);
			if ((indexdelete > countTriangle) || (indexdelete < 1))
			{
				MessageBox::Show("Индекс введён неверно!");
			}
			else
			{
				listViewTriangle->Items[indexdelete - 1]->Remove();
				countTriangle--;
			}
		}
	}
	private: System::Void checkBoxNameSphere_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		textBoxSphereName->Enabled = !textBoxSphereName->Enabled;
	}
	private: System::Void CreatingSpehre_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBoxSphereCentreName->Text == "") || (textBoxSphereCentreX->Text == "") || (textBoxSphereCentreY->Text == "") || (textBoxSphereCentreZ->Text == "") || (textBoxSphereRadius->Text == ""))
		{
			MessageBox::Show("Заполните все поля!");
		}
		else if (checkBoxNameSphere->Checked)
		{
			if (textBoxSphereName->Text == "")
			{
				MessageBox::Show("Заполните все поля!");
			}
			else
			{
				countSphere++;
				listViewSphere->Items->Add(countSphere.ToString());
				listViewSphere->Items[countSphere - 1]->SubItems->Add(textBoxSphereName->Text);
				listViewSphere->Items[countSphere - 1]->SubItems->Add(textBoxSphereCentreName->Text + " (" + textBoxSphereCentreX->Text + "," + textBoxSphereCentreY->Text + "," + textBoxSphereCentreZ->Text + ")");
				listViewSphere->Items[countSphere - 1]->SubItems->Add(textBoxSphereRadius->Text);
			}
		}
		else
		{
			countSphere++;
			listViewSphere->Items->Add(countSphere.ToString());
			listViewSphere->Items[countSphere - 1]->SubItems->Add(textBoxSphereCentreName->Text);
			listViewSphere->Items[countSphere - 1]->SubItems->Add(textBoxSphereCentreName->Text + " (" + textBoxSphereCentreX->Text + "," + textBoxSphereCentreY->Text + "," + textBoxSphereCentreZ->Text + ")");
			listViewSphere->Items[countSphere - 1]->SubItems->Add(textBoxSphereRadius->Text);
		}
	}
	private: System::Void DeleteSphere_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if ((textBoxDeleteSphere->Text == ""))
		{
			MessageBox::Show("Напишите индекс!");
		}
		else
		{
			int indexdelete = Convert::ToInt16(textBoxDeleteSphere->Text);
			if ((indexdelete > countSphere) || (indexdelete < 1))
			{
				MessageBox::Show("Индекс введён неверно!");
			}
			else
			{
				listViewSphere->Items[indexdelete - 1]->Remove();
				countSphere--;
			}
		}
	}
};
}
