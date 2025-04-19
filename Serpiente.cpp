#include "Serpiente.h"

Serpiente::Serpiente() : direccion('w') {
    cuerpo.push_back(Posicion(0, 0)); // Inicializa la serpiente con un segmento
}

void Serpiente::mover() {
    // Implementación del movimiento
}

void Serpiente::crecer() {
    // Implementación para añadir un segmento
}

bool Serpiente::chocaConsigoMisma() const {
    // Implementación para verificar colisiones
    return false;
}