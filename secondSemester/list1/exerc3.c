#include <stdio.h> 
/*Considere as matrizes A e B contendo 25 elementos inteiros
 cada, gerar e exibir uma 
matriz C de 50 elementos, cujos elementos sejam a intercalação
 dos elementos de A e 
B.*/
int main(){ 
  int vectorA[10]={1,3,5,7,9,11,13,15,17,19}; 
  int vectorB[10]={2,4,6,8,10,12,14,16,18,20}; 
  int vectorC[20]; 
  int j=0;

  for (int i=0; i<10; i++){ 
    vectorC[j]=vectorA[i]; 
    j++;
    vectorC[j]=vectorB[i]; 
    j++;
  }; 
  for(j=0;j<20;j++){ 
    printf("\nVectorC [%i]: %i", j, vectorC[j]);
  };


  return 0;
}