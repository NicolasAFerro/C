#include <stdio.h> 


void main (void){ 
  float tabNum[10]; 
  float tabProdut[5]; 
  float somatorio;
  somatorio=0;
  int cont, decrescente; 
  decrescente=9;
  for (cont=0;cont<10;cont++){  
    printf("escreva o numero: "); 
    scanf("%f",&tabNum[cont]); 
  }  
  for(cont=0; cont<5; cont++){ 
      tabProdut[cont]= tabNum[decrescente]*tabNum[cont];    
      somatorio=somatorio+tabProdut[cont];     
      printf("\n tabNum[%i]= %f", cont, tabProdut[cont]); 
      decrescente=decrescente-1;
  };  
  printf("\n somatorio: %f", somatorio);
  }