#include <stdio.h>

int main(){

float nota;


printf("Ingrese una calificaci%cn", 162);

scanf("%f", &nota);

if(nota >= 0 && nota < 3)
{
    printf("Insuficiente");}


else if(nota == 3 && nota <= 3.5)
    {
        printf("Aceptable");
    }

else if(nota > 3.5 && nota <=4.2)
{printf("Muy bien");
}

else if(nota > 4.2 && nota <=5)
{
    printf("Sobresaliente");}

else{
    printf("Ingrese una nota correcta");
}



return 0;



}