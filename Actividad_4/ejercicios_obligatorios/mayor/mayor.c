#include <stdio.h>

void mayor(float, float);
int main(){

    float numero_1, numero_2;

    printf("ingrese un n%cmero", 163);
    scanf("%f",&numero_1);
    printf("ingrese otro n%cmero", 163);
    scanf("%f",&numero_2);


    mayor(numero_1, numero_2);

}

void mayor(float a, float b){


    if (a==b)
    {printf("Ambos son inguales");}
    else if(a < b)
    {printf("%f es el mayor",b);}

else{
    {printf("%f es el mayor",a);};

}
    
}