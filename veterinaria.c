#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct Cliente { 
    struct Cliente *clienteAnterior;
    char nome[100];
    struct Cliente *proximoCliente;
} Cliente;

typedef struct Animal {
    struct Animal *animalAnterior;
    char nome[100];
    struct Cliente *dono; 
    struct Animal *proximoAnimal;
} Animal;

typedef struct Consultorio{ 
    struct Cliente *ClienteNoConsultorio; 
    float valorConsulta;

}

Consultorio ClinicaVeterinaria [5];



Cliente *cabecaListaClientes = NULL;
Cliente *caudaListaClientes = NULL;
Animal *cabecaListaAnimais = NULL; 
Animal *caudaListaAnimais = NULL;

void menu() {
    printf("Veterinaria de Ferro SA\n");
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Listar Clientes\n");
    printf("3 - Remover Cliente\n");
    printf("4 - Cadastrar Animal\n"); 
    printf("5 - Listar Animais\n"); 
    printf("6 - Remover Animal\n");
    printf("0 - Sair\n");
}

void InserirAnimal(Cliente *donoAnimal) { 
    //system("clear");
    Animal *novoAnimal = (Animal*)malloc(sizeof(Animal));
    printf("\nDigite o nome do Animal: ");
    scanf("%s", novoAnimal->nome);
    novoAnimal->animalAnterior = NULL;
    novoAnimal->proximoAnimal = NULL;
    novoAnimal->dono = donoAnimal; 

    if (cabecaListaAnimais == NULL) { 
        cabecaListaAnimais = novoAnimal;
        caudaListaAnimais = novoAnimal; 
    } else { 
        caudaListaAnimais->proximoAnimal = novoAnimal;
        novoAnimal->animalAnterior = caudaListaAnimais; 
        caudaListaAnimais = novoAnimal;        
    } 
} 

void inserirCliente() {
    system("clear");
    int cadastrarAnimal;
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
    printf("\nDeseja cadastrar um animal?\n1 - Sim\n2 - Não\n"); 
    scanf("%i", &cadastrarAnimal); 
    if(cadastrarAnimal == 1) { 
        InserirAnimal(novoCliente);
    }
}

void ListarAnimais() {
    system("clear");
    if (cabecaListaAnimais == NULL) { 
        printf("Lista vazia\n"); 
    } else {
        Animal *aux = cabecaListaAnimais;
        while (aux != NULL) { 
            printf("Nome: %s\n", aux->nome);
            aux = aux->proximoAnimal;
        }
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
            ListarAnimaisCadaCliente(aux->nome);
            aux = aux->proximoCliente;
        }
    }
}

void ListarAnimaisCadaCliente(char *nomeDono) {
    int encontrado = 0; 
    if (cabecaListaAnimais == NULL) { 
        printf("Lista vazia\n"); 
    } else {
        Animal *aux = cabecaListaAnimais;
        while (aux != NULL) {
            if(strcmp(aux->dono->nome, nomeDono) == 0) { 
                printf("\tAnimal: %s\n", aux->nome);
                encontrado = 1; 
            } 
            aux = aux->proximoAnimal;
        }
        if (!encontrado) 
            printf("\tNenhum animal encontrado para este cliente\n");
    }
}

Cliente* PegarCliente (char *donoProcurado) {  
    if (cabecaListaClientes == NULL) { 
        printf("Lista vazia\n"); 
        return NULL;
    } else {
        Cliente *aux = cabecaListaClientes;
        while (aux != NULL) {
            if(strcmp(aux->nome, donoProcurado) == 0) {
                return aux;
            }      
            aux = aux->proximoCliente;
        }
        printf("Cliente não encontrado\n");
        return NULL;
    }
}

void RemoverAnimal(char *nomeAux) {
    if (cabecaListaAnimais == NULL) { 
        printf("\nLista vazia\n");
        return;
    }

    Animal *aux = cabecaListaAnimais;

    if (cabecaListaAnimais == caudaListaAnimais) { 
        if (strcmp(aux->nome, nomeAux) == 0) {
            cabecaListaAnimais = NULL; 
            caudaListaAnimais = NULL; 
            free(aux); 
            printf("Animal removido com sucesso\n");
            return;
        } else { 
            printf("\nO animal que deseja remover não consta na lista\n");
            return;
        }
    }
    
    while (aux != NULL) { 
        if (strcmp(aux->nome, nomeAux) == 0) { 
            if (aux == cabecaListaAnimais) {
                cabecaListaAnimais = aux->proximoAnimal;
                cabecaListaAnimais->animalAnterior = NULL;
            } else if (aux == caudaListaAnimais) {
                caudaListaAnimais = aux->animalAnterior;
                caudaListaAnimais->proximoAnimal = NULL;
            } else {
                aux->animalAnterior->proximoAnimal = aux->proximoAnimal;
                aux->proximoAnimal->animalAnterior = aux->animalAnterior;
            }
            free(aux);
            printf("Animal removido com sucesso\n");
            return;
        }
        aux = aux->proximoAnimal;
    }

    printf("\nAnimal não encontrado\n"); 
}

void RemoverTodosAnimaisCliente(Cliente *donoAnimal) { 
    if (cabecaListaAnimais == NULL) { 
        return;
    } else {
        Animal *aux = cabecaListaAnimais;
        while (aux != NULL) {
            Animal *proximo = aux->proximoAnimal;
            if(strcmp(aux->dono->nome, donoAnimal->nome) == 0) {
                RemoverAnimal(aux->nome);
            }   
            aux = proximo;
        }
    } 
}

void removerCliente() { 
    system("clear");
    if (cabecaListaClientes == NULL) { 
        printf("\nLista vazia\n");
        return;
    }
    
    char nomeAux[100];
    printf("\nInsira o nome do cliente que deseja remover: "); 
    scanf("%s", nomeAux); 

    Cliente *aux = cabecaListaClientes;
    
    if (cabecaListaClientes == caudaListaClientes) { 
        if (strcmp(aux->nome, nomeAux) == 0) {
            cabecaListaClientes = NULL; 
            caudaListaClientes = NULL; 
            RemoverTodosAnimaisCliente(aux);
            free(aux); 
            printf("Cliente removido com sucesso\n");
            return;
        } else { 
            printf("\nO cliente que deseja remover não consta na lista\n");
            return;
        }
    }
    
    while (aux != NULL) { 
        if (strcmp(aux->nome, nomeAux) == 0) {
            if (aux == cabecaListaClientes) {
                cabecaListaClientes = aux->proximoCliente;
                cabecaListaClientes->clienteAnterior = NULL;
            } else if (aux == caudaListaClientes) {
                caudaListaClientes = aux->clienteAnterior;
                caudaListaClientes->proximoCliente = NULL;
            } else {
                aux->clienteAnterior->proximoCliente = aux->proximoCliente;
                aux->proximoCliente->clienteAnterior = aux->clienteAnterior;
            }
            RemoverTodosAnimaisCliente(aux);
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
    char dono[100];
    char nomeAnimal[100];

    do { 
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
            case 4: 
                listarClientes();
                printf("Qual o nome do dono?\n"); 
                scanf("%s", dono); 
                InserirAnimal(PegarCliente(dono)); 
                break;
            case 5: 
                ListarAnimais(); 
                break; 
            case 6: 
                ListarAnimais();  
                printf("Qual o nome do animal:\n");
                scanf("%s", nomeAnimal);                 
                RemoverAnimal(nomeAnimal); 
                break;
           
        }
    } while(opcao != 0);

    return 0;
}
