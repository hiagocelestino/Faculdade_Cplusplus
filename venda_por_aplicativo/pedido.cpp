#include "pedido.hpp"
using namespace std;

Pedido::~Pedido() {
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_produtos
   */
  // int size = m_produtos.size();
  // if(m_produtos != nullptr){
  //   for(int i = 0; i < size; i++){
  //     if(m_produtos[i] != nullptr){
  //       delete[] m_produtos[i];
  //     }
  //   }
  // }
  for(auto produto: m_produtos){
    delete produto;
  }
}

void Pedido::setEndereco(const std::string& endereco) {
  // TODO: Implemente este metodo.
  this->m_endereco = endereco;
}

float Pedido::calculaTotal() const {
  // TODO: Implemente este metodo.
  float total = 0.0;
  for(auto produto: m_produtos){
    total += (float)produto->getQtd() * produto->getValor(); 
  }
  return total;
}

void Pedido::adicionaProduto(Produto* p) {
  // TODO: Implemente este metodo.
  m_produtos.push_back(p);
}

std::string Pedido::resumo() const {
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve percorrer a lista de produtos para criar um resumo completo
   * do pedido. A cada iteracao, utilize o metodo descricao de cada produto para
   * montar o resumo do pedido. Por fim, adicione o endereco de entrega.
   *
   */
  string resumo;
  for(auto produto: m_produtos){
    resumo += produto->descricao() + string("\n");
  }
  resumo += string("Endereco: ") + m_endereco;
  return resumo;
}