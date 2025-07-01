# UEA: Análisis y Diseño de Algoritmos.

## 👑 Problema de las N-Reinas (Backtraking)

Implementa una solución al clásico **Problema de las N-Reinas** utilizando **recursividad y backtracking** en C++. 

---

### 🎯 Objetivo
El objetivo del problema es colocar `N` reinas en un tablero de ajedrez de `N x N` de manera que **ninguna reina ataque a otra**, es decir, que no compartan ni fila, ni columna, ni diagonal, resolviendo uno de los problemas más conocidos de la informática y teoría de algoritmos.

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

---

### ▶️ Compilación y ejecución
💻 Compilar con g++
```cpp
g++ nReinas.cpp -o nreinas
./nreinas
```


#### 📤 Ejemplo de uso
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

> “⚠️ Importante: Esta implementación **no garantiza encontrar todas las soluciones posibles** para cualquier valor de `N`.”






