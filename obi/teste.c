/*Crie uma função substring que receba duas strings e dois números inteiros 
(correspondentes às posições da cópia). A função deverá copiar na string2 parte da string1 
de acordo com as posições. 
char RA[9]={“AN123456”};
char curso[3];
Exemplo: substring(RA,curso,1,2); → a string curso receberá o conteúdo “AN”*/


void copiarString(char RA[], char curso[], int inicio, int fim){
  int i;
  for( i=inicio;i<fim;i++){ 
    curso[i]=RA[i];
  }
  curso[i]='\0';
  printf("%s", curso);
}
#include <stdio.h> 

int main(){ 
  char RA[9]={"AN123456"};
  char curso[3];
  int inicioCpy=0, fimCpy=2;
  copiarString(RA,curso, inicioCpy, fimCpy);
  
  


  return 0 ;
}