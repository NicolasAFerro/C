#include <stdio.h> 
#include <string.h>
 typedef struct {
  int num; 
  char descr[25]; 
  float valor; 
  int qtdes[12];
} Produto;
void mostrarProduto(Produto *product){ 
  printf("\nnumero: %i",product->num); 
  printf("\ndescricao: %s",product->descr);  
  printf("\nvalor: %f",product->valor); 
  for(int i=0;i<12;i++){ 
    printf("\nquantidade[%i]: %i ", i, product->qtdes[i]);
  }
}
int menorMaiorSoma(Produto *product, int condicao){ 
  int menor=product->qtdes[0], maior=product->qtdes[0], soma=0; 
    for(int i=0;i<12;i++){ 
      soma+=product->qtdes[i];
      menor=(product->qtdes[i] < menor?menor=product->qtdes[i]:menor); 
      maior=(product->qtdes[i] > maior?maior=product->qtdes[i]:maior);
    }
  if(condicao==1)
    return menor;
  else if(condicao==0) 
    return maior; 
  else 
    return soma;
}
void preencheProduto(Produto *novoProduto){  
  printf("\ninsira o numero do produto: ");
  scanf("%i",&novoProduto->num);
  printf("\ninsira a descricao do produto: ");
  scanf("%s",&novoProduto->descr); 
  printf("\ninsira o valor do produto: "); 
  scanf("%f",&novoProduto->valor); 
  printf("\ninsira as quantidades: ");
  for(int i=0;i<12;i++){  
    printf("\nquantidade[%i]:", i+1);
    scanf("%i", &novoProduto->qtdes[i]);
  }
}
int main(){ 
  Produto novoProduto, vProduto;
  int menorQuantidade, maiorQuantidade, soma;
  preencheProduto(&novoProduto);
  mostrarProduto(&novoProduto);
  for (int i = 0; i < strlen(novoProduto.descr); i++) {
    novoProduto.descr[i] = toupper(novoProduto.descr[i]);
  } 
  printf("\n--------------------------");
  mostrarProduto(&novoProduto);

  printf("\nmenor quantidade: %i", menorMaiorSoma(&novoProduto, 1)); 
  printf("\nmaior quantidade: %i", menorMaiorSoma(&novoProduto, 0)); 
  printf("\nsoma das quantidades: %i", menorMaiorSoma(&novoProduto, 2));
  printf("\n--------------------------");
  preencheProduto(&vProduto);
  mostrarProduto(&vProduto);
 
  Produto vetorProdutos[10];
  return 0;
}