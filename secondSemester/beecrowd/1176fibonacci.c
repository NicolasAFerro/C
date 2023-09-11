#include <stdio.h> 



int main (){ 
  int repeticoes; 
  scanf("%i", &repeticoes); 
  int saidas[61]; 
  int saida;
  unsigned long long int impressao;
  
  int i;
  for ( i = 0; i < repeticoes; i++)
  {
    scanf("\n%i", &saida);
    saidas[i]=saida;
  } 
  unsigned long long int resultado[i]; 
  resultado[0]=1; 
  resultado[1]=1; 
  resultado[2]=1;
  for(int j=3; j<60;j++){ 
    resultado[j]=resultado[j-1]+resultado[j-2];
  }
  
  
  for(int y=0;y<i;y++){  
    impressao=resultado[saidas[y]];
    printf("\nFib(%i) = %lli",saidas[y], impressao);
  }
   

  
  return 0;
}