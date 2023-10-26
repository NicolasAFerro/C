#include <stdio.h> 
#include<math.h>

int main(){ 
  unsigned int letras, restricoes, soma=0;
  int matriz[400][2];
  scanf("%u", &letras);
  scanf("%u", &restricoes);
  /* for(int i=0;i<restricoes;i++)
    for(int j=0;j<2;j++)
      scanf("%i ", &matriz[i][j]); */ 
  for (int i=0;i<letras;i++)
    soma=soma+pow(2,i);
  if(restricoes!=0) 
    soma=soma-(restricoes+1);
  printf("%u", soma);
  return 0;
}