#include "persona.h"

Persona::Persona(string nombre, string apellidos, string dni)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->dni = dni;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getApellidos(){
    return apellidos;
}

string Persona::getDNI(){
    return dni;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

void Persona::setApellidos(string apellidos){
    this->apellidos = apellidos;
}

void Persona::setDNI(string dni){
    this->dni = dni;
}
