#include <stdio.h>
#include <math.h> 

int main(){

    int operaciones;

    float a,b,c; 


    do{ 

        // int operaciones
        printf("1. suma \n2. resta \n3. multiplicación\n4. división\n5. potenciación\n6. finalizar\n");
        printf("elija una opción");
        scanf("%d",&operaciones);

        if(operaciones != 6) {
        // float a
        printf("Elija un número");
        scanf("%f",&a);
        
        // float b
        printf("Elija un número");
        scanf("%f",&b);

    switch(operaciones)


    {
        case 1:
            c = a+b;
            printf("eligió suma");
            printf("%f + %f = %f\n",a, b, c);
                break;
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

}
    else{
        printf("gracias por usar la calculadora");
    }
}
while(operaciones != 6);

return 0;


    }