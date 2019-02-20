#include "profesor.h"

profesor::profesor(string nombre,string apellidos,string dni):Persona(nombre,apellidos,dni)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->dni = dni;
}
void profesor::anyadirAlumno(alumno *a){
    listaAlumnos.push_back(a);
}

void profesor::asignarNotas(int pos, float n1){
    listaAlumnos[pos]->ponerNota(n1);
}

void profesor::asignarNotas(int pos, float n1, float n2){
    listaAlumnos[pos]->ponerNota(n1);
    listaAlumnos[pos]->ponerNota(n2);
}

void profesor::asignarNotas(int pos, float n1, float n2, float n3){
    listaAlumnos[pos]->ponerNota(n1);
    listaAlumnos[pos]->ponerNota(n2);
    listaAlumnos[pos]->ponerNota(n3);
}

vector <float> profesor::obtenerNotas1Alumno(int pos){
    return listaAlumnos[pos]->obtenerNotas();
}

float profesor::media(int pos){
    float media = 0.0;
    float suma = 0.0;
    int i;

    vector <float> notas = listaAlumnos[pos]->obtenerNotas();

    for(i=0;i < notas.size();i++){
        suma = suma + notas[i];
    }
    media = suma / notas.size();

    return (ceilf(media * 100)/100);
}

void profesor::imprimirLista(){
    int i;

        cout <<"Profesor@: "<<this->getNombre()<<" "<<this->getApellidos()<<endl;
        cout <<"------------------------"<<endl;
        cout <<"Lista de alumnos: "<<endl;

    for(i = 0; i <listaAlumnos.size();i++){
        cout <<"------------------------"<<endl;
        cout <<"Alumn@: "<<endl;
        cout <<"Nombre: "<<listaAlumnos[i]->getNombre()<<endl;
        cout <<"Apellidos: "<<listaAlumnos[i]->getApellidos()<<endl;
        cout <<"DNI: "<<listaAlumnos[i]->getDNI()<<endl <<"Notas: ";

        for(int j = 0;j<listaAlumnos[i]->obtenerNotas().size();j++){
            cout<<"/ "<<listaAlumnos[i]->obtenerNotas()[j]<<" /";
        }

        cout <<endl<<"Media: "<<media(i)<<endl;
        cout <<"------------------------"<<endl;
    }
}

void profesor::imprimirMejorAlumno(){
int pos;
float mediaAlumno = 0.0;

for(int i = 0;i<listaAlumnos.size();i++){
    if(listaAlumnos[i]->obtenerNotas().size() == 3 && media(i) != 0 && media(i) >= mediaAlumno ){
        mediaAlumno = media(i);
        pos = i;
    }
}

    cout <<"------------------------"<<endl;
    cout <<"Alumn@ con mejor media: "<<endl;
    cout <<"-> "<<listaAlumnos[pos]->getNombre()<<" "<<listaAlumnos[pos]->getApellidos()<<endl;
    cout <<"Media: "<<mediaAlumno<<endl;
    cout <<"------------------------"<<endl;
}
