#pragma once

#include "Curso.h"
#include "Contenedor.h"
#include <string>

namespace proyecto {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class AgregarCurso : public System::Windows::Forms::Form
    {
    public:
        AgregarCurso(void)
        {
            InitializeComponent();
        }

    protected:
        ~AgregarCurso()
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
    private: System::Windows::Forms::TextBox^ textBoxCodigoCurso;
    private: System::Windows::Forms::TextBox^ textBoxNombreCurso;
    private: System::Windows::Forms::TextBox^ textBoxCreditos;
    private: System::Windows::Forms::TextBox^ textBoxCategoria;
    private: System::Windows::Forms::Button^ buttonRegistrar;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label12;
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
            this->textBoxCodigoCurso = (gcnew System::Windows::Forms::TextBox());
            this->textBoxNombreCurso = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCreditos = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCategoria = (gcnew System::Windows::Forms::TextBox());
            this->buttonRegistrar = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->labelMensaje = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel1->Controls->Add(this->label5);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(815, 99);
            this->panel1->TabIndex = 0;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(258, 33);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(284, 32);
            this->label5->TabIndex = 10;
            this->label5->Text = L"REGISTRO DE CURSOS";
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
            this->label3->Text = L"CREDITOS";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(107, 298);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(90, 19);
            this->label4->TabIndex = 3;
            this->label4->Text = L"CATEGORIA";
            // 
            // textBoxCodigoCurso
            // 
            this->textBoxCodigoCurso->Location = System::Drawing::Point(307, 184);
            this->textBoxCodigoCurso->Name = L"textBoxCodigoCurso";
            this->textBoxCodigoCurso->Size = System::Drawing::Size(150, 20);
            this->textBoxCodigoCurso->TabIndex = 4;
            // 
            // textBoxNombreCurso
            // 
            this->textBoxNombreCurso->Location = System::Drawing::Point(307, 222);
            this->textBoxNombreCurso->Name = L"textBoxNombreCurso";
            this->textBoxNombreCurso->Size = System::Drawing::Size(150, 20);
            this->textBoxNombreCurso->TabIndex = 5;
            // 
            // textBoxCreditos
            // 
            this->textBoxCreditos->Location = System::Drawing::Point(307, 260);
            this->textBoxCreditos->Name = L"textBoxCreditos";
            this->textBoxCreditos->Size = System::Drawing::Size(150, 20);
            this->textBoxCreditos->TabIndex = 6;
            // 
            // textBoxCategoria
            // 
            this->textBoxCategoria->Location = System::Drawing::Point(307, 298);
            this->textBoxCategoria->Name = L"textBoxCategoria";
            this->textBoxCategoria->Size = System::Drawing::Size(150, 20);
            this->textBoxCategoria->TabIndex = 7;
            // 
            // buttonRegistrar
            // 
            this->buttonRegistrar->Location = System::Drawing::Point(106, 375);
            this->buttonRegistrar->Name = L"buttonRegistrar";
            this->buttonRegistrar->Size = System::Drawing::Size(86, 23);
            this->buttonRegistrar->TabIndex = 8;
            this->buttonRegistrar->Text = L"REGISTRAR";
            this->buttonRegistrar->UseVisualStyleBackColor = true;
            this->buttonRegistrar->Click += gcnew System::EventHandler(this, &AgregarCurso::buttonRegistrar_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->panel2->Controls->Add(this->label12);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
            this->panel2->Location = System::Drawing::Point(615, 99);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(200, 391);
            this->panel2->TabIndex = 24;
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
                L"EL CURSO";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // labelMensaje
            // 
            this->labelMensaje->AutoSize = true;
            this->labelMensaje->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelMensaje->Location = System::Drawing::Point(298, 376);
            this->labelMensaje->Name = L"labelMensaje";
            this->labelMensaje->Size = System::Drawing::Size(171, 19);
            this->labelMensaje->TabIndex = 25;
            this->labelMensaje->Text = L"REGISTRANDO CURSOS";
            // 
            // AgregarCurso
            // 
            this->ClientSize = System::Drawing::Size(815, 490);
            this->Controls->Add(this->labelMensaje);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->buttonRegistrar);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBoxCategoria);
            this->Controls->Add(this->textBoxCodigoCurso);
            this->Controls->Add(this->textBoxCreditos);
            this->Controls->Add(this->textBoxNombreCurso);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"AgregarCurso";
            this->Text = L"Registrar Curso";
            this->Load += gcnew System::EventHandler(this, &AgregarCurso::AgregarCurso_Load);
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
        std::string codigoCurso = toStandardString(textBoxCodigoCurso->Text);
        std::string nombreCurso = toStandardString(textBoxNombreCurso->Text);
        std::string creditos = toStandardString(textBoxCreditos->Text);
        std::string categoria = toStandardString(textBoxCategoria->Text);

        // Verificar si ya existe un curso con el mismo código
        bool cursoExiste = false;
        for (Curso* c : Contenedor::getCursos()) {
            if (c->getCodigoCurso() == codigoCurso) {
                cursoExiste = true;
                break;
            }
        }

        if (cursoExiste) {
            // Mostrar mensaje de error
            labelMensaje->Text = "EL CURSO YA EXISTE";
        }
        else {
            // Crear un objeto Curso
            Curso* curso = new Curso(codigoCurso, nombreCurso, creditos, categoria);

            // Agregar el objeto Curso al vector estático de la clase Contenedor
            Contenedor::addCurso(curso);

            // Mostrar mensaje de éxito
            labelMensaje->Text = "CURSO REGISTRADO";

            // Opcional: Limpiar los TextBox después de agregar el curso
            textBoxCodigoCurso->Clear();
            textBoxNombreCurso->Clear();
            textBoxCodigoCurso->Clear();
            textBoxNombreCurso->Clear();
            textBoxCreditos->Clear();
            textBoxCategoria->Clear();
        }
    }
    private: System::Void AgregarCurso_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}