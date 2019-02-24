#include "alumno.h"

alumno::alumno(string name,string surnames,string nif):persona(name,surnames,nif)
{
    this->name = name;
    this->surnames = surnames;
    this->nif= nif;

}

alumno::~alumno(){}

void alumno::assingGrades(float grade1){

    gradesList.push_back(grade1);

}

vector <float> alumno::getGradesList(){

    return gradesList;

}

void alumno::setNumberOfGrades(int numberOfGrades){

    this->numberOfGrades = numberOfGrades;
}

int alumno::getNumberOfGrades(){

    return numberOfGrades;
}

void alumno::setAverage(float average){

    this->average = average;
}
float alumno::getAverage(){

    return average;
}
