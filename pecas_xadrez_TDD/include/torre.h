#ifndef PDS2_TORRE_H
#define PDS2_TORRE_H

#include "peca.h"

class Torre: public Peca{
public:
    Torre(int x, int y);
    bool pode_mover(int x, int y);
};

#endif
