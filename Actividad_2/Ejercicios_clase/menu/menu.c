

#include <stdio.h>

int main(int arg){


int opciones;
printf("1. sopa\n2. pasta \n3. carne/n4. vegetariano");
printf("elija una opción");
scanf("%d",&opciones);

switch(opciones)

{
    case 1:
        printf("Eligió sopa $10.000\n");
        break;

    case 2:
        printf("Eligió sopa $15.000\n");
        break;

    case 3:
        printf("Eligió sopa $25.000\n");
        break;

    case 4:
        printf("Eligió sopa $25.000\n");
        break;

    default:
        printf("opción no válida\n");


}

return 0;

}