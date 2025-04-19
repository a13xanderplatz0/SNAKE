#ifndef SNAKE_H
#define SNAKE_H
#include "Serpiente.h"
#include "Posicion.h"

class Snake {
    private:
    Serpiente Serpiente;
    Posicion Comida;
    int puntuacion;
    bool gameOver;

    public:
    Snake();
    void generarComida();
    void actualizar();
    void dibujar () const;

};


#endif