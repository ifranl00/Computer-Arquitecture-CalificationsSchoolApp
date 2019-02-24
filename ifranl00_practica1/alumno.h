#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"
#include <vector>
#include <iostream>
#include <string>


using namespace std;

class alumno : public persona
{
public:
    alumno(string name, string surnames, string nif);
    void assingGrades(float grade1);
    vector <float> getGradesList();
    void setNumberOfGrades(int numberOfGrades);
    int getNumberOfGrades();
    void setAverage(float average);
    float getAverage();
    ~alumno(void);

 private:
    string name;
    string surnames;
    string nif;
    vector <float> gradesList;
    int numberOfGrades;
    float average;

};

#endif // ALUMNO_H
