#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct Cliente { 
    struct Cliente *clienteAnterior;
    char nome[100];
    struct Cliente *proximoCliente;
} Cliente;

Cliente *cabecaListaClientes = NULL;
Cliente *caudaListaClientes = NULL;

void menu() {
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Listar Clientes\n");
    printf("3 - Remover Clientes\n");
    printf("0 - Sair\n");
}

void inserirCliente() {
    system("clear");
    Cliente *novoCliente = (Cliente*)malloc(sizeof(Cliente));
    printf("Digite o nome do cliente: ");
    scanf("%s", novoCliente->nome);
    novoCliente->clienteAnterior = NULL;
    novoCliente->proximoCliente = NULL;

    if (cabecaListaClientes == NULL) { 
        cabecaListaClientes = novoCliente;
        caudaListaClientes = novoCliente; 
    } else { 
        caudaListaClientes->proximoCliente = novoCliente;
        novoCliente->clienteAnterior = caudaListaClientes; 
        caudaListaClientes = novoCliente;        
    }
}

void listarClientes() {
    system("clear");

    if (cabecaListaClientes == NULL) { 
        printf("Lista vazia\n"); 
    } else {
        Cliente *aux = cabecaListaClientes;
        while (aux != NULL) { 
            printf("Nome: %s\n", aux->nome);
            aux = aux->proximoCliente;
        }
    }
}

void removerCliente() { 
    system("clear");
    //situação lista vazia
    if (cabecaListaClientes == NULL) { 
        printf("\nLista vazia\n");
        return;
    }
    
    char nomeAux[100];
    printf("\nInsira o nome do cliente que deseja remover: "); 
    scanf("%s", nomeAux); 

    Cliente *aux = cabecaListaClientes;
    
    // Situação com apenas um cliente
    if (cabecaListaClientes == caudaListaClientes) { 
        printf("\nLista com apenas um cliente\n"); 
        if (strcmp(aux->nome, nomeAux) == 0) {
            printf("Cliente encontrado\n");
            cabecaListaClientes = NULL; 
            caudaListaClientes = NULL; 
            free(aux); 
            printf("Cliente removido com sucesso\n");
            return;
        } else { 
            printf("\nO cliente que deseja remover não consta na lista\n");
            return;
        }
    }
    
    // Situação com mais de um cliente
    while (aux != NULL) { 
        if (strcmp(aux->nome, nomeAux) == 0) { 
            printf("\nCliente encontrado\n");

            if (aux == cabecaListaClientes) { // Remover a cabeça da lista
                cabecaListaClientes = aux->proximoCliente;
                cabecaListaClientes->clienteAnterior = NULL;
            } else if (aux == caudaListaClientes) { // Remover a cauda da lista
                caudaListaClientes = aux->clienteAnterior;
                caudaListaClientes->proximoCliente = NULL;
            } else { // Remover do meio da lista
                aux->clienteAnterior->proximoCliente = aux->proximoCliente;
                aux->proximoCliente->clienteAnterior = aux->clienteAnterior;
            }
            
            free(aux);
            printf("Cliente removido com sucesso\n");
            return;
        }
        
        aux = aux->proximoCliente;
    }

    printf("\nCliente não encontrado\n");
}

int main() { 
    int opcao;

    do { 
        printf("Escolha uma opcao:\n"); 
        menu();
        scanf("%d", &opcao);
        switch (opcao) { 
            case 1:
                inserirCliente(); 
                break; 
            case 2: 
                listarClientes(); 
                break; 
            case 3: 
                removerCliente(); 
                break; 
        }
    } while (opcao != 0);
    
    return 0;
}
