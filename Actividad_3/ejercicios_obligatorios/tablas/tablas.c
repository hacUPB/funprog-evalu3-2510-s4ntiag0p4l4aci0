#include <stdio.h>

int main(){
int i;
float numero, tabla;
printf("Ingresa un n%cmero" , 163);
setbuf(stdin, NULL);
scanf("%f",&numero);
for(i = 0; i <= 10; i++){
    tabla = numero * i;
    printf("%0.2f * %d = %0.2f\n", numero, i, tabla );
   
}


return 0;
}