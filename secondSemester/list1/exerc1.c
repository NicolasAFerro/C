#include <stdio.h> 
/*Dado um vetor A contendo 10 elementos inteiros, gerar 
e exibir um vetor B cujos 
elementos estão na ordem inversa de A*/
int main (){ 
  int vectorA [10]= {1,2,3,4,5,6,7,8,9,10}; 
  int vectorB [10]; 
  int cont=9;
  for (int i=0; i<10; i++){ 
    vectorB[i]=vectorA[cont]; 
    printf("\nVector B [%i]: %i",i, vectorB[i]); 
    cont--;
  };
  return 0;
}