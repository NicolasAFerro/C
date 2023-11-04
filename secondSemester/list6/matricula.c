#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
void novaFuncao(char *ptr, char *RA, char *novoRA){ 
  char *ptrRA=(RA+5); 
  ptr++;
  strncpy(ptr,ptrRA,3); ptrRA-=3; ptr-=4;
  strncpy(ptr,ptrRA,3); 
  printf("%s", novoRA);
}
void transformacao(char *RA, char *novoRA){ 
  char *ptr=(novoRA+3);
  char *ptrRA=(RA+5);
  if(strncmp(RA,"AD", 2)==0){ 
    strncpy(ptr,"048",3);
    ptr+=6; *ptr='1';  
    novaFuncao(ptr, RA, novoRA);
  } else if(strncmp(RA,"AN", 2)==0){
    strcpy(ptr,"048");
    ptr+=6; *ptr='3';  
    novaFuncao(ptr, RA, novoRA);
  }else if(strncmp(RA,"SD", 2)==0){ 
    strcpy(ptr,"061");
    ptr+=6; *ptr='1';  
    novaFuncao(ptr, RA, novoRA);
  }else if(strncmp(RA,"LT", 2)==0){ 
    strcpy(ptr,"074");
    ptr+=6; *ptr='2'; 
    novaFuncao(ptr, RA, novoRA);
  }else if(strncmp(RA,"PL", 2)==0){ 
    strcpy(ptr,"080");
    ptr+=6; *ptr='2';  
    novaFuncao(ptr, RA, novoRA); 
  }else if(strncmp(RA,"PD", 2)==0){ 
    strcpy(ptr,"099");
    ptr+=6; *ptr='1';  
    novaFuncao(ptr, RA, novoRA);
  }else if(strncmp(RA,"PN", 2)==0){ 
    strcpy(ptr,"099");
    ptr+=6; *ptr='3'; 
    novaFuncao(ptr, RA, novoRA);
  }else if(strncmp(RA,"OD", 2)==0){ 
    strcpy(ptr,"100");
    ptr+=6; *ptr='1'; 
    novaFuncao(ptr, RA, novoRA);
  }else if(strncmp(RA,"ON", 2)==0){ 
    strcpy(ptr,"100");
    ptr+=6; *ptr='3'; 
    novaFuncao(ptr, RA, novoRA); 
  }
}
int main (){
  int repeticoes; 
  printf("\ninforme a quantidade de RA: "); 
  scanf("%i", &repeticoes); 
  //int *ponteiro=&repeticoes;
  //char **ptr=(char**)malloc(repeticoes * sizeof(char*)); */
  char RA[9];
  char novoRA[14]={"003xxxxxxxxxx\0"};
  for(int i=0;i<repeticoes;i++){ 
    printf("\ninforme o ra: ");
    scanf("%s", RA); 
    transformacao(RA,novoRA); 
    char novoRA[14]={"003xxxxxxxxxx\0"};

  }

  return 0;
}