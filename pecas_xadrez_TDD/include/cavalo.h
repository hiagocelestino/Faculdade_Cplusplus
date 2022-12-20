#ifndef PDS2_CAVALO_H
#define PDS2_CAVALO_H

#include "peca.h"

class Cavalo: public Peca{
public:
    Cavalo(int x, int y);
    bool pode_mover(int x, int y);
};

#endif
