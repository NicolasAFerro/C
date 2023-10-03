#include <stdio.h> 
#include <string.h> 

int main(){ 
  int casos;
  scanf("%i", &casos);
  char entrada1[10]; 
  char entrada2[10];  
  for(int i=0;i<casos;i++){ 
    scanf("%s", entrada1); 
    scanf("%s", entrada2); 
    if(strcmp(entrada1,entrada2)==0){ 
      if (strcmp(entrada1,"papel")==0){ 
         printf("Ambos venceram\n"); 
      }       
      else{ 
        if (strcmp(entrada1,"pedra")==0)
          printf("Sem ganhador\n"); 
        else
          printf("Aniquilacao mutua\n");
      }  
    }
    else{ 
      if(strcmp(entrada1,"ataque")==0||strcmp(entrada2,"ataque")==0){ 
        if(strcmp(entrada1,"papel")==0||strcmp(entrada2,"papel")==0) 
          if(strcmp(entrada1,"ataque")==0) 
            printf("Jogador 1 venceu\n"); 
          else 
            printf("Jogador 2 venceu\n"); 
        else{ 
          if(strcmp(entrada1,"pedra")==0) 
            printf("Jogador 2 venceu\n"); 
          else  
            printf("Jogador 1 venceu\n"); 
        }   
      }
      else{ 
          if (strcmp(entrada1,"papel")==0)
            printf("Jogador 2 venceu\n"); 
          else 
            printf("Jogador 1 venceu\n");           
      }
    }
  }
  return 0;
}