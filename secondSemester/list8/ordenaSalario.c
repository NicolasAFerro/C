// Criar fun��o para atualizar os salarios com o aumento
// Criar fun��o para ordenar por inser��o os sal�rios em ordem decrescente

#include <stdio.h>

#define VALORHORA 30
#define aumento 1.05


//As diretivas #define s�o substitu�das pelo pr�-processador antes da compila��o,
//ou seja, todas as ocorr�ncias de VALORHORA no c�digo ser�o substitu�das pelo valor 30
//antes mesmo de o programa ser compilado.
//Isso n�o cria uma vari�vel, mas sim uma substitui��o direta do texto.


typedef struct funcionario {
    int nummatricula;
    char nome[81];
    float salario;
    int tipo;
    float qthoras;
} func;

void ordenarFunc( func *funcionarios){ 
    for (int i=0; i<7;i++){
    int minimo = i;
    for (int j=i+1;j<7;j++){
      if ( funcionarios[j].salario >funcionarios[minimo].salario){
      minimo = j;
      }
    }
    func aux = funcionarios[minimo];
    funcionarios[minimo] = funcionarios[i];
    funcionarios[i] = aux;
  }
  
}

void ExibeFuncs(func *funcionarios){

    printf("Funcionarios cadastrados:\n");
    for (int i = 0; i < 7; i++) {
        printf("Funcionario %d:\n", i + 1);
        printf("Numero de matricula: %d\n", funcionarios[i].nummatricula);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Tipo: %d\n", funcionarios[i].tipo);
        printf("Salario: %.2f\n", funcionarios[i].salario);
        printf("\n");
    }
}
void aumentoSalario(func *funcionarios){ 
    for(int i=0; i<7;i++){ 
        if(funcionarios[i].tipo==1){ 
            funcionarios[i].salario=funcionarios[i].salario*aumento;
        }
    }

}
void ArmazenaFuncs(func *funcionarios){
// Defini��o de valores para 3 funcion�rios do tipo 1
    for (int i = 0; i < 3; i++) {
        funcionarios[i].nummatricula = i + 1;
        funcionarios[i].tipo = 1;
        sprintf(funcionarios[i].nome, "Funcionario Tipo 1 %d", i + 1);
    }
    funcionarios[0].salario = 1500.0;
    funcionarios[1].salario = 3000.0;
    funcionarios[2].salario = 2650.0;
    funcionarios[3].qthoras = 40.0;
    funcionarios[4].qthoras = 35.0;
    funcionarios[5].qthoras = 27.0;
    funcionarios[6].qthoras = 30.5;

    // Defini��o de valores para 4 funcion�rios do tipo 2
    for (int i = 3; i < 7; i++) {
        funcionarios[i].nummatricula = i + 1;
        funcionarios[i].tipo = 2;
		funcionarios[i].salario=funcionarios[i].qthoras * VALORHORA;
        sprintf(funcionarios[i].nome, "Funcionario Tipo 2 %d", i + 1);
    }

}
int main() {
    func funcionarios[7];

    ArmazenaFuncs(funcionarios);
    ExibeFuncs(funcionarios);
    aumentoSalario(funcionarios);
    printf("\n SALARIOS AUMENTADOS");
    ordenarFunc(funcionarios); 
    printf("\n SALARIOS ORDENADOS");
    ExibeFuncs(funcionarios);
    return 0;
}
