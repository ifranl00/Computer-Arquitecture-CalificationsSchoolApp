#include "persona.h"

persona::persona(){}

persona::persona(string name,string surnames,string nif){
    this->name = name;
    this->surnames = surnames;
    this->nif = nif;
}

string persona::getName(){

    return this->name;
}

string persona::getSurnames(){

    return this->surnames;
}

string persona::getNif(){

    return this->nif;
}

void persona::setName(string name){

    this->name = name;
}

void persona::setSurnames(string surnames){

    this->surnames = surnames;
}

void persona::setNif(string nif){

    this->nif = nif;
}
persona::~persona(){}
