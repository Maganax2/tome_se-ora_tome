#pragma once

using namespace std;
#include<iostream>
#include<string>
#include "Alumno.h"
#include "Contenedor.h"

namespace proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AgregarAlumno
	/// </summary>
	public ref class AgregarAlumno : public System::Windows::Forms::Form
	{
	public:
		AgregarAlumno(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AgregarAlumno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
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
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::TextBox^ textBoxDNI;
	private: System::Windows::Forms::TextBox^ textBoxEdad;
	private: System::Windows::Forms::TextBox^ textBoxDireccion;
	private: System::Windows::Forms::TextBox^ textBoxDistrito;
	private: System::Windows::Forms::TextBox^ textBoxDepartamento;
	private: System::Windows::Forms::TextBox^ textBoxCelular;
	private: System::Windows::Forms::TextBox^ textBoxCodigoAlumno;
	private: System::Windows::Forms::TextBox^ textBoxModalidadIngreso;
	private: System::Windows::Forms::TextBox^ textBoxCarreraProfesional;
	private: System::Windows::Forms::Button^ buttonRegistrar;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ labelMensaje;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label12;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDNI = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEdad = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDireccion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDistrito = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDepartamento = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCelular = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCodigoAlumno = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModalidadIngreso = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCarreraProfesional = (gcnew System::Windows::Forms::TextBox());
			this->buttonRegistrar = (gcnew System::Windows::Forms::Button());
			this->labelMensaje = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(815, 100);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(264, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE ALUMNOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NOMBRE";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(72, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"EDAD";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(72, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"DIRECCION";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"DISTRITO";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(72, 297);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 19);
			this->label7->TabIndex = 6;
			this->label7->Text = L"DEPARTAMENTO";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(72, 331);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 19);
			this->label8->TabIndex = 7;
			this->label8->Text = L"CELULAR";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(72, 365);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 19);
			this->label9->TabIndex = 8;
			this->label9->Text = L"CODIGO ALUMNO";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(72, 398);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(162, 19);
			this->label10->TabIndex = 9;
			this->label10->Text = L"MODALIDAD INGRESO";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(72, 430);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 19);
			this->label11->TabIndex = 21;
			this->label11->Text = L"CARRERA";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(319, 123);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(200, 20);
			this->textBoxNombre->TabIndex = 10;
			// 
			// textBoxDNI
			// 
			this->textBoxDNI->Location = System::Drawing::Point(319, 157);
			this->textBoxDNI->Name = L"textBoxDNI";
			this->textBoxDNI->Size = System::Drawing::Size(200, 20);
			this->textBoxDNI->TabIndex = 11;
			// 
			// textBoxEdad
			// 
			this->textBoxEdad->Location = System::Drawing::Point(319, 191);
			this->textBoxEdad->Name = L"textBoxEdad";
			this->textBoxEdad->Size = System::Drawing::Size(200, 20);
			this->textBoxEdad->TabIndex = 12;
			// 
			// textBoxDireccion
			// 
			this->textBoxDireccion->Location = System::Drawing::Point(319, 227);
			this->textBoxDireccion->Name = L"textBoxDireccion";
			this->textBoxDireccion->Size = System::Drawing::Size(200, 20);
			this->textBoxDireccion->TabIndex = 13;
			// 
			// textBoxDistrito
			// 
			this->textBoxDistrito->Location = System::Drawing::Point(319, 261);
			this->textBoxDistrito->Name = L"textBoxDistrito";
			this->textBoxDistrito->Size = System::Drawing::Size(200, 20);
			this->textBoxDistrito->TabIndex = 14;
			// 
			// textBoxDepartamento
			// 
			this->textBoxDepartamento->Location = System::Drawing::Point(319, 295);
			this->textBoxDepartamento->Name = L"textBoxDepartamento";
			this->textBoxDepartamento->Size = System::Drawing::Size(200, 20);
			this->textBoxDepartamento->TabIndex = 15;
			// 
			// textBoxCelular
			// 
			this->textBoxCelular->Location = System::Drawing::Point(319, 329);
			this->textBoxCelular->Name = L"textBoxCelular";
			this->textBoxCelular->Size = System::Drawing::Size(200, 20);
			this->textBoxCelular->TabIndex = 16;
			// 
			// textBoxCodigoAlumno
			// 
			this->textBoxCodigoAlumno->Location = System::Drawing::Point(319, 364);
			this->textBoxCodigoAlumno->Name = L"textBoxCodigoAlumno";
			this->textBoxCodigoAlumno->Size = System::Drawing::Size(200, 20);
			this->textBoxCodigoAlumno->TabIndex = 17;
			// 
			// textBoxModalidadIngreso
			// 
			this->textBoxModalidadIngreso->Location = System::Drawing::Point(319, 399);
			this->textBoxModalidadIngreso->Name = L"textBoxModalidadIngreso";
			this->textBoxModalidadIngreso->Size = System::Drawing::Size(200, 20);
			this->textBoxModalidadIngreso->TabIndex = 18;
			// 
			// textBoxCarreraProfesional
			// 
			this->textBoxCarreraProfesional->Location = System::Drawing::Point(319, 431);
			this->textBoxCarreraProfesional->Name = L"textBoxCarreraProfesional";
			this->textBoxCarreraProfesional->Size = System::Drawing::Size(200, 20);
			this->textBoxCarreraProfesional->TabIndex = 19;
			// 
			// buttonRegistrar
			// 
			this->buttonRegistrar->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegistrar->Location = System::Drawing::Point(98, 475);
			this->buttonRegistrar->Name = L"buttonRegistrar";
			this->buttonRegistrar->Size = System::Drawing::Size(100, 23);
			this->buttonRegistrar->TabIndex = 20;
			this->buttonRegistrar->Text = L"REGISTRAR";
			this->buttonRegistrar->UseVisualStyleBackColor = true;
			this->buttonRegistrar->Click += gcnew System::EventHandler(this, &AgregarAlumno::buttonRegistrar_Click);
			// 
			// labelMensaje
			// 
			this->labelMensaje->AutoSize = true;
			this->labelMensaje->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMensaje->Location = System::Drawing::Point(333, 478);
			this->labelMensaje->Name = L"labelMensaje";
			this->labelMensaje->Size = System::Drawing::Size(171, 19);
			this->labelMensaje->TabIndex = 22;
			this->labelMensaje->Text = L"REGISTRANDO ALUMNO";
			this->labelMensaje->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel2->Controls->Add(this->label12);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(615, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 420);
			this->panel2->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(34, 127);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(139, 172);
			this->label12->TabIndex = 0;
			this->label12->Text = L"RELLENE LOS CAMPOS PAPU,\r\nSI ENCUENTRAS UNA WBADA\r\nQUE SE REPITE NO SE AGREGARA\r\n"
				L"EL ALUMNO";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AgregarAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(815, 520);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->labelMensaje);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->buttonRegistrar);
			this->Controls->Add(this->textBoxCarreraProfesional);
			this->Controls->Add(this->textBoxModalidadIngreso);
			this->Controls->Add(this->textBoxCodigoAlumno);
			this->Controls->Add(this->textBoxCelular);
			this->Controls->Add(this->textBoxDepartamento);
			this->Controls->Add(this->textBoxDistrito);
			this->Controls->Add(this->textBoxDireccion);
			this->Controls->Add(this->textBoxEdad);
			this->Controls->Add(this->textBoxDNI);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AgregarAlumno";
			this->Text = L"AgregarAlumno";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	private: System::Void buttonRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener los datos de los TextBox
		string nombre = toStandardString(textBoxNombre->Text);
		string dni = toStandardString(textBoxDNI->Text);
		string edad = toStandardString(textBoxEdad->Text);
		string direccion = toStandardString(textBoxDireccion->Text);
		string distrito = toStandardString(textBoxDistrito->Text);
		string departamento = toStandardString(textBoxDepartamento->Text);
		string celular = toStandardString(textBoxCelular->Text);
		string codigoAlumno = toStandardString(textBoxCodigoAlumno->Text);
		string modalidadIngreso = toStandardString(textBoxModalidadIngreso->Text);
		string carreraProfesional = toStandardString(textBoxCarreraProfesional->Text);

		// Verificar si ya existe un alumno con el mismo nombre, DNI o código de alumno
		bool alumnoExiste = false;
		for (Alumno* a : Contenedor::getAlumnos()) {
			if (a->getNombre() == nombre || a->getCodigoAlumno() == codigoAlumno || a->getDocumentoIdentidad() == dni) {
				alumnoExiste = true;
				break;
			}
		}

		if (alumnoExiste) {
			// Mostrar mensaje de error
			labelMensaje->Text = "EL ALUMNO YA EXISTE";
		}
		else {
			// Crear un objeto Alumno
			Alumno* alumno = new Alumno(nombre, dni, edad, direccion, distrito, departamento, celular, codigoAlumno, modalidadIngreso, carreraProfesional);

			// Agregar el objeto Alumno al vector estático de la clase Contenedor
			Contenedor::addAlumno(alumno);

			// Mostrar mensaje de éxito
			labelMensaje->Text = "ALUMNO REGISTRADO";

			// Opcional: Limpiar los TextBox después de agregar el alumno
			textBoxNombre->Clear();
			textBoxDNI->Clear();
			textBoxEdad->Clear();
			textBoxDireccion->Clear();
			textBoxDistrito->Clear();
			textBoxDepartamento->Clear();
			textBoxCelular->Clear();
			textBoxCodigoAlumno->Clear();
			textBoxModalidadIngreso->Clear();
			textBoxCarreraProfesional->Clear();
		}
	}
	};
}