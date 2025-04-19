#include "Juego.h"
#include <iostream>

Juego::Juego() : puntuacion(0), gameOver(false) {
    generarComida();
}

void Juego::generarComida() {
    // Implementación para generar comida aleatoria
}

void Juego::actualizar() {
    // Implementación de la lógica principal del juego
}

void Juego::dibujar() const {
    // Implementación para mostrar el estado del juego
}