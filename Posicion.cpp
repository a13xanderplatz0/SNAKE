#include "Posicion.h"

Posicion::Posicion(int x, int y):x(x),y(y){}

bool Posicion::esIgual(const Posicion& otra)const{
    return x == otra.x && y == otra.y;
}
