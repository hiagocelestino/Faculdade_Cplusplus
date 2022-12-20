#include "doctest.h"
#include "peao.h"

TEST_CASE("Testando o Construtor") {
    Peao peao(1, 2);
}

Peao peao(5, 1);

TEST_CASE("Testando o get_posicao_x"){
    CHECK_EQ(5, peao.get_posicao_x());
}

TEST_CASE("Testando o get_posicao_y"){
    CHECK_EQ(1, peao.get_posicao_y());
}

TEST_CASE("Testando se a peça pode_mover"){
    CHECK_EQ(true, peao.pode_mover(5, 2));
}