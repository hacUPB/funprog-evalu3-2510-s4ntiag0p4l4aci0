#include <stdio.h>
#include <math.h> 

int main(){
    int operaciones;
        printf("1. suma \n2. resta \n3. multiplicación\n4. división\n5. potenciación\n");
        printf("elija una opción");
        scanf("%d",&operaciones);

    float a;
        printf("Elija un número");
        scanf("%f",&a);

    float b;
        printf("Elija un número");
        scanf("%f",&b);

    float c; 
    switch(operaciones)
    {
        case 1:
            c = a+b;
            printf("eligió suma");
            printf("%f + %f = %f\n",a, b, c);

        case 2:
            c = a-b;
            printf("eligió resta");
            printf("%f - %f = %f\n",a, b, c);
                break;

        case 3:
            c = a*b;
            printf("eligió multiplicación");
            printf("%f * %f = %f\n",a, b, c);
                break;

        case 4:
            c = a/b;
            printf("eligió división");
            printf("%f / %f = %f\n",a, b, c);
                break;

        case 5:
            c = pow(a,b);
            printf("eligió potenciación");
            printf("pow(%f, %f) = %f",a,b,c);
                break;
        default:
        printf("elija una opción de operación válida");
                break;

    }

return 0;


    }