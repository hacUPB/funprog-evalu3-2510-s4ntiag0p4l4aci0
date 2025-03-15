#include <stdio.h>

int(){
int edad, pais;
printf("1. para mayoría de edad Colombiana\n2. para mayoría de edad Estadounidense")

scanf("%d", &pais);

printf("Cual es tu edad");

scanf("%d", &edad);

switch(pais){

case 1:

    if(edad <= 18){
        printf("Eres un adulto en Colombia");
    }

    else{printf("No eres adulto en Colombia")}
        break;

case 2: 

    if(edad <= 18){
        printf("Eres un adulto en Estados Unidos");
    }

    else{printf("No eres adulto en Estados Unidos");}
        break;



}


return 0



}




