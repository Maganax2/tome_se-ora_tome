#pragma once
#include "Persona.h"
class Alumno : public Persona {
private:
    string codigoAlumno;
    string carreraProfesional;
    string correoInstitucional;
    string modalidadIngreso;

public:
    Alumno(string nombre, string documentoIdentidad, string edad, string dirección, string distrito,string departamento, string celular, string codigoAlumno, string modalidadIngreso, string carreraProfesional) :
        Persona(nombre, documentoIdentidad, edad, dirección, distrito,departamento, celular) {
        this->codigoAlumno = codigoAlumno;
        this->carreraProfesional = carreraProfesional;
        this->modalidadIngreso = modalidadIngreso;
        this->correoInstitucional = codigoAlumno + "@unsaac.edu.pe";
    }

    string getCodigoAlumno() {
        return codigoAlumno;
    }

    void setCodigoAlumno(string codigoAlumno) {
        this->codigoAlumno = codigoAlumno;
    }

    string getCarreraProfesional() {
        return carreraProfesional;
    }

    void setCarreraProfesional(string carreraProfesional) {
        this->carreraProfesional = carreraProfesional;
    }

    string getCorreoInstitucional() {
        return correoInstitucional;
    }

    void setCorreoInstitucional(string correoInstitucional) {
        this->correoInstitucional = correoInstitucional;
    }

    string getModalidadIngreso() {
        return modalidadIngreso;
    }

    void setModalidadIngreso(string modalidadIngreso) {
        this->modalidadIngreso = modalidadIngreso;
    }
};