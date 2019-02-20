#include <QCoreApplication>
#include "persona.h"
#include "alumno.h"
#include "profesor.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void Calificando(){

    profesor *p = new profesor("Dona","Costa Suarez","71477480N");

    alumno *a1 = new alumno("Tania","Coque Rodriguez","58963244L");
    alumno *a2 = new alumno("Manuela","Arcila Guerra","65228879M");
    alumno *a3 = new alumno("Irene","Francisco Lopez","56459920P");
    alumno *a4 = new alumno("Diego","Seivane Sierra","09234555J");
    alumno *a5 = new alumno("Samuel","Gonzalez Hernandez","08853621N");
    alumno *a6 = new alumno("Victor","Martinez Ocampo","96635502L");
    alumno *a7 = new alumno("Adrian","Martinez Rey","07452311P");

    p->anyadirAlumno(a1);
    p->anyadirAlumno(a2);
    p->anyadirAlumno(a3);
    p->anyadirAlumno(a4);
    p->anyadirAlumno(a5);
    p->anyadirAlumno(a6);
    p->anyadirAlumno(a7);

    p->asignarNotas(0, 5.6,8.0,4.2);
    p->asignarNotas(1,7.5,3.2,6.0);
    p->asignarNotas(2, 6.0, 5.5);
    p->asignarNotas(3,9.6,8.8,5.0);
    p->asignarNotas(4,0.0,7.2,6.8);
    p->asignarNotas(5,7.5,2.3);
    p->asignarNotas(6,8.0,5.5);

    p->imprimirLista();

    p->imprimirMejorAlumno();
}

int main()
{
    Calificando();

    return 0;
}
