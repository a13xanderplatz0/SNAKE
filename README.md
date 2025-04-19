# 📌 Esquema General del Juego Snake

## 🎯 Objetivo
Crear un juego donde una serpiente:
- Se mueva por la pantalla.
- Crezca al comer comida.
- Pierda si choca contra sí misma o los bordes.

---

## 🛠️ Estructura de Clases (Diseño OOP)

### Clase `Posicion`
**Atributos**:
- `int x, y`: Coordenadas en la pantalla.

**Métodos**:
- Constructor.
- Getters y setters.
- Comparación de posiciones.

---

### Clase `Serpiente`
**Atributos**:
- `vector<Posicion> cuerpo`: Lista de segmentos del cuerpo.
- `char direccion`: Dirección actual ('w', 'a', 's', 'd').

**Métodos**:
- `mover()`: Actualiza las posiciones del cuerpo según la dirección.
- `crecer()`: Añade un nuevo segmento al cuerpo al comer comida.
- `chocaConsigoMisma()`: Verifica si la serpiente colisiona consigo misma.

---

### Clase `Juego`
**Atributos**:
- `Serpiente serpiente`: La serpiente del juego.
- `Posicion comida`: Posición de la comida.
- `int puntuacion`: Puntuación actual.
- `bool gameOver`: Estado del juego.

**Métodos**:
- `generarComida()`: Ubica comida aleatoria en el mapa.
- `actualizar()`: Lógica principal del juego (movimiento, colisiones).
- `dibujar()`: Muestra el estado del juego en consola (usando `cout`).

---

## 🔄 Lógica Principal del Juego

1. **Inicialización**:
   - Crear una serpiente con 1 segmento.
   - Generar la primera comida aleatoria.

2. **Bucle del Juego** (`while (!gameOver)`):
   - **Input**: Leer la tecla presionada (`w/a/s/d`) para cambiar dirección.
   - **Actualizar**:
     - Mover la serpiente.
     - Verificar si comió comida:
       - Si sí, llamar `crecer()` y `generarComida()`.
     - Verificar colisiones con bordes o consigo misma.
   - **Renderizado**:
     - Limpiar pantalla.
     - Dibujar serpiente y comida.

---

## 🧠 Conceptos Clave a Implementar

- **Memoria dinámica**: Usa `vector` para el cuerpo de la serpiente (crece dinámicamente).
- **Punteros**: Practica pasando objetos por referencia (ej. `Serpiente&`).
- **Arrays**: Representa el "mapa" del juego (opcional: matriz 2D para dibujar).
- **Bucles/condicionales**: Para movimientos, colisiones y flujo del juego.

---

## 🚀 Retos para Resolver

### 🔹 Movimiento de la serpiente
- La "cabeza" avanza en la dirección actual.
- Cada segmento sigue al anterior.

### 🔹 Detección de colisiones
- Comparar la posición de la cabeza con:
  - Las paredes (`x < 0 || x > ancho`).
  - Su propio cuerpo.

### 🔹 Generación de comida aleatoria
- Usa `rand() % limite` para generar coordenadas `x` e `y`.

---

## 🌟 Extras Opcionales

- **Niveles**: Aumentar velocidad cada 5 puntos.
- **Paredes**: Añadir obstáculos en el mapa.
- **Modo 2 jugadores**: Usar teclas distintas para cada jugador.

---

## 📌 ¿Por dónde empezar?

1. Implementa la clase `Posicion`.
2. Crea la clase `Serpiente` con los métodos `mover()` y `dibujar()`.
3. Desarrolla la lógica de colisiones y comida en la clase `Juego`.

---

## 💡 Ejemplo de Pista
"Para que el cuerpo siga a la cabeza, recorre el vector desde el final hasta el segundo elemento, copiando la posición del segmento anterior."
