#include <stdio.h>
#include <math.h> 

int main(){

    float a,b,c;

    char operaciones;


do{


    printf("+\n-\n*\n/\n^\n");
    printf("escriba operación");
    scanf("%f", &a);
  
    scanf("%c", &operaciones);
    scanf("%f", &b);

    if(operaciones != '!') {

    switch(operaciones)
    {
        case '+':
            c = a+b;
            printf("eligió suma");
            printf("%f\n", c);
                break;
        case '-':
            c = a-b;
            printf("eligió resta");
            printf("%f\n", c);
                break;

        case '*':
            c = a*b;
            printf("eligió multiplicación");
            printf("%f\n", c);
                break;

        case '/':
            c = a/b;
            printf("eligió división");
            printf("%f\n", c);
                break;

        case '^':
            c = pow(a,b);
            printf("eligió potenciación");
            printf("%f\n", c);
                break;
        default:
        printf("elija una opción de operación válida");
                break;

    };
}
else{
    printf("gracias por usar la calculadora");
} 
} while(operaciones != '!');

return 0;


    }