#include <stdio.h> 

void main (void){ 
  float tabVendas[5][12]; 
  int lin, col; 
  float media1,media2;  
  media1=0; 
  media2=0; 

  for(lin=0;lin<5;lin++)
    for(col=0;col<12;col++){ 
      printf("vendedor %i, mes %i :", lin, col); 
      scanf("%f", &tabVendas[lin][col]); 
    }; 
  for(lin=0;lin<5;lin++) { 
    for(col=0;col<6;col++) 
      media1=media1+tabVendas[lin][col];
    media1=media1/6; 
    printf("\nmedia primeiro semestre vendedor %i: %.2f", lin, media1); 
    media1=0;
  }; 
  for(lin=0;lin<5;lin++) { 
    for(col=6;col<12;col++) { 
      media2=media2+tabVendas[lin][col];
    };      
    media2=media2/6; 
    printf("\nmedia segundo semestre vendedor %i: %.2f", lin, media2);
    media2=0;
  };
}