#include <stdio.h> 
#include <math.h>

int main (){ 
  int repeticoes;
  float base=2;
  
  do{ 
    printf("insira um numero: ");
    scanf("%i", &repeticoes);
    int matriz [repeticoes][repeticoes]; 
    for(int lin=0; lin<repeticoes;lin++){ 
      printf("\n");
      for (int col=0;col<repeticoes;col++){ 
        if(lin==0){
          matriz[lin][col]=pow(base,col); 
          printf("%i ",matriz[lin][col]);
        }
        else{ 
          matriz[lin][col]=pow(base,(lin+col)); 
          printf("%i ",matriz[lin][col]);
        }      
      }    
    }
    printf("\ninsira um numero: "),
    scanf("%i", &repeticoes);
  }while (repeticoes>0);  
  return 0;
}
