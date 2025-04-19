📌 Esquema General del Juego Snake
Objetivo:
Crear un juego donde una serpiente se mueva por la pantalla, crezca al comer comida y pierda si choca contra sí misma o los bordes.

1. Estructura de Clases (Diseño OOP)
Define estas clases con sus atributos y métodos:

Clase Posicion
Atributos:

int x, int y (coordenadas en la pantalla).

Métodos útiles:

Constructor, getters/setters, comparación de posiciones.

Clase Serpiente
Atributos:

vector<Posicion> cuerpo (lista de segmentos del cuerpo).

char direccion (ej. 'w', 'a', 's', 'd').

Métodos clave:

mover(): Actualiza las posiciones del cuerpo según la dirección.

crecer(): Añade un nuevo segmento al cuerpo al comer comida.

chocaConsigoMisma(): Verifica colisión con su propio cuerpo.

Clase Juego
Atributos:

Serpiente serpiente.

Posicion comida.

int puntuacion.

bool gameOver.

Métodos clave:

generarComida(): Ubica comida aleatoria en el mapa.

actualizar(): Lógica principal del juego (movimiento, colisiones).

dibujar(): Muestra el estado del juego en consola (usando cout).

2. Lógica Principal (Pasos)
Inicialización:

Crear una serpiente con 1 segmento.

Generar la primera comida aleatoria.

Bucle del Juego (while (!gameOver)):

Input: Leer la tecla presionada (w/a/s/d) para cambiar dirección.

Actualizar:

Mover la serpiente.

Verificar si comió comida:

Si sí, llamar crecer() y generarComida().

Verificar colisiones con bordes o consigo misma.

Renderizado: Limpiar pantalla y dibujar serpiente/comida.

3. Conceptos Clave a Implementar
Memoria dinámica: Usa vector para el cuerpo de la serpiente (crece dinámicamente).

Punteros: Practica pasando objetos por referencia (ej. Serpiente&).

Arrays: Representa el "mapa" del juego (matriz 2D opcional para dibujar).

Bucles/condicionales: Para movimientos, colisiones y flujo del juego.

4. Retos para Resolver por Tu Cuenta
🔹 ¿Cómo mover la serpiente?

El "cabeza" avanza en la dirección actual, y cada segmento sigue al anterior.

🔹 ¿Cómo detectar colisiones?

Comparar la posición de la cabeza con las paredes (x < 0 || x > ancho) o con su cuerpo.

🔹 ¿Cómo hacer la comida aleatoria?

Usa rand() % limite para generar x e y.

5. Extras (Opcionales)
Niveles: Aumentar velocidad cada 5 puntos.

Paredes: Añadir obstáculos en el mapa.

Modo 2 jugadores: Usar teclas distintas para cada uno.

📌 ¿Por dónde empezar?
Implementa la clase Posicion.

Crea la clase Serpiente con mover() y dibujar().

Desarrolla la lógica de colisiones y comida en Juego.

Cuando tengas dudas en un paso específico, dime y te daré pistas sin código completo.

Ejemplo de pista:

"Para que el cuerpo siga a la cabeza, recorre el vector desde el final hasta el segundo elemento, copiando la posición del segmento anterior."
