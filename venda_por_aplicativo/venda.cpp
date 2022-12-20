#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  // TODO: Implemente este metodo
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
  for(auto pedido: m_pedidos){
    delete pedido;
  }
}

void Venda::adicionaPedido(Pedido* p) {
  // TODO: Implemente este metodo
  m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {
  // TODO: Implemente este metodo
  /**
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de venda e a quantidade
   * de pedidos processados.
   */
  int cont = 0;
  float total_venda = 0.0;
  for(auto pedido: m_pedidos){
    cont++;
    total_venda += pedido->calculaTotal();
    std::cout << "Pedido " << cont << std::endl;
    std::cout << pedido->resumo() << std::endl;
  }
  std::cout << "Relatorio de Vendas" << std::endl;
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Total de vendas: R$ " << total_venda << std::endl;
  std::cout << "Total de pedidos: " << cont << std::endl;

}