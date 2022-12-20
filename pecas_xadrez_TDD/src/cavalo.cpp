#include "cavalo.h"
#include <excecoes.h>

Cavalo::Cavalo(int x, int y):
    Peca(x, y){
    set_nome("♞"); 
};

bool Cavalo::pode_mover(int x, int y){
    int pos_x = get_posicao_x();
    int pos_y = get_posicao_y();
    
    if( (x > 7) || (x > 7) || (y < 0) || (x < 0) ){
        return false;
    }
    // Esquerda e Cima ou Baixo
    if( ( x == pos_x + 2 ) && ( ( y == pos_y + 1 ) || ( y == pos_y - 1) ) ){
        return true;
    }
    // Direita e Cima ou Baixo
    if( ( x == pos_x - 2) && ( ( y == pos_y + 1 ) || ( y == pos_y - 1) ) ){
        return true;
    }
    // Cima e Direta ou Esquerda
    if( ( y == pos_y + 2) && ( ( x == pos_x + 1 ) || ( x == pos_x - 1) ) ){
        return true;
    }
    // Baixo e  Direta ou Esquerda
    if( ( y == pos_y - 2) && ( ( x == pos_x + 1 ) || ( x == pos_x - 1) ) ){
        return true;
    }
    
    return false;
}

