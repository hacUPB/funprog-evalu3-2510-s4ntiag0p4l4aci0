#include <stdio.h>
#include <math.h>
void sqrtfn(float);
int main(){

    float numero;

    printf("ingrese un n%cmero", 163);
    scanf("%f",&numero);
    sqrtfn(numero);

}

void sqrtfn(float a){
    float  b;
    if(a < 0)
    {printf("Error, ha ingresado un npumero negativo");}

else{
    b = sqrt(a);

    printf("sqrt(%f) = %f",a,b);
}
    
}