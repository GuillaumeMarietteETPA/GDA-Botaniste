#ifndef ROSE_CPP
#define ROSE_CPP

#include <iostream>
#include "Rose.h"
#include "Plante.h"

void Rose::arrosage(){
    _soif-=30;
    if(_soif<0) _croissance-=10;
    if(_soif=0) _croissance+=20;
    _taillage+=20;
}

void Rose::taille(){
    _taillage-=30;
   _croissance+=20;
}

void Rose::angrais(){
    angraissage+=1;
    if(angraissage<1)  _croissance+=20;
}

void Rose::afficher(){
    std::cout << /*_nom <<*/ " Cette rose, a une soif de "
    << _soif << "/100, une taille de "
    << _taillage << "/100, et un croissance de " << _croissance << "/100." << std::endl;

}

 //Rose::Rose(std::string name) : Plante(name) {}

 #endif