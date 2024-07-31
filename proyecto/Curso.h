#pragma once
#include <iostream>
#include <string>
using namespace std;


class Curso {
private:
    string codigoCurso;
    string nombre;
    string creditos;
    string categoria;

public:
    Curso(string codigoCurso, string nombre, string creditos, string categoria) {
        this->codigoCurso = codigoCurso;
        this->nombre = nombre;
        this->creditos = creditos;
        this->categoria = categoria;
    }

    string getCodigoCurso() {
        return codigoCurso;
    }

    void setCodigoCurso(string codigoCurso) {
        this->codigoCurso = codigoCurso;
    }

    string getNombre() {
        return nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    string getCreditos() {
        return creditos;
    }

    void setCreditos(string creditos) {
        this->creditos = creditos;
    }


    string getCategoria() {
        return categoria;
    }

    void setCategoria(string categoria) {
        this->categoria = categoria;
    }
};