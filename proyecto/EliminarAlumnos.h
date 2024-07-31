#pragma once

#include "Contenedor.h"
#include "Alumno.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace proyecto {

    public ref class EliminarAlumnos : public System::Windows::Forms::Form
    {
    public:
        EliminarAlumnos(void)
        {
            InitializeComponent();
            LoadData(); // Llama a LoadData en el constructor
        }

    protected:
        ~EliminarAlumnos()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::Button^ buttonEliminar;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->buttonEliminar = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
            this->panel1->Controls->Add(this->label1);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(815, 103);
            this->panel1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(261, 35);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(290, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"ELIMINAR ALUMNOS";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(12, 130);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(791, 348);
            this->dataGridView1->TabIndex = 1;
            // 
            // buttonEliminar
            // 
            this->buttonEliminar->Location = System::Drawing::Point(351, 484);
            this->buttonEliminar->Name = L"buttonEliminar";
            this->buttonEliminar->Size = System::Drawing::Size(104, 23);
            this->buttonEliminar->TabIndex = 2;
            this->buttonEliminar->Text = L"Eliminar";
            this->buttonEliminar->UseVisualStyleBackColor = true;
            this->buttonEliminar->Click += gcnew System::EventHandler(this, &EliminarAlumnos::buttonEliminar_Click);
            // 
            // EliminarAlumnos
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(815, 519);
            this->Controls->Add(this->buttonEliminar);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"EliminarAlumnos";
            this->Text = L"EliminarAlumnos";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

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
    private:

        void LoadData()
        {
            // Configurar las columnas del DataGridView
            this->dataGridView1->Columns->Add("nombre", "Nombre");
            this->dataGridView1->Columns->Add("documentoIdentidad", "Documento de Identidad");
            this->dataGridView1->Columns->Add("edad", "Edad");
            this->dataGridView1->Columns->Add("direccion", "Dirección");
            this->dataGridView1->Columns->Add("distrito", "Distrito");
            this->dataGridView1->Columns->Add("departamento", "Departamento");
            this->dataGridView1->Columns->Add("celular", "Celular");
            this->dataGridView1->Columns->Add("codigoAlumno", "Código Alumno");
            this->dataGridView1->Columns->Add("carreraProfesional", "Carrera Profesional");
            this->dataGridView1->Columns->Add("correoInstitucional", "Correo Institucional");
            this->dataGridView1->Columns->Add("modalidadIngreso", "Modalidad Ingreso");

            // Acceder al vector estático de alumnos desde Contenedor
            std::vector<Alumno*>& alumnos = Contenedor::getAlumnos();
            for (Alumno* alumno : alumnos)
            {
                // Convertir datos del puntero Alumno a String^
                String^ nombre = gcnew String(alumno->getNombre().c_str());
                String^ documentoIdentidad = gcnew String(alumno->getDocumentoIdentidad().c_str());
                String^ edad = gcnew String(alumno->getEdad().c_str());
                String^ direccion = gcnew String(alumno->getDireccion().c_str());
                String^ distrito = gcnew String(alumno->getDistrito().c_str());
                String^ departamento = gcnew String(alumno->getDepartamento().c_str());
                String^ celular = gcnew String(alumno->getCelular().c_str());
                String^ codigoAlumno = gcnew String(alumno->getCodigoAlumno().c_str());
                String^ carreraProfesional = gcnew String(alumno->getCarreraProfesional().c_str());
                String^ correoInstitucional = gcnew String(alumno->getCorreoInstitucional().c_str());
                String^ modalidadIngreso = gcnew String(alumno->getModalidadIngreso().c_str());

                // Crear un nuevo DataGridViewRow
                DataGridViewRow^ row = gcnew DataGridViewRow();
                row->CreateCells(this->dataGridView1);
                row->Cells[0]->Value = nombre;
                row->Cells[1]->Value = documentoIdentidad;
                row->Cells[2]->Value = edad;
                row->Cells[3]->Value = direccion;
                row->Cells[4]->Value = distrito;
                row->Cells[5]->Value = departamento;
                row->Cells[6]->Value = celular;
                row->Cells[7]->Value = codigoAlumno;
                row->Cells[8]->Value = carreraProfesional;
                row->Cells[9]->Value = correoInstitucional;
                row->Cells[10]->Value = modalidadIngreso;

                // Agregar la fila al DataGridView
                this->dataGridView1->Rows->Add(row);
            }
        }

        void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Verificar si se seleccionó una fila
            if (this->dataGridView1->SelectedRows->Count > 0)
            {
                // Obtener la fila seleccionada
                DataGridViewRow^ selectedRow = this->dataGridView1->SelectedRows[0];
                String^ codigoAlumno = safe_cast<String^>(selectedRow->Cells[7]->Value);

                // Buscar y eliminar el alumno con el código correspondiente
                std::vector<Alumno*>& alumnos = Contenedor::getAlumnos();
                for (auto it = alumnos.begin(); it != alumnos.end(); ++it)
                {
                    if ((*it)->getCodigoAlumno() == toStandardString(codigoAlumno))
                    {
                        delete* it;
                        alumnos.erase(it);
                        break;
                    }
                }

                // Limpiar el DataGridView y recargar los datos
                this->dataGridView1->Rows->Clear();
                LoadData();
            }
            else
            {
                MessageBox::Show("Seleccione un alumno para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    };
}