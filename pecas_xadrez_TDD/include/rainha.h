#ifndef PDS2_RAINHA_H
#define PDS2_RAINHA_H

#include "peca.h"

class Rainha: public Peca{
public:
    Rainha(int x, int y);
    bool pode_mover(int x, int y);
};

#endif
