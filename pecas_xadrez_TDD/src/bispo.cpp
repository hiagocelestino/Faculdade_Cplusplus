#include "bispo.h"
#include <iostream>
#include <excecoes.h>

using namespace std;

Bispo::Bispo(int x, int y):
    Peca(x, y){
    set_nome("♝"); 
};

bool Bispo::pode_mover(int x, int y){
    // Movimento '/' CIMA
    int cont_pos_y = this->get_posicao_y();
    for(
        int cont_pos_x = this->get_posicao_x();
        cont_pos_x <= 7 && cont_pos_y <=7;
        cont_pos_x++
    ){
       if(cont_pos_x == this->get_posicao_x() && cont_pos_y == this->get_posicao_y()){
        continue;
       }
       cont_pos_y++;
       if(x == cont_pos_x && y ==cont_pos_y){
        return true;
       }   
    }
    
    // Movimento '\' CIMA
    cont_pos_y = this->get_posicao_y();
    for(
        int cont_pos_x = this->get_posicao_x();
        cont_pos_x >= 0 && cont_pos_y <=7;
        cont_pos_x--
    ){
       if(cont_pos_x == this->get_posicao_x() && cont_pos_y == this->get_posicao_y()){
        continue;
       }
       cont_pos_y++;
       if(x == cont_pos_x && y ==cont_pos_y){
        return true;
       }   
    }

    // Movimento '\' BAIXO
    cont_pos_y = this->get_posicao_y();
    for(
        int cont_pos_x = this->get_posicao_x();
        cont_pos_x <= 7 && cont_pos_y >= 0;
        cont_pos_x++
    ){
       if(cont_pos_x == this->get_posicao_x() && cont_pos_y == this->get_posicao_y()){
        continue;
       }
       cont_pos_y--;
       if(x == cont_pos_x && y ==cont_pos_y){
        return true;
       }   
    }

    // Movimento '/' BAIXO
    cont_pos_y = this->get_posicao_y();
    for(
        int cont_pos_x = this->get_posicao_x();
        cont_pos_x >= 0 && cont_pos_y >=0;
        cont_pos_x--
    ){
       if(cont_pos_x == this->get_posicao_x() && cont_pos_y == this->get_posicao_y()){
            continue;
       }
       cont_pos_y--;
       if(x == cont_pos_x && y == cont_pos_y){
        return true;
       }   
    }
    return false;
}
