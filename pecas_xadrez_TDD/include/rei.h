#ifndef PDS2_REI_H
#define PDS2_REI_H

#include "peca.h"

class Rei: public Peca{
public:
    Rei(int x, int y);
    bool pode_mover(int x, int y);
};


#endif
