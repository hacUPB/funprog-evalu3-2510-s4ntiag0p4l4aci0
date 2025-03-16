#include <stdio.h>

int main(){

    float numero, suma, promedio;
    int  veces, cantidad;
   
   
    printf("cuantos numeros va a ingresar");

    scanf("%d", &cantidad);
    
    numero = 0;
    suma = 0;
    veces = 1;


while(cantidad > 0)

{   printf("ingrese un número");
    scanf("%f", &numero);

  
    suma = suma + numero;

    promedio = suma / veces;
    
    veces = veces +1;

    cantidad = cantidad -1;

}


printf(" El promedio es: %f", promedio);

return 0;

}