#include <stdio.h> 


int main(){ 
  char resultado;
  int contV=0;
  for(int i=0;i<6;i++){ 
    scanf(" %c", &resultado);  
    if(resultado =='V') 
      contV++;
  }
  if(contV>=5)
    printf("1"); 
  else
    if(contV>=3)
      printf("2"); 
    else 
      if(contV)
        printf("3"); 
      else
        printf("-1");

}