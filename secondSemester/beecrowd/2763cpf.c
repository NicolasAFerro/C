#include <stdio.h> 
#include <string.h>

int main(){ 

  char cpf [15];
  char saida[3];
  int cont=0;
  gets(cpf);
  for (int k = 0; k < 4; k++){
    for(int i=0;i<3;i++){ 
      saida[i]=cpf[cont];
      cont++;
    }
    cont++;
    printf("\n%s", saida);
  }
  
  
   

  return 0;
}