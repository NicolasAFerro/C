#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    float peso;
    struct No *proximo;
} No;
No *cabeca = NULL;
No *cauda = NULL;
No *aux = NULL;
float pesoDig;


void Inserir(){ 
  printf("\nInsira um elemento na fila: "); 
  scanf("%f", &pesoDig); 

  //independente de estar vazia, com um ou mais, vai sempre fazer criar um novo no
  No *novoNo = (No *)malloc(sizeof(No));
  novoNo->peso = pesoDig;
  novoNo->proximo = NULL;

  if (cabeca == NULL) {
    cabeca = novoNo;
    cauda = novoNo;
  } 
  else {
    cauda->proximo = novoNo;
    cauda = novoNo;
  }
}

void Remover(){
  printf("\n peso %f removido\n", cabeca->peso);  
  cabeca=cabeca->proximo;
}

void ListarPesos(){   
  // LISTAGEM DA FILA PELA CABEÇA
  int cont = 0;
  printf("\nElementos na fila:\n");
  aux = cabeca;
  while (aux != NULL) {
    printf("no[%d]: %.3f\n", cont, aux->peso);
    aux = aux->proximo;
    cont++;
  }

}
int main() {
  int opcao;

  do{  
    printf("1 - Inserir novo peso\n2 - Excluir peso existente\n3 - Exibir lista de pesos\n0 - Sair\n");
    scanf("%d", &opcao); 

   switch (opcao) {
            case 1:
                Inserir();
                break;
            case 2:
                Remover();
                break;
            case 3:
                ListarPesos();
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
  
  return 0;
}
