#include <stdio.h>



int main()
{
  int numero, i, j, piramide; 
  printf("Escoja un n%cmero \n", 163);
  scanf("%d", &numero);
  
  
  
  for(i=0; i <= numero; i++)
  {
      for(j=0; j <= i; j++)
      {printf("%2d ",j);}
      
      printf("\n");
  }
  
  piramide = numero -1;
  
    for(i=piramide; i >= 0; i = i -1)
  {
      for(j=0; j <= i; j++)
      
      {printf("%2d ",j);}
      
      printf("\n");
  }
  
  
  return 0;
}