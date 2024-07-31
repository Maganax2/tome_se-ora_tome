#pragma once

#include "Contenedor.h"
#include "Carrera.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace proyecto {

    public ref class MostrarCarreras : public System::Windows::Forms::Form
    {
    public:
        MostrarCarreras(void)
        {
            InitializeComponent();
            LoadData(); // Llama a LoadData en el constructor
        }

    protected:
        ~MostrarCarreras()
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
            this->label1->Size = System::Drawing::Size(314, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"REGISTRO DE CARRERAS";
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(214, 130);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(426, 348);
            this->dataGridView1->TabIndex = 1;
            // 
            // MostrarCarreras
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(815, 490);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MostrarCarreras";
            this->Text = L"MostrarCarreras";
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
            this->dataGridView1->Columns->Add("codigoCarrera", "Código Carrera");
            this->dataGridView1->Columns->Add("nombreCarrera", "Nombre Carrera");
            this->dataGridView1->Columns->Add("facultad", "Facultad");
            this->dataGridView1->Columns->Add("sede", "Sede");

            // Acceder al vector estático de carreras desde Contenedor
            std::vector<Carrera*>& carreras = Contenedor::getCarreras();
            for (Carrera* carrera : carreras)
            {
                // Convertir datos del puntero Carrera a String^
                String^ codigoCarrera = gcnew String(carrera->getCodigoCarrera().c_str());
                String^ nombreCarrera = gcnew String(carrera->getNombreCarrera().c_str());
                String^ facultad = gcnew String(carrera->getFacultad().c_str());
                String^ sede = gcnew String(carrera->getSede().c_str());

                // Crear un nuevo DataGridViewRow
                DataGridViewRow^ row = gcnew DataGridViewRow();
                row->CreateCells(this->dataGridView1);
                row->Cells[0]->Value = codigoCarrera;
                row->Cells[1]->Value = nombreCarrera;
                row->Cells[2]->Value = facultad;
                row->Cells[3]->Value = sede;

                // Agregar la fila al DataGridView
                this->dataGridView1->Rows->Add(row);
            }
        }
    };
}