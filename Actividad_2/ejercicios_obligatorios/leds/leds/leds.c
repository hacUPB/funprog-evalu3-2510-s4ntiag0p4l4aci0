#include <stdio.h>

int main(int arg){


int opciones;
printf("1. Encender LED\n2. Apagar LED \n3. Mostrar Estado del LED\n4. Salir\n");
printf("elija una opci%cn",162);
scanf("%d",&opciones);

switch(opciones)

{
    case 1:
        printf("LED encendido\n");
        break;

    case 2:
        printf("LED apagado\n");
        break;

    case 3:
        printf("LED apagado y bueno\n");
        break;

    case 4:
        printf("Saliendo\n");
        break;

    default:
        printf("click ac%c para ayuda\n", 160);


}

return 0;

}