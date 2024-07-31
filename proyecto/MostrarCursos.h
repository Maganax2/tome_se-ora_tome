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

    public ref class MostrarCursos : public System::Windows::Forms::Form
    {
    public:
        MostrarCursos(void)
        {
            InitializeComponent();
            LoadData(); // Llama a LoadData en el constructor
        }

    protected:
        ~MostrarCursos()
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
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
            this->label1->Size = System::Drawing::Size(284, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"REGISTRO DE CURSOS";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(194, 130);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(439, 348);
            this->dataGridView1->TabIndex = 1;
            // 
            // MostrarCursos
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(815, 490);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MostrarCursos";
            this->Text = L"MostrarCursos";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

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
    };
}