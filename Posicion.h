#ifndef POSICION_H
#define POSICION_H

class Posicion {
    public:
    int x,y;

    Posicion(int x=0,int y=0);
    bool esIgual(const Posicion&otra)const;
};
#endif
