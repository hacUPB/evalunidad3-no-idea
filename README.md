Primer commit

Comienzo de escribir el código
Se empieza planteando como sería escribir el código dado en C# a C de manera sencilla

Segundo Commit

Se hace relaciones de agregación en el código de Context.c con el IStrategy.h
También se agrega una linea "char *rslt = strategy->DoAlgorithm((char *)list);" la cual está pensada para ver si puede asignarle a un puntero, el resultado del DoAlgorithm de la list dada anteriormente en el código

En el ConCreteStrategyA.c se deja en comentario una idea para poder hacer una representación del List.Sort(); que tiene C#, esta vez haciendo la comparación con las posiciones del arreglo para cada string

Tercer commit

Se cambia unas cosas para el método de la burbuja aplicado en el ConcreteStrategyA.c
Además de agregar todo lo relacionado a las tablas virtuales dentro del polimorfismo aplicado en el IStrategy y el ConcreteStrategy

Cuarto commit

Aquí se generan problemas de compilación, se intenta corregir lo que faltaba de las listas virtuales y la impresión de los resultados en pantalla (No Success)