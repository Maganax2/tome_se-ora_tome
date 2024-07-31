#pragma once

#include "Carrera.h"
#include "Contenedor.h"
#include <string>

namespace proyecto {

	using namespace System;
	using namespace System::Windows::Forms;

	public ref class AgregarCarreras : public System::Windows::Forms::Form
	{
	public:
		AgregarCarreras(void)
		{
			InitializeComponent();
		}

	protected:
		~AgregarCarreras()
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
	private: System::Windows::Forms::TextBox^ textBoxCodigoCarrera;
	private: System::Windows::Forms::TextBox^ textBoxNombreCarrera;
	private: System::Windows::Forms::TextBox^ textBoxFacultad;
	private: System::Windows::Forms::TextBox^ textBoxSede;
	private: System::Windows::Forms::Button^ buttonRegistrar;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelMensaje;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxCodigoCarrera = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombreCarrera = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFacultad = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSede = (gcnew System::Windows::Forms::TextBox());
			this->buttonRegistrar = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelMensaje = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(831, 99);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(258, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(314, 32);
			this->label5->TabIndex = 10;
			this->label5->Text = L"REGISTRO DE CARRERAS";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(107, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CODIGO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(107, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NOMBRE";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(107, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"FACULTAD";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(107, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"SEDE";
			// 
			// textBoxCodigoCarrera
			// 
			this->textBoxCodigoCarrera->Location = System::Drawing::Point(307, 184);
			this->textBoxCodigoCarrera->Name = L"textBoxCodigoCarrera";
			this->textBoxCodigoCarrera->Size = System::Drawing::Size(150, 20);
			this->textBoxCodigoCarrera->TabIndex = 4;
			// 
			// textBoxNombreCarrera
			// 
			this->textBoxNombreCarrera->Location = System::Drawing::Point(307, 222);
			this->textBoxNombreCarrera->Name = L"textBoxNombreCarrera";
			this->textBoxNombreCarrera->Size = System::Drawing::Size(150, 20);
			this->textBoxNombreCarrera->TabIndex = 5;
			// 
			// textBoxFacultad
			// 
			this->textBoxFacultad->Location = System::Drawing::Point(307, 260);
			this->textBoxFacultad->Name = L"textBoxFacultad";
			this->textBoxFacultad->Size = System::Drawing::Size(150, 20);
			this->textBoxFacultad->TabIndex = 6;
			// 
			// textBoxSede
			// 
			this->textBoxSede->Location = System::Drawing::Point(307, 298);
			this->textBoxSede->Name = L"textBoxSede";
			this->textBoxSede->Size = System::Drawing::Size(150, 20);
			this->textBoxSede->TabIndex = 7;
			// 
			// buttonRegistrar
			// 
			this->buttonRegistrar->Location = System::Drawing::Point(106, 375);
			this->buttonRegistrar->Name = L"buttonRegistrar";
			this->buttonRegistrar->Size = System::Drawing::Size(86, 23);
			this->buttonRegistrar->TabIndex = 8;
			this->buttonRegistrar->Text = L"REGISTRAR";
			this->buttonRegistrar->UseVisualStyleBackColor = true;
			this->buttonRegistrar->Click += gcnew System::EventHandler(this, &AgregarCarreras::buttonRegistrar_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Controls->Add(this->label6);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(631, 99);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 430);
			this->panel3->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(34, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 172);
			this->label6->TabIndex = 0;
			this->label6->Text = L"RELLENE LOS CAMPOS PAPU,\r\nSI ENCUENTRAS UNA WBADA\r\nQUE SE REPITE NO SE AGREGARA\r\n"
				L"LA CARRERA";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelMensaje
			// 
			this->labelMensaje->AutoSize = true;
			this->labelMensaje->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMensaje->Location = System::Drawing::Point(291, 379);
			this->labelMensaje->Name = L"labelMensaje";
			this->labelMensaje->Size = System::Drawing::Size(189, 19);
			this->labelMensaje->TabIndex = 26;
			this->labelMensaje->Text = L"REGISTRANDO CARRERAS";
			// 
			// AgregarCarreras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(831, 529);
			this->Controls->Add(this->labelMensaje);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->buttonRegistrar);
			this->Controls->Add(this->textBoxSede);
			this->Controls->Add(this->textBoxFacultad);
			this->Controls->Add(this->textBoxNombreCarrera);
			this->Controls->Add(this->textBoxCodigoCarrera);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AgregarCarreras";
			this->Text = L"Agregar Carreras";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
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
		string codigoCarrera = toStandardString(textBoxCodigoCarrera->Text);
		string nombreCarrera = toStandardString(textBoxNombreCarrera->Text);
		string facultad = toStandardString(textBoxFacultad->Text);
		string sede = toStandardString(textBoxSede->Text);

		// Verificar si ya existe una carrera con el mismo código
		bool carreraExiste = false;
		for (Carrera* c : Contenedor::getCarreras()) {
			if (c->getCodigoCarrera() == codigoCarrera) {
				carreraExiste = true;
				break;
			}
		}

		if (carreraExiste) {
			// Mostrar mensaje de error
			labelMensaje->Text = "LA CARRERA YA EXISTE";
		}
		else {
			// Crear un objeto Carrera
			Carrera* carrera = new Carrera(codigoCarrera, nombreCarrera, facultad, sede);

			// Agregar el objeto Carrera al vector estático de la clase Contenedor
			Contenedor::addCarrera(carrera);

			// Mostrar mensaje de éxito
			labelMensaje->Text = "CARRERA REGISTRADA";

			// Opcional: Limpiar los TextBox después de agregar la carrera
			textBoxCodigoCarrera->Clear();
			textBoxNombreCarrera->Clear();
			textBoxFacultad->Clear();
			textBoxSede->Clear();
		}
	}
	};
}