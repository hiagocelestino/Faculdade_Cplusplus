#ifndef PDS2_PEAO_H
#define PDS2_PEAO_H

#include "peca.h"

class Peao: public Peca{
public:
    Peao(int x, int y);
    bool pode_mover(int x, int y);
};

#endif
