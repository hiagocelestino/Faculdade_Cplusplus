#include "peao.h"
#include <excecoes.h>

Peao::Peao(int x, int y):
    Peca(x, y){
    set_nome("♟"); 
};

bool Peao::pode_mover(int x, int y){
    if( x == get_posicao_x() && y == get_posicao_y() + 1){
        return true;
    }
    return false;
}
