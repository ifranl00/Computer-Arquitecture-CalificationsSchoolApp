#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:
    Persona(string nombre,string apellidos,string dni);
    string getNombre();
    string getApellidos();
    string getDNI();
    void setNombre(string nombre);
    void setApellidos(string apellidos);
    void setDNI(string dni);
private:
    string nombre;
    string apellidos;
    string dni;
};

#endif // PERSONA_H
