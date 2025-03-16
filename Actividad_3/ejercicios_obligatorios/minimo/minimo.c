#include <stdio.h>

int main(){

int i;
float numero, minimo;

minimo = 0;

for(i = 0; i < 5; i++){
    printf("ingrese un n%cmero", 163);
    scanf("%f", &numero);

if(minimo == 0){minimo = numero;}

else {

    if(numero < minimo)
    {
        minimo = numero;
    }
}

}

printf("%f es el menor", minimo);
return 0;

}