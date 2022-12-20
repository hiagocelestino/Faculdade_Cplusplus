#ifndef PDS2_EXCECOES_H
#define PDS2_EXCECOES_H
#include <exception>

class MovimentoInvalidoException: public std::exception{
    const char* what() const throw(){
        return "Movimento inválido!";
    }
};

#endif
