#pragma once
#include <vector>
#include "Alumno.h"
#include "Carrera.h"
#include "Curso.h"
using namespace std;

class Contenedor {
private:
    static vector<Alumno*> alumnos;
    static vector<Carrera*> carreras;
    static vector<Curso*> cursos;

public:
    static vector<Alumno*>& getAlumnos() {
        return alumnos;
    }

    static vector<Carrera*>& getCarreras() {
        return carreras;
    }

    static vector<Curso*>& getCursos() {
        return cursos;
    }

    static void addAlumno(Alumno* alumno) {
        alumnos.push_back(alumno);
    }

    static void addCarrera(Carrera* carrera) {
        carreras.push_back(carrera);
    }

    static void addCurso(Curso* curso) {
        cursos.push_back(curso);
    }
};