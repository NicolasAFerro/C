#include <stdio.h> 

/* Dados dois vetores A e B contendo 20 elementos
 inteiros cada, gerar e exibir um vetor 
C do mesmo tamanho cujos elementos sejam a soma dos respectivos 
elementos de A e 
B.*/
int main(){ 
  int vectorA [20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int vectorB [20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int vectorC [20]; 

  for (int i=0;i<20;i++){ 
    vectorC[i]=vectorA[i]+vectorB[i]; 
    printf("\n vector C [%i]: %i", i, vectorC[i]);

  };


  return 0;
}