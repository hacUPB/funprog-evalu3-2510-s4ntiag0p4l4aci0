#include <stdio.h>

int main() {
    int i;
    i= 1;
    printf("múltiplo de 7 y 9: 0\n");
    while(i <= 1000)
        {
       
       if (i % 7 == 0)
       {printf("mutiplo de 7: %d\n", i);}
       
      if (i % 9 == 0)
       {printf("múltiplo de 9: %d\n", i);}
       
      i = i+=1;
        }
        return 0;
}