#include <stdio.h> 
#include <string.h> 

char gerarRA(){ 
  
  char antigoRA[9]; 
  char novoRA[8];
  char sigla[3]; 

  printf("\ninsira o ra: ");
  scanf("%s", antigoRA); 
  strncpy(sigla, antigoRA, 2);
  sigla[2]='\0';  
  if(strcmp(sigla,"ad")==0)
    novoRA[3]='1';
  else 
    novoRA[3]='2';
  for(int j=0;j<3;j++){      
     novoRA[j]=antigoRA[j+2]; 
  }
  for(int i=5;i<8;i++) 
    novoRA[i-1]=antigoRA[i];
  //printf("\nnovo RA: 003048%s", novoRA); 
  return printf("\nnovo RA: 003048%s", novoRA);
}

int main (){  
  int repeticao;
  printf("quantas vezes deseja realizar a operação: "); 
  scanf("%i", &repeticao); 
  for(int k=0;k<repeticao;k++){ 
    gerarRA();
  };    
  return 0;
}; 
