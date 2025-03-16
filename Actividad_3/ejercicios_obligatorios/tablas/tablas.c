#include <stdio.h>

int main(){
int i;
float numero, tabla;
printf("Ingresa un n%cmero" , 163);
scanf("%f",&numero);
for(i = 0; i <= 10; i++){
    tabla = numero * i;
    printf("%f * %d = %f\n", numero, i, tabla );
   
}


return 0;
}