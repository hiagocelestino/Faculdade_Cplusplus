#include "doctest.h"
#include "cavalo.h"
#include "excecoes.h"

TEST_CASE("Testando o Construtor") {
    Cavalo cavalo(3, 3);
}

Cavalo cavalo(3, 3);

TEST_CASE("Testando o get_posicao_x"){
    CHECK_EQ(3, cavalo.get_posicao_x());
}

TEST_CASE("Testando o get_posicao_y"){
    CHECK_EQ(3, cavalo.get_posicao_y());
}

TEST_CASE("Testando se a peça pode_mover Direita e Cima"){
    CHECK_EQ(true, cavalo.pode_mover(5, 4));
}

TEST_CASE("Testando se a peça pode_mover Direita e Baixo"){
    CHECK_EQ(true, cavalo.pode_mover(5, 2));
}

TEST_CASE("Testando lançamento de exceção para movimento inválido"){
    CHECK_THROWS_AS(cavalo.move(5, 3), MovimentoInvalidoException);
}

TEST_CASE("Testando se a peça realmente foi movida"){
    cavalo.move(5, 4);
    CHECK_EQ(5, cavalo.get_posicao_x());
    CHECK_EQ(4, cavalo.get_posicao_y());
}
