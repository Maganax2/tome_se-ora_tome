#pragma once

using namespace std;
#include "Inicio.h";
#include "MostrarAlumnos.h"
#include "MostrarCursos.h"
#include "MostrarCarreras.h"
#include "AgregarAlumno.h"
#include "AgregarCurso.h"
#include "AgregarCarreras.h"
#include "EliminarAlumnos.h"
#include "EliminarCursos.h"
#include "EliminarCarreras.h"
#include <string>;
#include <iostream>;

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button10;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 529);
			this->panel1->TabIndex = 0;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(76, 459);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(96, 49);
			this->button10->TabIndex = 5;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button9);
			this->panel6->Controls->Add(this->button8);
			this->panel6->Controls->Add(this->button7);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 382);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(283, 49);
			this->panel6->TabIndex = 6;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(187, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(96, 49);
			this->button9->TabIndex = 4;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(94, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(96, 49);
			this->button8->TabIndex = 4;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(0, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(96, 49);
			this->button7->TabIndex = 4;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::Menu;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Location = System::Drawing::Point(0, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(283, 51);
			this->label4->TabIndex = 5;
			this->label4->Text = L"ELIMINAR";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 282);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(283, 49);
			this->panel4->TabIndex = 4;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(187, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 49);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Carreras";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(94, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 49);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Curso";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Alumno";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::Menu;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Location = System::Drawing::Point(0, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(283, 51);
			this->label3->TabIndex = 3;
			this->label3->Text = L"REGISTRO";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 182);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(283, 49);
			this->panel3->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(187, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Carreras";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Curso";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Alumno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Menu;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L"AGREGAR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(283, 131);
			this->panel2->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"LABEL DE PRUEBA CTM";
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(283, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(831, 529);
			this->panel5->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1114, 529);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		template <class T>
		void abrirPanel(T formHijo) {
			if (this->panel5->Controls->Count > 0) {
				this->panel5->Controls->RemoveAt(0);
			}
			formHijo->TopLevel = false;
			formHijo->Dock = DockStyle::Fill;
			this->panel5->Controls->Add(formHijo);
			this->panel5->Tag = formHijo;  // Correcta asignación de Tag
			formHijo->Show();  // Corrección de la llamada a Show
		}
	private: static string toStandardString(System::String^ string) {
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	private: static String^ toSystemString(string str) {
		return gcnew String(str.c_str());
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::Inicio);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::AgregarAlumno);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::AgregarCurso);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::AgregarCarreras);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::MostrarAlumnos);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::MostrarCursos);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::MostrarCarreras);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::EliminarAlumnos);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::EliminarCursos);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew proyecto::EliminarCarreras);
	}
};
}
