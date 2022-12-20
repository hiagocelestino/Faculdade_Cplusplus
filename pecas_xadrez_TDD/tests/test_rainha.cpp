#include "doctest.h"
#include "rainha.h"
#include "excecoes.h"


TEST_CASE("Testando o Construtor") {
    Rainha rainha(1, 2);
}

Rainha rainha(4, 3);

TEST_CASE("Testando o get_posicao_x"){
    CHECK_EQ(4, rainha.get_posicao_x());
}

TEST_CASE("Testando o get_posicao_y"){
    CHECK_EQ(3, rainha.get_posicao_y());
}

TEST_CASE("Testando se a peça pode_mover"){
    CHECK_EQ(true, rainha.pode_mover(4, 7));
}

TEST_CASE("Testando se a peça pode_mover '/' (CIMA)"){
    CHECK_EQ(true, rainha.pode_mover(6, 5));
}

TEST_CASE("Testando lançamento de exceção para movimento inválido"){
    CHECK_THROWS_AS(rainha.move(5, 5), MovimentoInvalidoException);
}

TEST_CASE("Testando se a peça realmente foi movida"){
    rainha.move(4, 7);
    CHECK_EQ(4, rainha.get_posicao_x());
    CHECK_EQ(7, rainha.get_posicao_y());
}