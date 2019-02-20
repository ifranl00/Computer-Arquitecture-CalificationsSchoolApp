#include "alumno.h"

alumno::alumno(string nombre, string apellidos,string dni):Persona(nombre,apellidos,dni)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->dni = dni;
}

void alumno::ponerNota(float nota){
    notas.push_back(nota);
}


vector <float> alumno::obtenerNotas(){
    return notas;
}

