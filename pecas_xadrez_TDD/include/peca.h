#ifndef PDS2_PECA_H
#define PDS2_PECA_H
#include <string>

using namespace std;

class Peca{
private:
    string _nome;
    int _posicao_x;
    int _posicao_y;
public:
    Peca(int x, int y);
    string get_nome();
    void set_nome(string nome);
    int get_posicao_x();
    void set_posicao_x(int x);
    int get_posicao_y();
    void set_posicao_y(int y);
    void move(int x, int y);
    virtual bool pode_mover(int x, int y) = 0;
};

#endif
