// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
    // Variables (siempre inicializadas)
    // TODO: ¿cuántas necesitas? ¿De qué tipo? ¿Necesitas alguna además de los tres números?
double a;
double b;
double c;
double mayor;
    // Paso 1: mensaje de bienvenida
    // TODO
std::cout << "Bienvenido a mi programa" << std::endl;
    // TODO: el resto de tu receta, paso por paso.
    //       ¿Tu decisión necesita una cadena if / else if / else o varios if independientes?
    //       ¿Qué pasa con tu código si dos números son iguales?

a = leerDecimal("Primer numero: ");
b = leerDecimal("Segundo numero: ");
c = leerDecimal("Tercer numero: ");

if (a > b && a > c) {
  mayor = a;  // Aquí debemos guardar a en mayor
}
else if (b > a && b > c) {
    mayor = b;
}
else {
    mayor = c;
}
std::cout << "El numero mayor es: " << mayor << std::endl;

    // ¿Qué significa return 0;?
    return 0;
}