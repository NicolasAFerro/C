#include <stdio.h> 


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
}
void selectionSort(int repeticoes, int *vetor){
   for (int i=0; i<repeticoes;i++){
    int minimo = i;
    // pega indice do menor
    for (int j=i+1;j<repeticoes;j++){
      if ( vetor[j] < vetor[minimo]){
      minimo = j;
      }
    }
    int aux = vetor[minimo];
    vetor[minimo] = vetor[i];
    vetor[i] = aux;
  }
  
}
void insertionSort(int repeticoes, int *vetor){ 
  int j=1;
  while (j<repeticoes){
    int aux = vetor[j];
    int i = j - 1;
    while ( i >= 0 && vetor[i] > aux ) 
    { 
    vetor[i+1] = vetor[i]; 
    i = i - 1;
    } 
    vetor[i+1] = aux;
    j += 1;
  }
}
void exibirSequencia(int repeticoes, int *vetor){ 
  for(int i=0; i<repeticoes;i++){ 
    if(vetor[i]%2==0) 
      printf("\n%i", vetor[i]);
  } 
   for(int j=repeticoes; j>=0;j--){ 
     if(vetor[j]%2!=0) 
      printf("\n%i", vetor[j]);
  }


}


int main(){ 
  int repeticoes, vetor[200], metodo;
  printf("\ninsira o numero de repeticoes: "); 
  scanf("%i", &repeticoes); 
  for(int i=0;i<repeticoes;i++){ 
    printf("\nvetor[%i]: ", i+1); 
    scanf("%i", &vetor[i]); 
  }
  printf("\nQual metodo utilizar: "); 
  printf("\n[1]Bubble Sort"); 
  printf("\n[2]Selection Sort");
  printf("\n[3]Insertion Sort");
  scanf("\n%i", &metodo); 
  if(metodo==1) 
    bubbleSort(repeticoes, vetor); 
  else if(metodo==2) 
    selectionSort(repeticoes, vetor); 
  else
    insertionSort(repeticoes, vetor);
  exibirSequencia(repeticoes, vetor);
  return 0;
}