#include <stdio.h> 

int insertionSort(int tam, int *vetor){ 
  int j=1, cont=0;
  while (j<tam){
    int aux = vetor[j];
    int i = j - 1;
    while ( i >= 0 && vetor[i] > aux ) { 
      vetor[i+1] = vetor[i]; 
      i = i - 1;
      cont++;
    } 
    vetor[i+1] = aux;
    j = j + 1;
  
  }
  return cont;
}


int main (){ 
  int repeticoes, trem[50], numVagoes;
  //printf("\nnumero de casos de testes: "); 
  scanf("%i", &repeticoes); 
  for( int i=0;i<repeticoes;i++){ 
    //printf("\nnumero de vagoes: ");
    scanf("%i", &numVagoes);
    for(int j=0;j<numVagoes;j++){ 
      //printf("\nvagao[%i]: ", j); 
      scanf("%i", &trem[j]);
    }
    //printf ("\nOptimal train swapping %i takes", selectionSort(numVagoes, trem)); 
    printf ("\nOptimal train swapping  takes %i swaps.", insertionSort(numVagoes, trem));
    memset(trem, 0, sizeof(trem));
  }



  return 0; 
}