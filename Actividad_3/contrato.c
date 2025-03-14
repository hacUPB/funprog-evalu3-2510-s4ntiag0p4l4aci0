#include <stdio.h>
int main() {
    int i;
    i= 1;
    int escoge;
    printf("elija un número");
    scanf("%d", &escoge);
  printf("buzzbiss\n");
  
    while(i <= escoge)
        {
       
       if(i % 3 ==0 && i % 5 == 0)
       {printf("buzzbiss\n");}
       else {
       if (i % 3 == 0)
       {printf("buzz\n");}
       
      if (i % 5 == 0)
       {printf("biss\n");}
       
       else{printf("%d\n", i);}
       }
      i  +=1;
        }
        return 0
}