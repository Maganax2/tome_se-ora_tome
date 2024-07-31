#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
	string nombre;
	string documentoIdentidad;
	string edad;
	string direccion;
	string distrito;
	string departamento;
	string celular;

public:
	Persona(string nombre, string documentoIdentidad,
		string edad, string direccion, string distrito, string departamento, string celular) {
		this->nombre = nombre;
		this->documentoIdentidad = documentoIdentidad;
		this->edad = edad;
		this->direccion = direccion;
		this->distrito = distrito;
		this->departamento = departamento;
		this->celular = celular;
	}

	string getNombre() {
		return nombre;
	}
	void setNombre(string nombre) {
		this->nombre = nombre;
	}

	string getDocumentoIdentidad() {
		return documentoIdentidad;
	}
	void setDocumentoIdentidad(string documentoIdentidad) {
		this->documentoIdentidad = documentoIdentidad;
	}
	string getEdad() {
		return edad;
	}
	void setEdad(string edad) {
		this->edad = edad;
	}
	string getDireccion() {
		return direccion;
	}

	void setDireccion(string dirección) {
		this->direccion = dirección;
	}

	string getDistrito() {
		return distrito;
	}

	void setDistrito(string distrito) {
		this->distrito = distrito;
	}

	string getDepartamento() {
		return departamento;
	}

	void setDepartamento(string departamento) {
		this->departamento = departamento;
	}

	string getCelular() {
		return celular;
	}

	void setCelular(string celular) {
		this->celular = celular;
	}

};