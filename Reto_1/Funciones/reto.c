
#include <stdio.h>

void cargando(void);

int menu(void);

int main(){

int x;

x = 0;


while(x != 5){

    x = menu();  


switch(x){

    case 1: cargando();
            printf("");
            //funcion();
                break;

    case 2: cargando();
            printf("");
            //funcion();
                break;
                
    case 3: cargando();
            printf("");
            //funcion();
                break;

    case 4: cargando();
        printf("");
        //funcion();
            break;

    case 5: cargando();
            printf("muchas gracias");
            //funcion();
                break;

    default: printf("");
                break;

}


}
printf("muchas gracias");

return 0;

}

void cargando(void){
    int i = 0;
    for (i = 0; i <= 100000; i++){
        printf("\rcargando %d %c", i/1000, 37);
    }
    printf("\n");
}

int menu(void){
int opcion;
printf("Men%c\n \
    \t1. Ley de Ohm.\n\
    \t2. Factor de Potencia.\n\
    \t3. Resistencia de un Conductor.\n\
    \t4. Valor de la Resistencia para un LED.\n\
    \t5. Salir.\n\n\
Ingrese el n%cmero de la opci%cn\n", 163, 163, 162);

scanf("%d", &opcion);

return opcion;

}