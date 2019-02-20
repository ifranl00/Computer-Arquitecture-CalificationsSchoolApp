#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class alumno: public Persona
{
public:
    alumno(string nombre,string apellidos, string dni);
    void ponerNota(float nota);
    vector <float> obtenerNotas();

private:
    string nombre;
    string apellidos;
    string dni;
    vector <float> notas;
};

#endif // ALUMNO_H
