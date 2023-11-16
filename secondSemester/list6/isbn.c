#include <stdio.h> 
#include <string.h>

int Soma (int *matrizRetorno){ 
  int *ptr, soma1[10],soma2[10];
  soma1[0]=matrizRetorno[0];
  soma2[0]=matrizRetorno[0];
  for(int i=1;i<10;i++){ 
    soma1[i]=matrizRetorno[i]+soma1[i-1];
    soma2[i]=soma1[i]+soma2[i-1];
  }
  return soma2[10];
}
int transformaInteiro(char *isbn){ 
  int matrizRetorno[12],i;
  for(i=0;i<12;i++){ 
    if((isbn[i]!='-')&&(isbn[i]!='\0')){ 
      matrizRetorno[i]=(isbn[i]=='X'?10:(isbn[i]-'0'));
      printf("\nmatriz[%i]: %i",i,matrizRetorno[i]);
    }     
  } 
  //queria retornar um ponteiro ai chamar a função; 
  return Soma(matrizRetorno);
}
int main(){ 
  char isbn[12];
  int resultado;
  while(strcmp(isbn,"FIM")!=0){ 
    printf("\ninsira o ISBN: "); gets(isbn);
    if(strcmp(isbn,"FIM")==0)
      break;
    //printf("\nteste: %s", isbn);
    resultado=transformaInteiro(isbn)%11;
    if(resultado==0) 
      printf("\nISBN %s valido", isbn); 
    else
      printf("\nISBN invalido: %i", resultado);
  }
  return 0;
}