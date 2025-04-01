#include <stdio.h>

int factorial(int x) {
    if (x <= 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {
    int numero;
    printf("Ingresa un n%cmero: ", 163);
    scanf("%d", &numero);
    printf("%d! es %d\n", numero, factorial(numero));
    return 0;
}

//solo funciona con digitos pequeños por la cantidad de bits requeridos