#include "doctest.h"
#include "rei.h"
#include "excecoes.h"

TEST_CASE("Testando o Construtor") {
    Rei rei(1, 2);
}

Rei rei(1, 2);

TEST_CASE("Testando o get_posicao_x"){
    CHECK_EQ(1, rei.get_posicao_x());
}

TEST_CASE("Testando o get_posicao_y"){
    CHECK_EQ(2, rei.get_posicao_y());
}

TEST_CASE("Testando se a peça pode_mover"){
    CHECK_EQ(true, rei.pode_mover(2, 3));
}

TEST_CASE("Testando lançamento de exceção para movimento inválido"){
    CHECK_THROWS_AS(rei.move(5, 3), MovimentoInvalidoException);
}

TEST_CASE("Testando se a peça realmente foi movida"){
    rei.move(2, 3);
    CHECK_EQ(2, rei.get_posicao_x());
    CHECK_EQ(3, rei.get_posicao_y());
}