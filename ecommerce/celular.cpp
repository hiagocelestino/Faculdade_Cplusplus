#include "celular.hpp"
#include "iostream"
using namespace std;

// TODO: Inicialize aqui sua variavel estatica. Caso tenha optado por essa
// solucao.
int Celular::_num_celulares = 0;

Celular::Celular(std::string modelo,
                 std::string fabricante,
                 int armazenamento,
                 int memoria,
                 double peso,
                 std::string cor,
                 int qtd,
                 float valor){
  _modelo = modelo;
  _fabricante = fabricante;
  _armazenamento = armazenamento;
  _memoria = memoria;
  _peso = peso;
  _cor = cor;
  _qtd = qtd;
  _valor = valor;  
  _cod = ++Celular::_num_celulares;
}

bool Celular::operator<(const Celular& other) {
  // TODO: Implemente este metodo. 
  // Preste atencao no exemplo que a descricao utilizada na ordenacao considera
  // a fabricante antes do modelo do celular
  if(_fabricante != other._fabricante){
    if(_fabricante.compare(other._fabricante) < 0){
      return true;
    }
  }else{
    if(_modelo.compare(other._modelo) < 0){
      return true;
    }
  }

  return false;
}
