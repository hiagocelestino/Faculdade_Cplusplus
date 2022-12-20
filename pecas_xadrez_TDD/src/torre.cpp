#include "torre.h"

Torre::Torre(int x, int y):
    Peca(x, y){
    set_nome("♜"); 
};

bool Torre::pode_mover(int x, int y){
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
