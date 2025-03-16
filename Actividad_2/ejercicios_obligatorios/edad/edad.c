#include <stdio.h>

int main(){
int edad, pais;
printf("1. Para mayor%ca de edad Colombiana\n2. Para mayor%ca de edad Estadounidense",161,161);

scanf("%d", &pais);

printf("Cual es tu edad");

scanf("%d", &edad);

switch(pais){

case 1:

    if(edad >= 18){
        printf("Eres un adulto en Colombia");
    }

    else{printf("No eres adulto en Colombia");
    }
        break;

case 2: 

    if(edad >= 21){
        printf("Eres un adulto en Estados Unidos");
    }

    else{printf("No eres adulto en Estados Unidos");
    }
        break;

default:
    printf("por favor revisa bien");

}


return 0;

}




