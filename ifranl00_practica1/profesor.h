#ifndef PROFESOR_H
#define PROFESOR_H
#include "persona.h"
#include "alumno.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class profesor: public persona
{
public:
    profesor(string name, string surnames, string nif);

    void addStudent(alumno *alumno);
    void assingGrades(float grade1, int studentPos);
    void assingGrades(float grade1, float grade2, int studentPos);
    void assingGrades(float grade1, float grade2, float grade3, int studentPos);
    float calculateAverageOfGrades(int studentPos);
    vector <float> getAveragesList();
    float getBestAverageGradeStudent();
    void showStudentsList();
    void showBestAverageOfGrades();

    ~profesor(void);


private:
    string name;
    string surnames;
    string nif;
    vector <alumno*> studentsList;
    vector <float> averagesList;



};

#endif // PROFESOR_H
