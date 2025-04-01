
#include <stdio.h>
int mcd(int, int);
void simp(int, int, int);

int main(){

int numerador, denominador, maximo;

printf("Ingresa al numerador =) :");
scanf("%d", &numerador);

printf("Ingresa al denominador =) :");
scanf("%d", &denominador);



maximo = mcd(numerador, denominador);
printf("M.C.D = %d\n", maximo);



simp(numerador, denominador, maximo);


    return 0; 
}


int mcd(int num_1, int num_2)
{

if(num_1 == num_2)
{
    return num_1;
}

int mayor, menor, comun;

if(num_1 >= num_2)
{
mayor = num_1;
menor = num_2;
}


else
{
mayor = num_2;
menor = num_1;
}



while (menor >= 1)
{

if (num_1 % menor == 0 && num_2 % menor == 0)
{
    comun = menor;
    break;

}

menor--;

}
return comun;
}


void simp(int num_1, int num_2, int num_3)
{
    int numerador_simp,denominador_simp;

    numerador_simp = num_1 / num_3;
    denominador_simp = num_2 / num_3;

   printf("la fracci%cn %d / %d simplificada\n (dividiendo por: %d) es: \n %d / %d: \n", 162, num_1, num_2, num_3, numerador_simp, denominador_simp);

}