// listas dinâmicas simplesmente encadeadas

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    float peso;
    struct No *proximo;
} No;

int main(){
    float pesodig;
    //INICIALIZAÇÃO DA LISTA. Um ponteiro chamado cabeça para um novo no
    No *cabeca=NULL;
    No *aux;
    //No *cauda=NULL;
    //CRIAÇÃO DE UM NOVO NO
    printf("insira um peso: ");
    scanf("%f", &pesodig);

    while(pesodig!=0){
    //alocação dinamica
    No *aux=(No*)malloc(sizeof(No));



    //INCLUSAO
    aux->peso=pesodig;// campo peso que é apontado por aux
    aux->proximo = cabeca;
    /*if(cabeca==NULL)
        cauda=aux;*/

    cabeca=aux;

    printf("insira um peso: ");
    scanf("%f", &pesodig);
    }
    //IMPRESSAO
    printf("\nlistas do nós: \n");
    int cont =1;
    No *aux2=cabeca;
    while(aux2!=NULL){
        printf("no[%d]: %.3f\n",cont, aux2->peso);// campo peso que é apontado por aux
        aux2=aux2->proximo;// aux recebe o campo proximo que é apontado por aux;
        cont++;
    }


}
