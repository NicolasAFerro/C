#include <stdio.h> 

int main(){ 
  int numPremiados, numPequenos, numMedio;
  int contPequeno=0,contMedio=0, tamanho;

  scanf("%i", &numPremiados); 
  for(int i=0; i<numPremiados;i++){ 
    scanf("%i", &tamanho); 
    if(tamanho==1) 
      contPequeno++; 
    else 
      contMedio++;
  }      
  scanf("%i", &numPequenos); 
  scanf("%i", &numMedio); 
  if((numPequenos==contPequeno)&&(numMedio==contMedio)) 
    printf("S"); 
  else 
    printf("N");



  return 0;
}