#ifndef PROFESOR_H
#define PROFESOR_H
#include "persona.h"
#include "alumno.h"
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class profesor: public Persona
{
public:
    profesor(string nombre,string apellidos, string dni);
    void anyadirAlumno(alumno *a);
    void asignarNotas(int pos, float n1);
    void asignarNotas(int pos, float n1, float n2);
    void asignarNotas(int pos, float n1, float n2, float n3);
    vector <float> obtenerNotas1Alumno(int pos);
    float media(int pos);
    void imprimirLista();
    void imprimirMejorAlumno();

private:
    string nombre;
    string apellidos;
    string dni;
    vector <alumno*> listaAlumnos;
};

#endif // PROFESOR_H
