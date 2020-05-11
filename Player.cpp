#ifndef PLAYER_CPP
#define PLAYER_CPP

#include <string>
#include "Player.h"
#include "Plante.h"

    std::string _playerName;
  
  
    void Player::arroser(Plante * cible){
        cible->arrosage();
    }
    
    void Player::tailler(Plante * cible){
        cible->taillage();
    }
    
    
    
    
    Player::Player(std::string nomPlayer): _playerName(nomPlayer) {}
    
#endif