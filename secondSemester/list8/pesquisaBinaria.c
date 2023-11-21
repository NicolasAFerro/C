#include <stdio.h> 



typedef struct{

 int nrmatricula;
 char nome[40];
 float salario;

}funcionario;
void selectionSort(int numeroFunc, funcionario *vetor){ 
  for(int i=0;i<numeroFunc;i++){ 
    int minimo=i;
    for(int j=i+1;j<numeroFunc;j++){ 
      if(vetor[j].nrmatricula<vetor[minimo].nrmatricula){ 
        minimo=j;
      }
      funcionario auxiliar = vetor[minimo]; 
      vetor[minimo]=vetor[i]; 
      vetor[i]=auxiliar;
    }
  } 
}
int pesquisaBinaria(int numeroMatricula, int repeticoes, funcionario *vetor){ 
  int inicio=0, meio; 
  int fim= repeticoes-1;
   while (inicio <= fim) {
        meio = (inicio+fim) / 2;

        // Verifica se o elemento está no meio
        if (vetor[meio].nrmatricula == numeroMatricula)
            return meio;
        // Se o elemento for maior, ignore a metade direita
        if (vetor[meio].nrmatricula < numeroMatricula)
            inicio = meio + 1;
        // Se o elemento for menor, ignore a metade esquerda
        else
            fim = meio - 1;
    }

    // Se o elemento não estiver no array, retorna -1
    return -1;
}    


int main(){ 
  funcionario vetor [200];
  int numeroFunc, numeroMatricula, resultado;
  printf("\ndigite o numero de funcinarios: "); 
  scanf("%i", &numeroFunc); 
  for(int i=0;i<numeroFunc;i++){ 
    printf("\nmatricula funcionario[%i]: ",i);
    scanf("%i", &vetor[i].nrmatricula);
    printf("\nnome funcionario[%i]: ",i);
    scanf("%s", &vetor[i].nome); 
    printf("\nsalario funcionario[%i]: ",i);
    scanf("%f", &vetor[i].salario);
  }
  selectionSort(numeroFunc, vetor);
  printf("\n numero de matricula desejado: ");
  scanf("%i", &numeroMatricula);
  resultado=pesquisaBinaria(numeroMatricula, numeroFunc, vetor);
  if(resultado==-1) 
    printf("\nfuncionario nao encontrado"); 
  else { 
    printf("\nfuncionario[%i]: ", resultado); 
    printf("\nmatricula: %i", vetor[resultado].nrmatricula);  
    printf("\nnome funcionario: %s ",vetor[resultado].nome);
    printf("\n salario: %f", vetor[resultado].salario);
  }
  printf("\n-----------------------------------------------------"); 
  printf("\n lista de funcionarios:"); 
  for(int j=0;j<numeroFunc;j++){ 
    printf("\nfuncionario[%i]: ", j); 
    printf("\nmatricula: %i", vetor[j].nrmatricula);  
    printf("\nnome funcionario: %s ",vetor[j].nome);
    printf("\n salario: %f", vetor[j].salario);
    printf("\n+++++++++++++++++++++++++++++++++++++");
  }
  return 0; 
}