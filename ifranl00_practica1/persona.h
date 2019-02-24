#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include <vector>


using namespace std;

class persona
{
public:
    persona();
    persona(string name, string surnames, string nif);
    ~persona(void);

    string getName();
    string getSurnames();
    string getNif();

    void setName(string name);
    void setSurnames(string surnames);
    void setNif(string nif);


private:
    string name;
    string surnames;
    string nif;
};

#endif // PERSONA_H
