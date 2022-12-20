#include "venda.hpp"

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void Venda::adicionaCelular(const Celular& celular) {
  // TODO: Implemente este metodo
  m_celulares.push_back(celular);
}

void Venda::ordena() {
  // TODO: Implemente este metodo
  // Preste atencao no exemplo que a descricao utilizada na ordenacao considera
  // a fabricante antes do modelo do celular
  m_celulares.sort();
}

void Venda::recarregaEstoque(int cod, int qtd) {
  // TODO: Implemente este metodo
  for(auto it = m_celulares.begin(); it != m_celulares.end(); it++){
    if(it->_cod == cod){
      it->_qtd += qtd;
      break;
    }
  }
}

void Venda::efetuaVenda(int cod, int qtd) {
  // TODO: Implemente este metodo
  /**
   * Observe na descricao do enunciado que nao e permita a venda de um modelo
   * cuja quantidade seja maior que a quantidade atual em estoque.
   * Ex: Se existirem apenas 5 celulares Motorola Moto G50 em estoque, vendas a
   * partir de 6 unidades devem ser ignoradas.
   */
  for(auto it = m_celulares.begin(); it != m_celulares.end(); it++){
    if(it->_cod == cod){
      if(it->_qtd >= qtd){
        it->_qtd = it->_qtd - qtd;
      }
    }
  }
}

void Venda::aplicaDesconto(const std::string& fabricante, float desconto) {
  // TODO: Implemente este metodo
  for(auto it = m_celulares.begin(); it != m_celulares.end(); it++){
    if(it->_fabricante == fabricante){
      it->_valor = it->_valor*(1.0-(desconto/100.0));
    }
  }
}

void Venda::removeModelo(int cod) {
  // TODO: Implemente este metodo
  list<Celular>::iterator it = m_celulares.begin();
  for(it; it != m_celulares.end(); it++){
    if(it->_cod == cod){
      break;
    }
  }
    m_celulares.erase(it);
}

void Venda::imprimeEstoque() const {
  // TODO: Implemente este metodo.
  /**
   * Aqui voce tera que imprimir a lista de celulares em estoque com as
   * restricoes descritas no enunciado do problema. Notem no exemplo que a
   * primeira letra da cor do celular fica maiuscula. Outra coisa, se houver
   * apenas um item em estoque de determinado modelo de celular, voce tera que
   * imprimir '1 restante' e nao '1 restantes'. Por ultimo, apenas modelos de
   * celulares com pelo menos um item em estoque deverao ser exibidos.
   */

  //Samsung Galaxy M22, 128GB, 4GB RAM, 1860 gramas, Preto, 4 restantes, R$ 1349.00
  //Galaxy M22, Samsung, 128, 4, 0.186, preto, 10, 1349

  for(auto it = m_celulares.begin(); it != m_celulares.end(); it++){
    if(it->_qtd > 0){
      string cor = it->_cor.c_str(); 
      cor[0] = toupper(cor[0]);
      cout << it->_fabricante << ' ' << it->_modelo;
      cout << ", ";
      cout << it->_armazenamento << "GB";
      cout << ", ";
      cout << it->_memoria << "GB RAM";
      cout << ", ";
      cout << it->_peso * 1000 << " gramas";
      cout << ", ";
      cout << cor;
      cout << ", ";
      cout << it->_qtd;
      if(it->_qtd > 1){
        cout << " restantes";
      }else{
        cout << " restante";
      }
      cout << ", ";
      cout << "R$ ";
      printf("%.2f", it->_valor);
      cout << endl;
    }
  }
}