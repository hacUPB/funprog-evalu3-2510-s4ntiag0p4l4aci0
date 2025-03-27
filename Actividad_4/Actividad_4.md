## 9. Preguntas de Control de Comprensión

1. ¿Para qué sirve un prototipo de función?

2. ¿Cuál es la diferencia entre parámetros y argumentos?
3. ¿Qué sucede si no incluyes el archivo de cabecera de una función de biblioteca estándar?
4. ¿Por qué `main()` es especial en C?
5. ¿Qué ocurre si una función no retorna ningún valor?


1. **Crear una función sin parámetros**
    - Escribe una función que imprima en pantalla un mensaje de texto que le pases desde la función `main()`.
    - Llama a esa función desde `main()`.
2. **Funciones de biblioteca**
    - Utiliza la función `sqrt()` de la biblioteca `<math.h>` para calcular la raíz cuadrada de un número ingresado por el usuario.
    - Verifica que el número sea positivo; si es negativo, muestra un mensaje de error.
3. **Pasar parámetros**
    - Crea una función que reciba dos números y devuelva el **máximo** de ambos.
    - Muestra el resultado en `main()`.
4. **Funciones en archivos separados**
    - Crea un archivo `.c` que defina una función `restar(int a, int b)`.
    - Crea otro archivo `.h` que contenga el prototipo de `restar()`.
    - En tu `main.c`, incluye el `.h`, llama a `restar()` y muestra el resultado.
5. **Funciones Recursivas (Tema Avanzado)**
    - Crea una función `factorial(int n)` que calcule el factorial de `n` usando recursividad.
    - Añade una condición para terminar la recursión cuando `n <= 1`.