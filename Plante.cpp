#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include "Plante.h"

void Plante::arrosage(){    }

void Plante::taille(){     }

void Plante::angrais(){      }

void Plante::afficher(){
    std::cout << /*_nom <<*/ " Rose est une plante, a une soif de "
    << _soif << "/100, une taille de "
    << _taille << "/100, et une croissance de " 
    << _croissance << "/100." << std::endl;
}

//Plante::Plante(std::string name) : _nom(name)  {}

#endif