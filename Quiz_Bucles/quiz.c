
#include <stdio.h>

int main() {
    float calificacion, promedio, nota, total;
    int veces;
    total = 0;
    veces=1;
    
    do{ printf("Ingrese una nota\n"); // le puse un mensaje antes de añadir el valor
        scanf("%f", &calificacion);
        if (calificacion >0.0 && calificacion <= 5.0)
        {
            nota = calificacion;
            printf("Calificacion %d: %f \n", veces, nota);}
    
        
        else if(calificacion ==-1) // añadí esta condición para que cuando sea -1, la nota sea directamente -1 sin vovlerla a escribir
        {nota = -1;}
        
        else
        {   
            printf("Calificación inválida, vuelva a intentar");
            scanf("%f", &nota);
            printf("Calificación %d: %f \n", veces, nota);
            
        }
            
        if (nota == -1)
         {break;}
         
        else
        {
            veces = veces + 1;
            total = total + nota;
            
        }
        
    }
        while(nota !=-1);
        
        promedio = total/(veces-1);// le restamos uno a veces, para que sea el numero de iteraciones exactas.
        
        printf("El promedio es: %0.3f", promedio);
            
    
           return 0; 
        }
        
        
        
        