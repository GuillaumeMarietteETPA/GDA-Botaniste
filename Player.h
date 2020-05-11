#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Plante.h"

class Rose{
   
    private:
        std::string _playerName;

    public:
        void arroser();
        void tailler();
        void angraisser();
        void inspecter();

        Player(std::string nomPlayer);



};

#endif