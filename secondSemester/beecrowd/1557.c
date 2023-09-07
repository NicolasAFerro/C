#include <stdio.h> 
#include <math.h>
#include <stdlib.h>


int main (){ 
  int repeticoes;
  float base=2;
  
  do{ 
    scanf("%i", &repeticoes);    
    for(int lin=0; lin<repeticoes;lin++){ 
      printf("\n");
      for (int col=0;col<repeticoes;col++){ 
        if(lin==0){
          printf("%.0f\t",pow(base,col));
        }
        else{ 
          printf("%.0f\t",pow(base,(lin+col)));
        }      
      }    
    }
  }while (repeticoes>0);  
  return 0;
}
