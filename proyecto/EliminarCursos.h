#pragma once

#include "Contenedor.h"
#include "Curso.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace proyecto {

    public ref class EliminarCursos : public System::Windows::Forms::Form
    {
    public:
        EliminarCursos(void)
        {
            InitializeComponent();
            LoadData(); // Llama a LoadData en el constructor
        }

    protected:
        ~EliminarCursos()
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
            this->label1->Size = System::Drawing::Size(235, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"ELIMINAR CURSOS";
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
            this->buttonEliminar->Click += gcnew System::EventHandler(this, &EliminarCursos::buttonEliminar_Click);
            // 
            // EliminarCursos
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(815, 519);
            this->Controls->Add(this->buttonEliminar);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"EliminarCursos";
            this->Text = L"EliminarCursos";
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
            this->dataGridView1->Columns->Add("codigoCurso", "Código Curso");
            this->dataGridView1->Columns->Add("nombreCurso", "Nombre Curso");
            this->dataGridView1->Columns->Add("creditos", "Créditos");
            this->dataGridView1->Columns->Add("categoria", "Categoría");

            // Acceder al vector estático de cursos desde Contenedor
            std::vector<Curso*>& cursos = Contenedor::getCursos();
            for (Curso* curso : cursos)
            {
                // Convertir datos del puntero Curso a String^
                String^ codigoCurso = gcnew String(curso->getCodigoCurso().c_str());
                String^ nombreCurso = gcnew String(curso->getNombre().c_str());
                String^ creditos = gcnew String(curso->getCreditos().c_str());
                String^ categoria = gcnew String(curso->getCategoria().c_str());

                // Crear un nuevo DataGridViewRow
                DataGridViewRow^ row = gcnew DataGridViewRow();
                row->CreateCells(this->dataGridView1);
                row->Cells[0]->Value = codigoCurso;
                row->Cells[1]->Value = nombreCurso;
                row->Cells[2]->Value = creditos;
                row->Cells[3]->Value = categoria;

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
                String^ codigoCurso = safe_cast<String^>(selectedRow->Cells[0]->Value);

                // Buscar y eliminar el curso con el código correspondiente
                std::vector<Curso*>& cursos = Contenedor::getCursos();
                for (auto it = cursos.begin(); it != cursos.end(); ++it)
                {
                    if ((*it)->getCodigoCurso() == toStandardString(codigoCurso))
                    {
                        delete* it;
                        cursos.erase(it);
                        break;
                    }
                }

                // Limpiar el DataGridView y recargar los datos
                this->dataGridView1->Rows->Clear();
                LoadData();
            }
            else
            {
                MessageBox::Show("Seleccione un curso para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    };
}