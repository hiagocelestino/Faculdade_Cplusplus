#include "japonesa.hpp"
using namespace std;

std::string Japonesa::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da comida
   * japonesa.
   *
   * Exemplos:
   * 1X Comida japonesa - Combo 1, 4 sushis, 5 temakis e 6 hots.
   * 1X Comida japonesa - Combo 2, 5 sushis, 6 temakis e 8 hots.
   */
  std::string descricao = to_string(getQtd()) + "X Comida japonesa - " + combinado + string(", ") + to_string(sushis) + string(" sushis") + string(", ") + to_string(temakis) + string(" temakis") + string(" e ") + to_string(hots) + string(" hots.");
  return descricao;
}

Japonesa::Japonesa(const std::string& combinado,
                   int sushis,
                   int temakis,
                   int hots,
                   int qtd,
                   float valor_unitario) {
  // TODO: Implemente este metodo.
  this->combinado = combinado;
  this->sushis = sushis;
  this->temakis = temakis;
  this->hots = hots;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}