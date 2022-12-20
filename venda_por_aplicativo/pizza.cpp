#include "pizza.hpp"
using namespace std;

std::string Pizza::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da pizza.
   *
   * Exemplos:
   * 2X Pizza Calabresa, 4 pedacos e borda recheada.
   * 2X Pizza Calabresa, 4 pedacos sem borda recheada.
   */
  std::string descricao = to_string(getQtd()) + "X Pizza " + sabor + string(", ") + to_string(pedacos) + string(" pedacos");
  if(this->borda_recheada){
    descricao += " e borda recheada.";
  }else{
    descricao += " e sem borda recheada.";
  }
  return descricao; 
}

Pizza::Pizza(const std::string& sabor,
             int pedacos,
             bool borda_recheada,
             int qtd,
             float valor_unitario) {
  // TODO: Implemente este metodo.
  this->sabor = sabor;
  this->pedacos = pedacos;
  this->borda_recheada = borda_recheada;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}