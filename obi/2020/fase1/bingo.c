#include <stdio.h>
void insertionSort(int *vetor, int tam){
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
void exibir(int linhas, int colunas, int tabela[][100]){
  for(int l=0;l<linhas;l++){
    printf("linha %i\n", l);
    for(int a=0;a<colunas;a++)
        printf("%i", tabela[l][a]);
    }

}
void preencheOrdena(int linhas, int colunas, int tabela[][100]){
   for(int i=0;i<linhas;i++){
    printf("\n");
    for(int j=0; j<colunas; j++){
      //printf("\ntabelas[%i][%i]: ", i, j);
       (void)scanf("%i", &tabela[i][j]);
    }
    //int *ptr=tabela[i];
    insertionSort(tabela[i], colunas);

  }

}
int buscaBinaria(int inicio, int fim, int valorBusca, int *vetor){

  int meio;
  //printf("\nInicio: %i e Fim: %i",inicio, fim);
  if(inicio>fim)
    return -1; // Nesse caso o valor não foi encontrado (devolve -1)
  meio = (inicio + fim) / 2; // Calcula o índice do elemento do meio
  // O valor é maior então procura na sub-tabela à direita
  if(valorBusca>vetor[meio])
     return(buscaBinaria(meio + 1,fim,valorBusca,vetor));
  // O valor é menor então procura na sub-tabela à esquerda
					//if(strcmp(Tab[Meio].nome, Valor) < 0)
	if(valorBusca<vetor[meio])
  // Se não maior nem menor então só pode ser igual. Devolve…
    return(buscaBinaria(inicio,meio-1,valorBusca,vetor));
  return meio;

}
int main (){
  printf("TESTE");
  int linhas;
  int colunas;
  int numMax;
  int tabela[100][100];
  int cartelaSorteada[100];
  int resultado[100];
  for (int i=0;i<100;i++)
    resultado[i]=0;
  //printf("linhas: ");
  //scanf("%i", &linhas);
  //printf(" colunas: ");
  //scanf("%i", &colunas);
  //printf(" numMax: ");
  //scanf("%i", &numMax); 
  (void)scanf("%d %d %d", &linhas, &colunas, &numMax);
  preencheOrdena(linhas, colunas, tabela);
  //printf("\n");
  //exibir(linhas, colunas, tabela);
  //printf("cartela sorteada");
  for(int k=0;k<numMax;k++)
    (void)scanf("%i", &cartelaSorteada[k]);
  int k=0;
  for(int i=0;i<numMax;i++){ 
    int j;
    for(j=0;j<linhas;j++){ 
      if(buscaBinaria(0,colunas,cartelaSorteada[k],tabela[j])>-1)
        resultado[j]++;    
        if(resultado[j]==colunas){  
          printf("%i ", j+1); 
          i=numMax;
        } 
    }
    k++;
      
  }

  return 0;
}