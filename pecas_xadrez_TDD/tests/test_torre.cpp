#include "doctest.h"
#include "torre.h"
#include "excecoes.h"

TEST_CASE("Testando o Construtor") {
    Torre torre(1, 2);
}

Torre torre(4, 3);

TEST_CASE("Testando o get_posicao_x"){
    CHECK_EQ(4, torre.get_posicao_x());
}

TEST_CASE("Testando o get_posicao_y"){
    CHECK_EQ(3, torre.get_posicao_y());
}

TEST_CASE("Testando se a peça pode_mover"){
    CHECK_EQ(true, torre.pode_mover(4, 7));
}

TEST_CASE("Testando lançamento de exceção para movimento inválido"){
    CHECK_THROWS_AS(torre.move(5, 4), MovimentoInvalidoException);
}

TEST_CASE("Testando se a peça realmente foi movida"){
    torre.move(4, 7);
    CHECK_EQ(4, torre.get_posicao_x());
    CHECK_EQ(7, torre.get_posicao_y());
}