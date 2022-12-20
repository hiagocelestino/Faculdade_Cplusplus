#include "doctest.h"
#include "bispo.h"
#include "excecoes.h"

TEST_CASE("Testando o Construtor"){
    Bispo bispo(1, 2);
}

Bispo bispo(1, 2);

TEST_CASE("Testando o get_posicao_x"){
    CHECK_EQ(1, bispo.get_posicao_x());
}

TEST_CASE("Testando o get_posicao_y"){
    CHECK_EQ(2, bispo.get_posicao_y());
}

TEST_CASE("Testando se a peça pode_mover '/' (CIMA)"){
    CHECK_EQ(true, bispo.pode_mover(2, 3));
}

TEST_CASE("Testando se a peça pode_mover '\' (CIMA)"){
    CHECK_EQ(true, bispo.pode_mover(0, 3));
}

TEST_CASE("Testando se a peça pode_mover '\' (BAIXO)"){
    CHECK_EQ(true, bispo.pode_mover(3, 0));
}

TEST_CASE("Testando se a peça pode_mover '/' (BAIXO)"){
    CHECK_EQ(true, bispo.pode_mover(0, 1));
}

TEST_CASE("Testando lançamento de exceção para movimento inválido"){
    CHECK_THROWS_AS(bispo.move(8, 9), MovimentoInvalidoException);
}

TEST_CASE("Testando se a peça realmente foi movida"){
    bispo.move(3, 0);
    CHECK_EQ(3, bispo.get_posicao_x());
    CHECK_EQ(0, bispo.get_posicao_y());
}

