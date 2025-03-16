**ℹ️ Pregunta de Control**

1. ¿Qué sucedería si `contador++` estuviera fuera del bucle?
si el contador ++ estuviera fuera del bulce, nunca se actualizaría en cada iteración, quedaría siempre con un valor fijo dentro del rango establescido, por ende sería un blucle infinito.
2. ¿Qué pasa si nunca se cumple la condición dentro del `while`?

- Si la condición es la de entrada al bucle, este nunca se ejecutaría.

- Sin embargo esto puede depender de la forma en que se haya hecho el while, dado que este puede iterar sobre la veracidad o falsedad del argumento. Si al ser verdadero, el loop no se ejecuta, y siempre es falso, sería un bucle infinito. De igual forma, si al ser faslo no se ejecuta, y siempre es verdadero, es infinito. 




**ℹ️ Pregunta de Control**

1. ¿Por qué el bloque de instrucciones se ejecuta **siempre** al menos una vez?
- Porque primero se ejecuta la acción dentro del blucle, y luego se evalua si es falso o no. Por lo que independientemente si se cumple o no, siempre se ejecutará una vez. Es como si en un concierto para mayores de edad pidieran la identificación al final, ya los menores entraron, pero a la salida se dan cuenta y no pasaría más.

2. ¿Qué diferencia ves con `while`?
- La evaluación de la condición cambia de orden, en el while primero se compara y luego se ejecuta, en el do while, se ejecuta y luego se compara.  Si desde el principio se sabe que hay una condición por defecto que se cumple y luego esta varía, un do while sería ideal. Pero si la condición es incierta desde el principio es mejor un while. 


