## 9. Preguntas de Control de Comprensión

1. ¿Para qué sirve un prototipo de función?
    - Como la función se va a utilizar en el main,y esta se define generalmente después del main, es necesario especificar su existencia, para que el programa la pueda utilizar.
---

2. ¿Cuál es la diferencia entre parámetros y argumentos?

 - Los parámetros son las variables que se utilizan para la definiciónde la función, meitnras que los argumentos son los valores dados posteriormente, para ejecutar la función con ellos. 
 ---

3. ¿Qué sucede si no incluyes el archivo de cabecera de una función de biblioteca estándar?
    - No se reconocen las funciones asociadas a este biblioteca, si no se incluye stdio.h, no se podría usar printf ni scanf; del mismo modo si no se incluye math.h y se pensaba trabajar con sqrt(), esta función no se reconocería.

4. ¿Por qué `main()` es especial en C?
    - Porque es la función principal, en esta se combian el resto de funciones. Un programa puede funcionar sin funciones adicionales, pero no sin main. De igual manera, al volver otras funciones librerías, main es la unica función necesaria para el programa.
    ---
5. ¿Qué ocurre si una función no retorna ningún valor?

    - Nada, un claro ejemplo es cuando solamente imprime un valor.

