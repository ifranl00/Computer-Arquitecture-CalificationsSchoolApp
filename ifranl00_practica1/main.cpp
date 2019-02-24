#include <QCoreApplication>
#include "profesor.h"
#include "persona.h"
#include "alumno.h"
#include <iostream>
#include <string>

using namespace std;

void calificando(){

    profesor *p = new profesor("Eduardo"," Andersen McMichael", "02458997J");

    alumno *a0 = new alumno("Manuela", "Arcila Guerra", "20544887K");
    alumno *a1 = new alumno("Tania", "Coque Rodríguez", "05847119N");
    alumno *a2 = new alumno("Dona", "Costa Suárez", "068995471L");

    p->addStudent(a0);
    p->addStudent(a1);
    p->addStudent(a2);

    p->assingGrades(9, 0);
    p->assingGrades(6, 7, 1);
    p->assingGrades(8, 9, 3);

   p->showStudentsList();
   p->showBestAverageOfGrades();
}
int main()
{
   calificando();
    return 0;
}
