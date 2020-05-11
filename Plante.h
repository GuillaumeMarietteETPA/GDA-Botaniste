#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante {
    private:
        int _soif;
        int _croissance;
        int _angrais;
        std::string _nom;


public:

void arrosage();
void taille();
void angrais();

void afficher();

//Rose(std::string nomPlante);

};

#endif