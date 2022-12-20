#include "peca.h"
#include "excecoes.h"

Peca::Peca(int x, int y) {
    set_posicao_x(x);
    set_posicao_y(y);
}

string Peca::get_nome(){
    return this->_nome;
}

void Peca::set_nome(string nome){
    this->_nome = nome;
}

int Peca::get_posicao_x(){
    return this->_posicao_x;
}

void Peca::set_posicao_x(int x){
    if(x <= 7 && x >= 0){
        _posicao_x = x;
    }
}

int Peca::get_posicao_y(){
    return this->_posicao_y;
}

void Peca::set_posicao_y(int y){
    if(y <= 7 && y >= 0){
        _posicao_y = y;
    }
}

void Peca::move(int x, int y){
    if(pode_mover(x, y)){
        set_posicao_x(x);
        set_posicao_y(y);
    }else{
        throw MovimentoInvalidoException();
    }
}