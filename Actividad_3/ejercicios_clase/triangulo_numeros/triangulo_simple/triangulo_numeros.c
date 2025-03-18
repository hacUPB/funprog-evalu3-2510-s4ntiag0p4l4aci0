#include <stdio.h>



int main()
{
  int numero, i, j; 
  printf("Escriba un n%cmero \n", 163);
  scanf("%d", &numero);
  
  
  
  for(i=0; i <= numero; i++)
  {
      for(j=0; j <= i; j++)
      {printf("%d ",j);}
      
      printf("\n");
  }
  
  return 0;
}