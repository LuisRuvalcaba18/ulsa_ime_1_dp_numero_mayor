# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. --> el codigo debera recibir 3 numeros y sacar el numero mayor de los 3

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. __a___
2. __b___
3. ___c__

**Salida:**
1. ___numero mayor_

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
_____el valor del numero mayor, por que es lo que busca el programa

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
_____para utilizar leerDecimal

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____las variables deben ser numeros
- _____las variables deben ser 3

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
_____No, porque el programa debe encontrar el mayor y puede trabajar con números positivos, negativos y cero.

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
_____muestra el mismo valor

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
_____leerDecimal

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
_____que guarda el valor maximo

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | __3__ | __2__ | __1__ | __3__ |
| 2 (el mayor en segunda posición) | ___3__ | ___4__ | __2___ | ___4_ |
| 3 (el mayor en tercera posición) | ___2__ | ___4__ | ___6__ | _6___ |
| 4 (con un empate) | __7__ | __7__ | ___7__ | ___7__ |
| 5 (con negativos) | __-3___ | __-5___ | __-6___ | __-3___ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí 
**¿Tuve que corregirla? ¿Qué cambié?** __si, agregue un else while___
**¿Cuántas versiones de mi receta escribí hasta la final?** __2___
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
_____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->PS C:\Users\luise\OneDrive\Documentos\diseñoprogramas\ulsa_ime_1_dp_numero_mayor> g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
PS C:\Users\luise\OneDrive\Documentos\diseñoprogramas\ulsa_ime_1_dp_numero_mayor> ./numero_mayor
Bienvenido a mi programa
Primer numero: -3
Segundo numero: -5
Tercer numero: -6
El numero mayor es: -3
PS C:\Users\luise\OneDrive\Documentos\diseñoprogramas\ulsa_ime_1_dp_numero_mayor> 

```
_____
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | _____ |
2. Declarar las variables `a`, `b`, `c` y `mayor`.
3. Pedir al usuario tres números y guardarlos en sus respectivas variables.
4. Comparar los tres números para identificar el mayor.
5. Guardar el número mayor en la variable `mayor`.
6. Mostrar el resultado en pantalla.
7. Finalizar el programa.
**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
_____

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
_____3, es el mayor

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
_____7 porque es el mayor y 5 por que es el valor nas alto

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
_____es igual a b por eso imprime el mismo valor

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | __9___ | __si___ |
| Mayor en medio | 4, 9, 2 | 9 | ___9__ | __si___ |
| Mayor al final | 2, 4, 9 | 9 | ___9__ | __si___ |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | __7___ | __si___ |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | __7___ | __si___ |
| Empate abajo | 8, 3, 3 | 8 | __8___ | _____ |
| Los tres iguales | 5, 5, 5 | 5 | ___5__ | __si___ |
| Todos negativos | -4, -1, -9 | -1 | __-1___ | __si___ |
| Con cero | -2, 0, -5 | 0 | __0__ | __si___ |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | ___2.7__ | _____ |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | __si___ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
_____a hacer mi receta

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____organizar bien mi receta desde el inicio

**¿Qué fue lo más difícil y cómo lo resolví?**
_____pasar a codigo

**¿Qué pregunta me quedó sin responder?**
_____

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
_____4, con receta ajena ya que tenia mas de la mitad del trabajo hecho

**¿Pensé en los empates antes de programar o los descubrí al probar?**
_____no

## 14. Lista de verificación antes de entregar (Fase 5)

- [f] Llené las secciones 1 a 13 (no quedan `_____`)
- [ v] Escribí mi receta completa en `RECETA.md` antes de programar
- [v ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [v] Mi programa compila sin advertencias
- [ v] Probé todos los casos de la tabla, incluidos los empates
- [v ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [v ] No modifiqué `utilerias.h`
- [v ] Hice al menos 3 commits con mensajes claros
- [v ] Hice `git push` y verifiqué mi fork en GitHub
- [v ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [v ] Entregué el enlace de mi fork en Classroom