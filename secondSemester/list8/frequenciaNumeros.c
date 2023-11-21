#include <stdio.h> 

/* 
void bubbleSort(int tamanhoVetor, int *vetor){ 
  for(int i=tamanhoVetor-1;i>=1;i--){
    int trocaAconteceu=0; 
    for(int j=0; j<i;j++){ 
      if(vetor[j]>vetor[j+1]){ 
        int auxiliar = vetor[j]; 
        vetor[j]= vetor[j+1]; 
        vetor[j+1]=auxiliar; 
        trocaAconteceu=1;
      }
    }
    if(trocaAconteceu==0) 
      return;

  }  
} */
void insertionSort(int tam, int *vetor){ 
  int j=1;
  while (j<tam){
    int aux = vetor[j];
    int i = j - 1;
    while ( i >= 0 && vetor[i] > aux ) { 
      vetor[i+1] = vetor[i]; 
      i = i - 1;
    } 
    vetor[i+1] = aux;
    j = j + 1;
  }
}

int main(){ 
  int repeticoes, vetor[2000]; 
  int cont = 1;
  //printf("\nquantas repeticoes: "); 
  scanf("%i", &repeticoes);
  for(int i=0;i<repeticoes;i++){ 
    //printf("\ninsira o numero[%i]", i);
    scanf("%i", &vetor[i]);
  }
  insertionSort(repeticoes, vetor);
  //bubbleSort(repeticoes, vetor);
/*   for(int j=0;j<repeticoes;j++) 
    printf("\nvetor[%i]: %i", j, vetor[j]); */

  for (int j = 1; j < repeticoes; j++) {
      if (vetor[j] == vetor[j - 1]) {
          cont++;
      } else {
          
          printf("\n %i aparece %i vez(es)", vetor[j - 1], cont);
          cont = 1; 
       }
  }
    // Imprime a contagem do último número
  printf("\n %i aparece %i vez(es)", vetor[repeticoes - 1], cont);
  return 0;
} 

