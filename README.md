# UEA: Algoritmo y Diseño de Algoritmos.

## 👑 Problema de las N-Reinas (Backtraking)

Este proyecto implementa una solución al clásico **Problema de las N-Reinas** utilizando **recursividad y backtracking** en C++. El objetivo del problema es colocar `N` reinas en un tablero de ajedrez de `N x N` de manera que **ninguna reina ataque a otra**, es decir, que no compartan ni fila, ni columna, ni diagonal.

---

### 📌 Descripción general

- El algoritmo recorre el espacio de soluciones utilizando **árboles de decisión recursivos**.
- Utiliza un arreglo para almacenar las posiciones actuales de las reinas.
- Implementa una función de validación para evitar colisiones entre reinas.
- Muestra soluciones encontradas junto con un contador enumerado.
- Está basado en la técnica de **backtracking** (vuelta atrás).

---

### 🧑‍💻 Estructura del código

```cpp
bool comprobar(int reinas[], int n, int k);
```
Valida que la reina colocada en la fila k no ataque a ninguna reina ya colocada. Las condiciones que verifica son:
- Misma columna
- Misma diagonal

```cpp
void Nreinas(int reinas[], int n, int k)
```
Función recursiva principal que intenta colocar una reina en cada fila y, si es válida, avanza al siguiente nivel (k+1). Cuando se alcanza k == n, significa que se ha encontrado una solución completa.

```cpp
main()
```
- Solicita al usuario la cantidad de reinas N.
- Inicializa un arreglo con -1 indicando que aún no hay reinas colocadas.
- Llama a la función recursiva para calcular y mostrar soluciones.

### 📌 Conceptos clave
- 🔁 Backtracking: Exploración de todas las posibles configuraciones válidas mediante recursión.
- ✅ Validación parcial: Solo se continúa explorando si la posición actual no entra en conflicto con las anteriores.
- 🌳 Árbol de decisión: Cada nivel del árbol representa una fila del tablero.

🎯 Objetivo del problema
Colocar N reinas en un tablero de N x N de forma que ninguna se amenace entre sí, resolviendo uno de los problemas más conocidos de la informática y teoría de algoritmos.

### ⚠️ Importante:
Esta implementación **no garantiza encontrar todas las soluciones posibles** para cualquier valor de `N`. El algoritmo está basado en backtracking, pero su lógica actual puede llegar a encontrar únicamente una o unas cuantas soluciones dependiendo del orden en el que se recorra el árbol de decisiones.

### ▶️ Compilación y ejecución
💻 Compilar con g++
```cpp
g++ nReinas.cpp -o nreinas
./nreinas
```
### 📤 Ejemplo de uso
Entrada:
```cpp
Ingresar la cantidad de reinas : 4
```
Salida posible:
```cpp
Solucion 1 : 1 , 3 , 0 , 2 ,
Solucion 2 : 2 , 0 , 3 , 1 ,
```
Cada número representa la columna en la que se colocó una reina por fila.






