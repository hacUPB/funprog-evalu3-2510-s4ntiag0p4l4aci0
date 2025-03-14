



#include <stdio.h>
#include <math.h> 

int main(){
    int operaciones;
        printf("1. suma \n2. resta \n3. multiplicaciÃ³n\n4. divisiÃ³n\n5. potenciaciÃ³n\n");
       printf("elija una opciÃ³n");       
       scanf("%d",&operaciones);

    float a;
        printf("Elija un nÃºmero");
        scanf("%f",&a);

    float b;
        printf("Elija un nÃºmero");
       scanf("%f",&b);

    float c; 
    switch(operaciones)
    {
        case 1:
            c = a+b;
           printf("eligiÃ³ suma");
           printf("%f + %f = %f\n",a, b, c);
                break;
        case 2:
            c = a-b;
            printf("eligiÃ³ resta");
            printf("%f - %f = %f\n",a, b, c);
                break;

        case 3:
            c = a*b;
            printf("eligiÃ³ multiplicaciÃ³n");
            printf("%f * %f = %f\n",a, b, c);
                break;

        case 4:
            c = a/b;
            printf("eligiÃ³ divisiÃ³n");
            printf("%f / %f = %f\n",a, b, c);
               break;

        case 5:
        c = pow(a,b);
           printf("eligiÃ³ potenciaciÃ³n");
           printf("pow(%f, %f) = %f",a,b,c);
               break;
       default:
       printf("elija una opciÃ³n de operaciÃ³n vÃ¡lida");
               break;

   }

return 0;


    }
