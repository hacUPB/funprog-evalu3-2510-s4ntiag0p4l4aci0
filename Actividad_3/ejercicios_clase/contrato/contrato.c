#include <stdio.h>
int main() {
    int i;
    i= 1;
    int escoge;
    printf("Elija un n%cmero",163);
    scanf("%d", &escoge);
  printf("buzzbiss\n");
  
    while(i <= escoge)
        {
       
       if(i % 3 ==0 && i % 5 == 0)
       {printf("BuzzBiss\n");}
       else {
       if (i % 3 == 0)
       {printf("Buzz\n");}
       
      if (i % 5 == 0)
       {printf("Biss\n");}
       
       else{printf("%d\n", i);}
       }
      i  +=1;
        }
        return 0;
}