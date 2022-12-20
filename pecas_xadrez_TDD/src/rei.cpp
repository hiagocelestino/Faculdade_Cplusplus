#include "rei.h"

Rei::Rei(int x, int y):
    Peca(x, y){
    set_nome("♔"); 
};

bool Rei::pode_mover(int x, int y){

    int pos_x = get_posicao_x();
    int pos_y = get_posicao_y();
    
    if( (x > 7) || (x > 7) || (y < 0) || (x < 0) ){
        return false;
    }

    if ( y == pos_x && ( (x == pos_x + 1) || (x == pos_x - 1) ) ){
        return true;
    }

    if ( x == pos_x && ( (y == pos_y + 1) || (y == pos_y - 1) ) ){
        return true;
    }

    if ( x == pos_x + 1 && ( (y == pos_y + 1) || (y == pos_y - 1) )){
        return true;
    }

    if ( x == pos_x - 1 && ( (y == pos_y + 1) || (y == pos_y - 1) ) ){
        return true;
    }

    return false;
}
