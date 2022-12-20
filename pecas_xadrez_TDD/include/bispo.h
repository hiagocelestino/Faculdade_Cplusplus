#ifndef PDS2_BISPO_H
#define PDS2_BISPO_H

#include "peca.h"

class Bispo: public Peca{
public:
    Bispo(int x, int y);
    bool pode_mover(int x, int y);
};

#endif
