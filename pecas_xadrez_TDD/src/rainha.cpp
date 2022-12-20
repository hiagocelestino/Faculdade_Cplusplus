#include "rainha.h"

Rainha::Rainha(int x, int y):
    Peca(x, y){
    set_nome("♛"); 
};

bool Rainha::pode_mover(int x, int y){
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

    int pos_x = get_posicao_x();
    int pos_y = get_posicao_y();

    for(pos_x = get_posicao_x(); pos_x <= 7; pos_x++){
        if(x == pos_x && y == pos_y){
            return true;
        }
    }

    pos_x = get_posicao_x();
    for(pos_x = get_posicao_x(); pos_x >= 0; pos_x--){
        if(x == pos_x && y == pos_y){
            return true;
        }
    }

    pos_x = get_posicao_x();
    for(pos_y = get_posicao_y(); pos_y <= 7; pos_y++){
        if(x == pos_x && y == pos_y){
            return true;
        }
    }

    for(pos_y = get_posicao_y(); pos_y >= 0; pos_y--){
        if(x == pos_x && y == pos_y){
            return true;
        }
    }
    return false;
}
