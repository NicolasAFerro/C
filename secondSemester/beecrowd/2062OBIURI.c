#include <stdio.h> 
#include <string.h> 


int main (){
  int testes; 
  scanf("%i", &testes); 
  char palavra[21];
  for (int i=0;i<testes;i++){ 
    scanf("%s", palavra); 
    if(strlen(palavra)>3){ 
      printf("%s ", palavra);
    }
    else{ 
      if(palavra[0]=='O'&&palavra[1]=='B') 
        printf("OBI "); 
      else 
        if (palavra[0]=='U'&&palavra[1]=='R')
          printf("URI "); 
        else 
          printf("%s ", palavra);
      
      
      
    }
  }
  
    
  
  printf("\n");
  return 0;
}