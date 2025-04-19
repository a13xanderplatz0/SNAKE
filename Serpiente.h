#ifndef SERPIENTE_H
#define SERPIENTE_H
#include <vector>
#include "Posicion.h"


class Serpiente {
    private:
    std::vector<Posicion>cuerpo;
    char direccion;

    public:
    Serpiente();
    void mover();
    void crecer();
    bool chocaConsigoMismo() const;
};

#endif