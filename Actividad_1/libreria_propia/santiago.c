#include <stdio.h>
#include "libreria_santiago.h"

int main() {
    float a, b, c;

    printf("Ingrese un n%cmero: ", 163);
    scanf("%f", &a);

    printf("Ingrese otro n%cmero: ", 163);
    scanf("%f", &b);

    c = sumar(a, b);

    printf("%f + %f = %f", a, b, c);

    return 0;
}