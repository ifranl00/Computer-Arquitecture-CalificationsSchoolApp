#include "profesor.h"


profesor::profesor(string name, string surnames, string nif):persona(name,surnames,nif){

    this->name = name;
    this->surnames = surnames;
    this->nif = nif;
}

profesor::~profesor(){}

/*
 * Metodo para añadir un alumno al final de la lista de alumnos StudentsList
 * Recibe como pararmetro el alumno a añadir
 * No devuelve nada
*/
void profesor::addStudent(alumno *alumno){

    studentsList.push_back(alumno);

}

/*
 * Metodo que permite asignar  una nota a un alumno
 * Recibe como parametro la posicion en la que se encuentra el alumno
 * No devuelve nada
 */
void profesor::assingGrades(float grade1, int studentPos){

    int numOfGrades = 0;
    studentsList[studentPos]->assingGrades(grade1);

     numOfGrades = 1;
     studentsList[studentPos]->setNumberOfGrades(numOfGrades);
}

/*
 * Metodo que permite asignar dos notas a un alumno
 * Recibe como parametro la posicion en la que se encuentra el alumno
 * No devuelve nada
 */
void profesor::assingGrades(float grade1, float grade2, int studentPos){

   int numOfGrades = 0;

    studentsList[studentPos]->assingGrades(grade1);
    studentsList[studentPos]->assingGrades(grade2);

    numOfGrades = 2;
    studentsList[studentPos]->setNumberOfGrades(numOfGrades);
}

/*
 * Metodo que permite asignar tres notas a un alumno
 * Recibe como parametro la posicion en la que se encuentra el alumno
 * No devuelve nada
 */
void profesor::assingGrades(float grade1,float grade2, float grade3, int studentPos){

    int numOfGrades = 0;

    studentsList[studentPos]->assingGrades(grade1);
    studentsList[studentPos]->assingGrades(grade2);
    studentsList[studentPos]->assingGrades(grade3);

    numOfGrades = 3;

    studentsList[studentPos]->setNumberOfGrades(numOfGrades);
}


/*
 * Metodo que calcula la media de las notas de un alumno concreto
 * Recibe como parametro la posicion del alumno
 * Devuelve la media de las notas del alumno
 */
float profesor::calculateAverageOfGrades(int studentPos){

    float sum= 0;
    float average = 0;
    int numberOfGrades = studentsList[studentPos]->getNumberOfGrades();

    for(int i = 0; i < studentsList[studentPos]->getGradesList().size();i++ ){

       sum= sum + studentsList[studentPos]->getGradesList()[i];
    }

    average =  sum / numberOfGrades;
    studentsList[studentPos]->setAverage(average);

    return average;
}

/*
 * Metodo que guarda en una lista las medias de todos los alumnos
 * No recibe ningun parametro
 * Devuelve la lista de medias
 */
vector <float> profesor::getAveragesList(){

    vector <float> averagesList;
    for(int i = 0; i < averagesList.size();i++){

        averagesList[i] = calculateAverageOfGrades(i);

    }

}

/*
 * Metodo que busca la media mas alta de entre todas las de los alumnos
 * No recibe ningun parametro
 * Devuelve la mejor media de todas
 */
float profesor::getBestAverageGradeStudent(){

    float max= 0;

    for(int i = 0; i < averagesList.size();i++ ){

        if(averagesList[i] > max){
            max = averagesList[i];
        }
    }return max;

}

/*
 * Metodo que muestra la lista de los alumnos de un profesor
 * No recibe ningun parametro
 * No devuelve nada solo imprime por pantalla
 */

void profesor::showStudentsList(){

    for(int i = 0; i < studentsList.size();i++){

        cout <<studentsList[i]->getName()<<endl;
        cout <<studentsList[i]->getSurnames()<<endl;
        cout <<studentsList[i]->getNif()<<endl;
        cout <<calculateAverageOfGrades(i)<<endl;
    }

}

/*
 * Metodo que muestra el alumno de la lista de alumnos del profesor que tiene mejor nota media si tiene tres notas
 * No recibe ningun parametro
 * No devuelve nada solo imprime por pantalla
 */
void profesor::showBestAverageOfGrades(){

    for(int i = 0; i < studentsList.size();i++){
        if(studentsList[i]->getNumberOfGrades() != 3){
            if(getBestAverageGradeStudent() == studentsList[i]->getAverage() ){

                cout <<studentsList[i]<<endl;
            }
        }
    }




}








