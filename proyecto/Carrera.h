#pragma once
#include <iostream>
#include <string>

using namespace std;

class Carrera {
private:
    string codigoCarrera;
    string nombreCarrera;
    string facultad;
    string sede;
public:
    Carrera(string codigoCarrera, string nombreCarrera, string facultad, string sede) {
        this->codigoCarrera = codigoCarrera;
        this->nombreCarrera = nombreCarrera;
        this->facultad = facultad;
        this->sede = sede;
    }

    string getCodigoCarrera() {
        return codigoCarrera;
    }

    void setCodigoCarrera(string codigoCarrera) {
        this->codigoCarrera = codigoCarrera;
    }

    string getNombreCarrera() {
        return nombreCarrera;
    }

    void setNombreCarrera(string nombreCarrera) {
        this->nombreCarrera = nombreCarrera;
    }

    string getFacultad() {
        return facultad;
    }

    void setFacultad(string facultad) {
        this->facultad = facultad;
    }

    string getSede() {
        return sede;
    }

    void setSede(string sede) {
        this->sede = sede;
    }
};